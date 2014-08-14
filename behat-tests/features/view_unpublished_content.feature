@javascript
Feature: View Unpublished Content
In order to control the visibility of unpublished content
As a content owner
I need the content to be visible for editors but not for anonymous visitors

  Background:
    Given there is an unpublished article

  Scenario: View an unpublished article as owner
    When I view the article as "content owner"
    Then I see the articles content

  Scenario: View an unpublished article as editor
    When I view the article as "editor"
    Then I see the articles content

  @clean-up
  Scenario: View an unpublished article as anonymous
    When I view the article as "anonymous"
    Then I get a page not found or access denied
