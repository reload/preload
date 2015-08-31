# Component

**Rule of thumb:** if it's context independent, it should exist as its own component.


> A Module is a more discrete component of the page. It is your navigation bars and your carousels and your dialogs and your widgets and so on. This is the meat of the page. Modules sit inside Layout components. Modules can sometimes sit within other Modules, too. Each Module should be designed to exist as a standalone component. In doing so, the page will be more flexible. If done right, Modules can easily be moved to different parts of the layout without breaking.

> When defining the rule set for a module, avoid using IDs and element selectors, sticking only to class names. A module will likely contain a number of elements and there is likely to be a desire to use descendent or child selectors to target those elements.

[SMACSS.com](https://smacss.com/book/type-module)

*It's not always as simple as stated above in Drupal 7. Sometimes you'll target an element inside a wrapping class since it can be tricky to provide different classes to all elements without spending all the clients money – But it's okay! We have accepted that and are rooting for Drupal 8, meanwhile.*
