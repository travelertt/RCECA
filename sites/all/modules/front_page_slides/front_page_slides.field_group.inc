<?php
/**
 * @file
 * front_page_slides.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function front_page_slides_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relative|node|front_page_slides|full';
  $field_group->group_name = 'group_relative';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page_slides';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relative',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Relative',
      'instance_settings' => array(
        'classes' => 'relative',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_relative|node|front_page_slides|full'] = $field_group;

  return $export;
}
