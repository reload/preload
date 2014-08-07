@javascript
Feature: View published article.

  Background:
    Given there is an published article.

  Scenario: View an article published as owner.
    When I view the article as "owner".
    Then I see the articles content.

  Scenario: View an article published as editor.
    When I view the article as "editor".
    Then I see the articles content.

  Scenario: View an article published as anonymous.
    When I view the article as "anonymous"
    Then I see the articles content.
