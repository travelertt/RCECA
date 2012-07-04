<?php
/**
 * @file
 * front_page_slides.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function front_page_slides_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|front_page_slides|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'front_page_slides';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'abs_bottom',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
  );
  $export['node|front_page_slides|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function front_page_slides_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|front_page_slides|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'front_page_slides';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'group_relative',
        1 => 'title',
        2 => 'field_image',
      ),
    ),
    'fields' => array(
      'group_relative' => 'ds_content',
      'title' => 'ds_content',
      'field_image' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|front_page_slides|full'] = $ds_layout;

  return $export;
}
