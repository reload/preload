<?php

use Behat\Behat\Context\ClosuredContextInterface,
    Behat\Behat\Context\TranslatedContextInterface,
    Behat\Behat\Context\BehatContext,
    Behat\Behat\Exception\PendingException;
use Behat\MinkExtension\Context\MinkContext;
use Drupal\DrupalExtension\Context\DrupalContext;


class FeatureContext extends DrupalContext
{
  public function __construct(array $parameters)
  {
    if (isset($parameters['drupal_users'])) {
      $this->drupal_users = $parameters['drupal_users'];
    }
  }
  
}

