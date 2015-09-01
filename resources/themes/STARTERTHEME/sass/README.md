# Theme styling structure
*In this theme, we follow the principles of SMACSS. We do this to get a better separation of the code and thereby make it more manageable.*


### Code standards
First and foremost it's important to keep your styles clean and tidy.
[Standard code style guidelines apply](https://www.drupal.org/coding-standards/css).
Bear in mind though, that when writing comments in Sass, you are allowed to use
line comments, and heavily encouraged to use them instead of block.
Block comments aren't necessarily removed from the compiled code, unless it's
specified in the build.


### Sass preprocessor
[Sass](http://sass-lang.com/) was originally using a Ruby like syntax with indentation instead of
braces. It's discouraged to use this syntax however you might find old
projects that still uses this.

A very important thing to remember when writing Sass styling is to not nest
to much. A good rule of thumb is to not nest more than 3 levels and be careful
when using @extend. – If you're new to Sass then we highly recommend that you read their short [guide](http://sass-lang.com/guide) before you start.


### Structure
We divide our styling into 4-5 categories. Base, Components, Layout, State and Theme. If you're unsure why we do this, or what the difference is between the categories, then we highly recommend that you go to [pReload's documentation directory](https://github.com/reload/preload/tree/develop/documentation) and read some of the suggested reading-material.

Inside all of the directories (representing a different category) there is also a `README.md` file with a few guidelines, so you don't have to look for material. These exist in case you're temporarily hit by memory loss and might be enough material to get you kickstarted.

***Tree example***

```
.
|–– base
   |–– _body.scss
   |–– _reset.scss
|–– component
   |–– _articles--full.scss
   |–– _articles--teaser.scss
   |–– _button.scss
   |–– _pager.scss
   |–– _search-result.scss
|–– helper
   |–– _unit-formatters.scss
   |–– _media-queries.scss
|–– layout
   |–– _2col-bricks.scss
   |–– _grid.scss
   |–– _site-template.scss
|–– state
   |–– _accordion-behaviour.scss
   |–– _messages.scss
   |–– _spin.scss
|–– theme
   |–– _button.scss
   |–– _pager.scss
|–– base.scss
|–– components.scss
|–– layout.scss
|–– state.scss
|–– theme.scss
```
