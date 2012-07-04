<?php
/**
 * @file
 * front_page_slides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_slides_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function front_page_slides_node_info() {
  $items = array(
    'front_page_slides' => array(
      'name' => t('Front-page Slides'),
      'base' => 'node_content',
      'description' => t('The slides that appear on the front-page of the website. You can new slides to the list or remove them here.'),
      'has_title' => '1',
      'title_label' => t('Slide Header Text'),
      'help' => t('This text will be displayed on the slide.'),
    ),
  );
  return $items;
}
