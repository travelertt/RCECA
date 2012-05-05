<?php
/**
 * @file
 * previous_jobs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function previous_jobs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|previous_jobs|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'previous_jobs';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'testimony_for_job' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|previous_jobs|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|previous_jobs|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'previous_jobs';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|previous_jobs|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|testimonials|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'testimonials';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|testimonials|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|testimonials|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'testimonials';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'More',
        'wrapper' => 'span',
        'class' => '',
      ),
    ),
  );
  $export['node|testimonials|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function previous_jobs_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'testimony_for_job';
  $ds_field->label = 'Testimony for Job';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'views|testimonials-testimony_for_job',
    'block_render' => '3',
  );
  $export['testimony_for_job'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function previous_jobs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|previous_jobs|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'previous_jobs';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'body',
        1 => 'field_service_ref',
      ),
      'right' => array(
        0 => 'testimonials_entity_view_1',
        1 => 'testimony_for_job',
        2 => 'links',
      ),
      'footer' => array(
        0 => 'field_img_gallery',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'body' => 'left',
      'field_service_ref' => 'left',
      'testimonials_entity_view_1' => 'right',
      'testimony_for_job' => 'right',
      'links' => 'right',
      'field_img_gallery' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|previous_jobs|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|previous_jobs|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'previous_jobs';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_service_ref',
        2 => 'body',
      ),
      'right' => array(
        0 => 'field_img_gallery',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_service_ref' => 'left',
      'body' => 'left',
      'field_img_gallery' => 'right',
    ),
    'limit' => array(
      'field_img_gallery' => '5',
    ),
    'classes' => array(),
  );
  $export['node|previous_jobs|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|testimonials|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'testimonials';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_testament_authour',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_testament_authour' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|testimonials|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|testimonials|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'testimonials';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'node_link',
        3 => 'field_testament_authour',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
      'field_testament_authour' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|testimonials|teaser'] = $ds_layout;

  return $export;
}
