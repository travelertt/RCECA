<?php
/**
 * @file
 * previous_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function previous_jobs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
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
function previous_jobs_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function previous_jobs_image_default_styles() {
  $styles = array();

  // Exported image style: 230w_173h
  $styles['230w_173h'] = array(
    'name' => '230w_173h',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '150',
          'height' => '125',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: grid_4
  $styles['grid_4'] = array(
    'name' => 'grid_4',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '300',
          'height' => '250',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function previous_jobs_node_info() {
  $items = array(
    'previous_jobs' => array(
      'name' => t('Previous Jobs'),
      'base' => 'node_content',
      'description' => t('Contains image Gallery of jobs and a description of what services were provided. Along with Tags of what services were provided.'),
      'has_title' => '1',
      'title_label' => t('Job Name'),
      'help' => t('Job name must be unique. You can\'t have another Job with the same name.

The First Image will be larger than the others and should be the best.

Tags are helpful for SEO and for customers to quickly understand what services were provided.'),
    ),
    'testimonials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => t('Displayed on the Previous Work page that the testimonial relates too and dispersed around the site. Testimonials are any good thing that a pervious customer had to say.'),
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => t('Testimonials shouldn\'t be altered, but the exactly what the customer wrote, except profanity. '),
    ),
  );
  return $items;
}
