<?php
/**
 * @file
 * MODULESHORTHAND_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function MODULESHORTHAND_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function MODULESHORTHAND_media_image_default_styles() {
  $styles = array();

  // Exported image style: main_image.
  $styles['main_image'] = array(
    'name' => 'main_image',
    'label' => 'Main image',
    'effects' => array(
      1 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '',
          'height' => '',
          'keepproportions' => 0,
          'style_name' => 'main_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
