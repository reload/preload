@javascript @specific-text
Feature: Login test
In order to get access to content for authenticated users
As an editor
I want to be able to login

  @api
  Scenario: Login as editor
    Given I am on homepage
    And I am logged in as a user with the "editor" role
    Then I should not see "Log ind"
