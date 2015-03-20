<?php
/**
 * @file
 * pum_portal.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pum_portal_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|pum_forum_item|default';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pum_forum_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags group',
    'weight' => '2',
    'children' => array(
      0 => 'field_pum_country',
      1 => 'field_pum_generic',
      2 => 'field_pum_private',
      3 => 'field_pum_sector',
      4 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|pum_forum_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|pum_portal_blog|default';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pum_portal_blog';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags group',
    'weight' => '3',
    'children' => array(
      0 => 'field_pum_country',
      1 => 'field_pum_generic',
      2 => 'field_pum_private',
      3 => 'field_pum_sector',
      4 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|pum_portal_blog|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|pum_portal_document|default';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pum_portal_document';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags group',
    'weight' => '2',
    'children' => array(
      0 => 'field_document_type',
      1 => 'field_pum_country',
      2 => 'field_pum_generic',
      3 => 'field_pum_private',
      4 => 'field_pum_sector',
      5 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|pum_portal_document|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|pum_portal_news|default';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pum_portal_news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags group',
    'weight' => '2',
    'children' => array(
      0 => 'field_pum_country',
      1 => 'field_pum_generic',
      2 => 'field_pum_private',
      3 => 'field_pum_sector',
      4 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|pum_portal_news|default'] = $field_group;

  return $export;
}
