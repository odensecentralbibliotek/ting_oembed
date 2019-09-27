<?php
/**
 * @file
 * ting_oembed_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ting_oembed_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "oembed" && $api == "oembed_provider") {
    return array("version" => "1");
  }
}
