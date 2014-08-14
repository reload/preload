@javascript
Feature: View Published Content
In order to ensure the visibility of published content
As a content owner
I need the content to be visible for all visitors

  Background:
    Given there is a published article

  Scenario: View a published article as owner
    When I view the article as "content owner"
    Then I see the articles content

  Scenario: View a published article as editor
    When I view the article as "editor"
    Then I see the articles content

  @clean-up
  Scenario: View an article published as anonymous
    When I view the article as "anonymous"
    Then I see the articles content

