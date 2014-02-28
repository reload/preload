# STARTERTHEME theme

## Set up
If you don't have Grunt installed, then go follow the [Getting started](http://gruntjs.com/getting-started) guide.

To build the theme, cd to the theme directory and run `npm install`.

## Usage
To start Grunt, run `grunt` in the theme dir. Now css is compiled to 2 directories: css and css\_dev. The css folder should be checked into git and end up in production and the css\_dev folder is only for local dev use. The difference between the two is that the css\_dev folder is compiled to be readable and with comments, and the css folder is compacted and without comments.
