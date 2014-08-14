@javascript @specific-text
Feature: Create An Article
In order to create an article
As an editor
I have to fill out the required fields

Scenario: Login and create article
  Given I log in as "editor"
  When I visit "/node/add/article"
  And I fill in the fields:
    | Title        | Image            | Body                          |
    | Test article | happy-kitten.jpg | Happy kitten looks surprised! |
  And save the article unpublished
  Then I should see "Test article created"
  And I should see that the article is unpublished
