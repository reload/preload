@javascript
Feature: Login test
  Kontroller at man kan logge ind

  Scenario: anden test
    Given I am on homepage
    Given I am logged in with username "reload" and password "reload!"
    Then I should see "Member for"
