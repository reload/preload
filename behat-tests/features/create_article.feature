@javascript
Feature: Create an article
  An editor login on the site and creates an article and types in rich text
  in the body field which is wysiwyg enabled. The article is then visible in
  the frontend with rich text.

  Scenario: Login and create article
    Given I log in as "editor"
    And i navigate to "Create Article"
    When I create article:
    | Title        | Image            | Body                          |
    | Test article | happy-kitten.jpg | Happy kitten looks surprised! |
    And save the article unpublished
    Then i see the article
