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
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_page_slides_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function front_page_slides_image_default_styles() {
  $styles = array();

  // Exported image style: front-page-slide.
  $styles['front-page-slide'] = array(
    'name' => 'front-page-slide',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '960',
          'height' => '400',
        ),
        'weight' => '2',
      ),
      6 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '960',
          'height' => '400',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
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
