<?php
/**
 * @file
 * reload_editor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function reload_editor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'secure_permissions_active';
  $strongarm->value = 1;
  $export['secure_permissions_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'secure_permissions_use_default';
  $strongarm->value = 1;
  $export['secure_permissions_use_default'] = $strongarm;

  return $export;
}
