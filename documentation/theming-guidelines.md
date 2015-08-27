# Reload theme guidelines

#### As a Reloader you should read and follow these guidelines.

When Drupal 8 hits the road, a few community-approved standards (created and tested outside of Drupal) have been embraced. They are: [Idiomatic](https://github.com/necolas/idiomatic-css) CSS by Nicolas Gallagher, [Scalable and Modular Architecture for CSS (SMACSS)](https://smacss.com/) by Jonathan Snook and [BEM](https://en.bem.info/) by the team at Yandex.

We cannot use all of the standards documented on [Drupal's CSS Coding Standards](https://www.drupal.org/coding-standards/css) but we can try and replicate it as much as possible. We basically skip BEM (class naming convention), since it would take too much of our clients budget to implement and therefore make it a bad [return on investment](https://en.wikipedia.org/wiki/Return_on_investment). Instead, we choose to rely on the [Formatting standards](https://www.drupal.org/node/1887862) and [Separated Concerns / SMACSS architecture](https://www.drupal.org/coding-standards/css/architecture#separate-concerns).

It's also important that you read the [JavaScript Coding Standards](https://www.drupal.org/node/172169), [jQuery Coding Standards](https://www.drupal.org/node/1720586) and the [Drupal JavaScript API](https://www.drupal.org/node/304258) before you write any JavaScript. – An example of why you should read the API before you start going crazy would be: *Drupal doesn't use `$(document).ready()` but instead has an object called "behavior" that you attach functions too. All the clever mechanics of why need to know this is of course well documented in the link above.*


##### Additional information:
We have tried to gather some internal notes and articles if you wish to learn more about the individual guidelines.

* **Scalable and Modular Architecture for CSS**
  * https://smacss.com/
  * Short introductions available at [bramsmulders](http://bramsmulders.com/how-i-improved-my-workflow-with-smacss-sass.html) and
[vanseodesign](http://www.vanseodesign.com/css/smacss-introduction/).
  * As Drupal and SMACSS both uses the term "Module" we consider SMACSS Modules as Components instead.
  * *In all projects created by pReload, you will be able to find a README.md file in all the SASS directories with guidelines about what styling should be placed in them.*


* **Block, Element, Modifier**
  * https://en.bem.info/
  * There can be a lot of information on BEM's own website, so if you wish to get a quicker overview of BEM, then you should read [BEM 101](https://css-tricks.com/bem-101/) by the staff and collaborative guests of [CSS Tricks](https://css-tricks.com/).


* **Principles of writing consistent, idiomatic CSS**
  * https://github.com/necolas/idiomatic-css
  * You can study Idiomatic CSS's website if you wish to know where the Drupal formatting standards comes from, but we recommend that you focus more on Drupal's own [Formatting Standards](https://www.drupal.org/node/1887862) based on Idiomatic.


#### Tools
We take advantage of [npmjs.com](https://npmjs.com/) to manage our different theme dependencies. The only dependency that isn't installed by running `npm install` is [Grunt](http://gruntjs.com/getting-started#installing-the-cli).

The tools below represents what we use in 90% of all new themes to help our workflow and secure higher code-quality (alternatively take a look at our [pReload startertheme](https://github.com/reload/preload/tree/master/resources/themes/STARTERTHEME)).

* [Grunt (Task Runner)](http://gruntjs.com/) – To watch file changes and execute tools.
* [Sass (CSS Preprocessor)](http://sass-lang.com/) – We use [Libsass](http://sass-lang.com/libsass) in all new projects due to its faster compiler and ease of its integration.
* [Bourbon (A simple and lightweight mixin library for Sass)](http://bourbon.io/) - To make our lives easier, we choose to take advantage of Bourbon to take care of vendor-prefixes and most general utility mixins for Sass.
