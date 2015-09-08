<?php
/**
 * @file
 * Drush aliases.
 */

 // Shut up phpcs.
 $aliases = array();

// Client server remote information.
 $aliases['parent'] = array(
   'remote-host' => '123.45.67.89',
   'remote-user' => 'user',
   'ssh-options' => '-p 2200',
 );

 // Production environment.
 $aliases['prod'] = array(
   'parent' => '@parent',
   'uri' => 'hostname.com',
   'root' => '/var/www/hostname.com',
   'deployotron' => array(
     'branch' => 'master',
     'dump-dir' => '/backups/prod',
     'num-dumps' => 5,
     // Updb clears the cache.
     'no-cc-all' => TRUE,
   ),
 );

 // Stage environment.
 $aliases['stage'] = array(
   'parent' => '@parent',
   'uri' => 'stage.hostname.com',
   'root' => '/var/www/stage.hostname.com',
   'deployotron' => array(
     'branch' => 'develop',
     'dump-dir' => '/backups/stage',
     'num-dumps' => 3,
     // Updb clears the cache.
     'no-cc-all' => TRUE,
   ),
 );
