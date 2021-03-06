<?php
/**
 * @file
 * ting_oembed_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ting_oembed_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oembed|ting_object|ting_object|default';
  $field_group->group_name = 'group_oembed';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Material content',
    'weight' => '13',
    'children' => array(
      0 => 'field_ting_oembed_oembed',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Material content',
      'instance_settings' => array(
        'classes' => 'back',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_oembed|ting_object|ting_object|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oembed|ting_object|ting_object|form';
  $field_group->group_name = 'group_oembed';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'oEmbed',
    'weight' => '13',
    'children' => array(
      0 => 'field_ting_oembed_oembed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_oembed|ting_object|ting_object|form'] = $field_group;

  return $export;
}
