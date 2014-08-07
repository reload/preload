@javascript
Feature: View unpublished content.

  Background:
    Given there is an unpublished piece of content.

  Scenario: View a piece of unpublished content as owner.
    When I view the content as "owner".
    Then I see the content as a page.

  Scenario: View an article unpublished as editor.
    When I view the article as "editor".
    Then I see the articles content.

  Scenario: View an article unpublished as anonymous.
    When I view the article as "anonymous".
    Then I get an page not found or access denied.
