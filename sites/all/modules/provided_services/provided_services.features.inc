<?php
/**
 * @file
 * provided_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function provided_services_ctools_plugin_api() {
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
function provided_services_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function provided_services_node_info() {
  $items = array(
    'services' => array(
      'name' => t('Services'),
      'base' => 'node_content',
      'description' => t('A Service provided by RCE like "Outdoor Lighting" with a description and images of the service. All Services will be listed on the <em>Services</em> page. Add a new service to have it list on that page.'),
      'has_title' => '1',
      'title_label' => t('Title of Service'),
      'help' => '',
    ),
  );
  return $items;
}
