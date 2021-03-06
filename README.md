# pReload
This is a project that tries to ensure that a new site is built with the best possible settings.

## What does it do?
pReload shellscripts builds a preconfigured drupal site where things such as wysiwyg, path modules and a lot of other basic "should be in core" functionality. When you build this it's ready to be checked in in a seperate git repository.

## Building drupal project
Start by creating a folder in which you want your Drupal installation to be. eg. ` ~/Sites/project`

Firstly you have to clone this project into your folder so that the location is ` ~/Sites/project/preload`
pReload contains some shellscripts that will help you build your site.
It's important to note that this script always should be run from the root of your drupal site.

Run `./preload/build drupal`. This command will basically build your site from a make file. Also including several contributed modules.
When this is done your project folder contains a drupal site with all custom and contrib modules located in `sites/all/modules`. Not using profiles.
Basically you can rerun this command as many times as you feel like, but it's only intended to be run in the initial face of a project.

Depending on your DB setup you can create the database manually. The install script  `./preload/build drupal` will as one of the first commands install drupal minimal profile using a db-url
which you will be prompted to enter. Drush will be able to create your database here, if you use a user with sufficient permissions.
The install script prompts you with various questions installing and configuring contrib modules.

After configuring virtual hosts and such. You should be able to hit the site in your browser.

## Wait, i need a theme?!
The site is now running with Bartik, and a good way to get started theming would be to run the last shellscript. `./preload/build theme`. This shellscript will build you a stripped theme, configured stub sass files and configured with grunt.

### Grunt
Go to the root folder of your freshly created theme. Here you run `npm install`
node package manager will then download the modules needed for grunt to perform it's tasks. The modules will be locate in `THEME/node_modules` when these modules are installed you should be able to run the grunt watcher `grunt`.
