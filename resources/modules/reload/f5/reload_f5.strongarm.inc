<?php
/**
 * @file
 * reload_f5.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function reload_f5_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_field_type';
  $strongarm->value = 'date_popup';
  $export['scheduler_field_type'] = $strongarm;

  return $export;
}
