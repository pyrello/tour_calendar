<?php
/**
 * @file
 * tour_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tour_calendar_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tour_calendar_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tour_calendar_node_info() {
  $items = array(
    'show' => array(
      'name' => t('Show'),
      'base' => 'node_content',
      'description' => t('Provide information about a show that your band or act will play at.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
