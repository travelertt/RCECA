<?php
/**
 * @file
 * Admin page callback for the trails module.
 */

/**
 * Builds and returns the trails settings form.
 */
function trails_admin_settings() {
  $form['trails_block_max'] = array(
    '#type' => 'select',
    '#title' => t('Maximum number of items to display'),
    '#options' => drupal_map_assoc(range(1, 200)),
    '#default_value' => variable_get('trails_block_max', ''),
    '#description' => t('This will set the maximum allowable number that can be displayed in a history block'),
    '#required' => TRUE,
  );
  return system_settings_form($form);
}

/**
 * Deletes the Trails History
 */
function trails_delete_history() {
  $form = array();
  variable_set('trails_history', array());
  return system_settings_form($form);
}
