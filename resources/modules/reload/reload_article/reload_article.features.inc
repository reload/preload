<?php
/**
 * @file
 * reload_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reload_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function reload_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for background and information heavy pages.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
