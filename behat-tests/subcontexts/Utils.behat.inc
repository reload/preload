<?php

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;

class UtilsSubContext extends BehatContext implements DrupalSubContextInterface {
  

  public static function getAlias() {
    return 'Utils';
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
   * @When /^(?:|I )wait$/
   */
  public function iWait() {
    $this->getSession()->wait(1000);
  }

  /**
   * @When /^(?:|I )wait for "(?P<seconds>[^"]*)" seconds$/
   */
  public function iWaitForSeconds($seconds, $condition = "") {
    $milliseconds = (int) ($seconds * 1000);
    $this->getSession()->wait($milliseconds, $condition);
  }

  /**
   * @When /^(?:|I )wait until I see the(?:| element) "(?P<css_selector>[^"]*)"$/
   */   
  public function iWaitUntilISeeTheElement($selector) {
    $seconds = 10;
    $this->iWaitForSeconds($seconds, "jQuery('{$selector}').length > 0");
  }

  /**
   * @When /^(?:|I )wait for ajax call to complete$/
   */
  public function iWaitForAjaxCallToComplete() {
    $seconds = 5;
    $this->iWaitForSeconds($seconds, '(0 === jQuery.active)');
  }

  /**
   * @Then /^(?:|I )pause$/
   */
  public function iPause() {
    fwrite(STDOUT, "\033[s    \033[93m[Breakpoint] Press \033[1;93m[RETURN]\033[0;93m to continue...\033[0m");
    while (fgets(STDIN, 1024) == '') {}
    fwrite(STDOUT, "\033[u");

    return;
  }

  /**
   * @Given /^I hit enter in "([^"]*)"$/
   */
  public function iHitEnter($id)
  {
    $function = <<<JS
(function(){
  $ = jQuery;
  var e = jQuery.Event("keypress");
  e.which = 13;
  e.keyCode = 13;
  $('#$id').trigger(e);
})()
JS;
    try {
      $this->getSession()->executeScript($function);
    }
    catch(Exception $e) {
      throw new \Exception("Failed to hit enter.");
    }
  }


  // toggle style on/off on elements with given selector
  public function toggleStyle($selector) {
    $function = <<<JS
(function(){
  $ = jQuery;
  s = $('$selector');
  
  s.each(function(){
    if($(this).attr('style')) {
        $(this).attr('data-old-style', $(this).attr('style'));
        $(this).attr('style', '');
      }
      else {
        $(this).attr('style', $(this).attr('data-old-style'));
        $(this).attr('data-old-style', ''); 
      }
  });
})()
JS;
    $this->getSession()->executeScript($function);
  }


  /**
   * Spin function
   */
  public function spin($lambda, $wait = 20) {
    for ($i = 0; $i < $wait; $i++) {
      try {
        if ($lambda($this)) {
          return true;
        }
      }
      catch (Exception $e) {
        // nothing
      }
      sleep(1);
    }
    $backtrace = debug_backtrace();
    throw new Exception("Backtrace: ".$backtrace);
  }

}
