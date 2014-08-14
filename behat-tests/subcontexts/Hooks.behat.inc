<?php

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;
use Behat\Behat\Event\StepEvent;

class HooksSubContext extends BehatContext implements DrupalSubContextInterface {

  public static function getAlias() {
    return 'Hooks';
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
   * Necessary for tests where we dont get a clean browser pr session.
   * @AfterScenario @resetSession
   */
  public function resetSession()
  {
    // Hit log out.
    $this->gmc()->visit('/user/logout');
    // Attempt to clear any remaining cookies.
    $this->getSession()->reset();
  }

  /**
   * Take screenshot when step fails.
   * Works only with Selenium2Driver.
   *
   * @AfterStep @takeScreenshot
   */
  public function takeScreenshotAfterFailedStep(StepEvent $event) {
    $step_text = $event->getStep()->getText();
    $step_text = str_replace(' ', '_', $step_text);
    $step_text = preg_replace("#[^a-zA-Z_]#", '', $step_text);

    switch($event->getResult()) {
      case StepEvent::FAILED:
        $status = "FAILED";
        break;

      case StepEvent::PASSED:
        $status = "ok";
        break;

      case StepEvent::PENDING:
        $status = "pending";
        break;

      case StepEvent::SKIPPED:
        $status = "SKIPPED";
        break;

      case StepEvent::UNDEFINED:
        $status = "UNDEFINED";
        break;
    }

    $filename = date('YmdHisu') . '-' . $status . '-' . $step_text . '.png';
    file_put_contents($this->gmc()->tmp_folder . $filename, $this->getSession()->getDriver()->getScreenshot());
  }


}

