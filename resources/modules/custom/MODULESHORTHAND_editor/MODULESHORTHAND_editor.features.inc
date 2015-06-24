<?php
/**
 * @file
 * MODULESHORTHAND_editor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function MODULESHORTHAND_editor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
