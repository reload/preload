<?php

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;
use Behat\Gherkin\Node\TableNode;
use Behat\Behat\Exception\PendingException;

class ReloadBaseSubContext extends BehatContext implements DrupalSubContextInterface {

  public static function getAlias() {
    return 'ReloadBase';
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


// ----------------------------------------------------------------------------
// -------------------------- Content steps -----------------------------------
// ----------------------------------------------------------------------------

  /**
   * @Given /^i navigate to "([^"]*)"$/
   */
  public function iNavigateTo($arg1) {
    throw new PendingException();
  }

  /**
   * @When /^I create article:$/
   */
  public function iCreateArticle(TableNode $table) {
    throw new PendingException();
  }

  /**
   * @Given /^save the article unpublished$/
   */
  public function saveTheArticleUnpublished() {
    throw new PendingException();
  }

  /**
   * @Then /^i see the article$/
   */
  public function iSeeTheArticle() {
    throw new PendingException();
  }

  /**
   * @Given /^there is a published article$/
   */
  public function thereIsAPublishedArticle() {
    throw new PendingException();
  }

  /**
   * @When /^I view the article as "([^"]*)"$/
   */
  public function iViewTheArticleAs($arg1) {
    throw new PendingException();
  }

  /**
   * @Then /^I see the articles content$/
   */
  public function iSeeTheArticlesContent() {
    throw new PendingException();
  }

  /**
   * @Given /^there is an unpublished article$/
   */
  public function thereIsAnUnpublishedArticle() {
    throw new PendingException();
  }

  /**
   * @Then /^I get a page not found or access denied$/
   */
  public function iGetAPageNotFoundOrAccessDenied() {
    throw new PendingException();
  }

}
