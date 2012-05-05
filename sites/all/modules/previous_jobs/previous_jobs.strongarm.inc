<?php
/**
 * @file
 * previous_jobs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function previous_jobs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_previous_jobs';
  $strongarm->value = 0;
  $export['comment_anonymous_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_testimonials';
  $strongarm->value = 0;
  $export['comment_anonymous_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_previous_jobs';
  $strongarm->value = 1;
  $export['comment_default_mode_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_testimonials';
  $strongarm->value = 1;
  $export['comment_default_mode_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_previous_jobs';
  $strongarm->value = '50';
  $export['comment_default_per_page_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_testimonials';
  $strongarm->value = '50';
  $export['comment_default_per_page_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_previous_jobs';
  $strongarm->value = 1;
  $export['comment_form_location_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_testimonials';
  $strongarm->value = 1;
  $export['comment_form_location_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_previous_jobs';
  $strongarm->value = '1';
  $export['comment_preview_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_testimonials';
  $strongarm->value = '1';
  $export['comment_preview_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_previous_jobs';
  $strongarm->value = '2';
  $export['comment_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_previous_jobs';
  $strongarm->value = 1;
  $export['comment_subject_field_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_testimonials';
  $strongarm->value = 1;
  $export['comment_subject_field_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_testimonials';
  $strongarm->value = '2';
  $export['comment_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_previous_jobs';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_testimonials';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_previous_jobs';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_testimonials';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_previous_jobs';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_testimonials';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_previous_jobs';
  $strongarm->value = '1';
  $export['node_preview_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_testimonials';
  $strongarm->value = '1';
  $export['node_preview_testimonials'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_previous_jobs';
  $strongarm->value = 1;
  $export['node_submitted_previous_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_testimonials';
  $strongarm->value = 1;
  $export['node_submitted_testimonials'] = $strongarm;

  return $export;
}
