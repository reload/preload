<?php

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;
use Behat\Gherkin\Node\TableNode;
use Behat\Behat\Exception\PendingException;

class DrupalBaseSubContext extends BehatContext implements DrupalSubContextInterface {

  public static function getAlias() {
    return 'DrupalBase';
  }

  /**
   * Get Main Context
   */
  public function gmc() {
    return $this->getMainContext();
  }

  /**
   * Get Sub Context from alias
   */
  public function gsc($alias) {
    return $this->gmc()->getSubcontext($alias);
  }

  /**
   * Get Session from Main Context
   */
  public function getSession($name = null) {
    return $this->gmc()->getSession($name);
  }


  /**
   * @Given /^(?:|I )log in as "(?P<role>[^"]*)"$/
   */
  public function iLogInAs($role) {
    $user = $this->gmc()->drupal_users[$role];
    $this->login($user['username'], $user['password']);
  }

  /**
   * @Given /^(?:|I )am logged in with username "(?P<username>[^"]*)" and password "(?P<password>[^"]*)"$/
   */
  public function login($username, $password) {
    $this->gmc()->visit('/user');
    $this->gmc()->fillField('edit-name', $username);
    $this->gmc()->fillField('edit-pass', $password);
    $this->gmc()->pressButton('edit-submit');
    $this->getSession()->wait(2000);
    $this->gmc()->assertPageContainsText('Log ud');
  }

  /**
   * @When /^(?:|I )create the user:$/
   * @When /^(?:|I )create the users:$/
   */
  public function iCreateTheUser(TableNode $table) {
    $hash = $table->getHash();
    foreach ($hash as $user) {
      $username = $user['username'].time();
      $this->gmc()->visit('/admin/people/create');
      $this->gmc()->fillField('edit-name', $username);
      $this->gmc()->fillField('edit-mail', $username.'@reload.dk');
      $this->gmc()->fillField('edit-pass-pass1', $user['password']);
      $this->gmc()->fillField('edit-pass-pass2', $user['password']);
      $this->gmc()->checkOption($user['role']);
      $this->gmc()->pressButton('edit-submit');
      $this->getSession()->wait(1000);
      $this->gmc()->assertPageContainsText('Created a new user account for '.$user['username']);
    }
  }

  /**
   * Fills in CKEditor
   *
   * @Given /^(?:|I )fill in CKEditor with "(?P<text>[^"]*)"$/
   */
  public function iFillInCKEditor($text) {
    $this->theIframeInElementHasId("cke_edit-body-und-0-value", "CKEditor");
    $this->iFillInInWYSIWYGEditor($text, "CKEditor");
  }

  /**
   * Sets an id for the first iframe situated in the element specified by id.
   * Needed when wanting to fill in WYSIWYG editor situated in an iframe without identifier.
   *
   * @Given /^the iframe in element "(?P<element>[^"]*)" has id "(?P<id>[^"]*)"$/
   */
  public function theIframeInElementHasId($elementId, $iframeId) {
    $function = <<<JS
(function(){
  var elem = document.getElementById("$elementId");
  var iframes = elem.getElementsByTagName('iframe');
  var f = iframes[0];
  f.id = "$iframeId";
})()
JS;
    try {
      $this->getSession()->executeScript($function);
    }
    catch(Exception $e) {
      throw new \Exception(sprintf('No iframe found in the element "%s" on the page "%s".', $elementId, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * Fills in WYSIWYG editor with specified id.
   *
   * @Given /^(?:|I )fill in "(?P<text>[^"]*)" in WYSIWYG editor "(?P<iframe>[^"]*)"$/
   */
  public function iFillInInWYSIWYGEditor($text, $iframe) {
    try {
      $this->getSession()->switchToIFrame($iframe);
    }
    catch(Exception $e) {
      throw new \Exception(sprintf('No iframe with id "%s" found on the page "%s".', $iframe, $this->getSession()->getCurrentUrl()));
    }
    $this->getSession()->executeScript("document.body.innerHTML = '<p>".$text."</p>'");
    $this->getSession()->switchToIFrame();
  }

  /**
   * @Then /^(?:|the )element "(?P<innerElement>[^"]*)" is in "(?P<outerElement>[^"]*)"$/
   */
  public function assertElementInElement($innerElement, $outerElement) {
    $outerObj = $this->getSession()->getPage()->find('css', $outerElement);
    if (empty($outerObj)) {
      throw new \Exception(sprintf('No element matching selector "%s" was found on the page', $outerElement));
    }
    $outerObj->find('css', $innerElement);
  }

  /**
   * @When /^(?:|I )add the category "(?P<name>[^"]*)"$/
   */
  public function iAddTheCategory($name) {
    $this->gmc()->fillField('edit-name', $name);
    $this->gmc()->pressButton('edit-submit');
    $this->getSession()->wait(1000);
  }

  /**
   * @When /^I upload and insert the "(?P<imageName>[^"]*)"$/
   */
  public function iUploadAndInsertTheMedia($image) {
    // Needed for test in IE since the button hides
    $this->gmc()->scrollIntoView('edit-field-main-image-und-0-select');

    $this->gmc()->clickLink('edit-field-main-image-und-0-select');

    // Switch to iframe
    $this->getSession()->switchToIFrame('mediaBrowser');

    $this->gmc()->attachFileToField('edit-upload-upload', $image);

    $this->gsc('Utils')->spin(function($context) {
      $context->gmc()->assertRegionPressButton('Upload', 'MediaBrowserPage');
      return true;
    });

    $this->gsc('Utils')->spin(function($context) {
      $context->gmc()->assertRegionPressButton('edit-next', 'MediaBrowserPage');
      return true;
    });

    // Phatomjs crashes here!
    $this->gmc()->assertRegionPressButton('edit-submit', 'MediaBrowserPage');

    // switch back to main frame
    $this->getSession()->switchToIFrame();

    $this->iShouldSeeTheMediaThumbnail();
  }



  /**
   * @Then /^I should see the media thumbnail$/
   */
  public function iShouldSeeTheMediaThumbnail() {
    $page = $this->getSession()->getPage();
    // Find the thumbnail image.
    $thumbnail = $page->find('css','.media-thumbnail img');
    if (empty($thumbnail)) {
      throw new Exception (sprintf('The expected image tag was not found on %s' ,  $this->getSession()->getCurrentUrl()));
    }
    // Check that the thumbnail loads
    $thumb_href = $thumbnail->getAttribute('src');
    $this->checkForImage($thumb_href);
  }

  public function checkForImage($url) {
    $ch  = curl_init($url);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    curl_exec($ch);
    // get the content type
    $mime_type = curl_getinfo($ch, CURLINFO_CONTENT_TYPE);
    if (strpos($mime_type, 'image/') === FALSE) {
      throw new Exception (sprintf('%s did not return an image', $url));
    }
  }


}
