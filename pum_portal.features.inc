<?php
/**
 * @file
 * pum_portal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pum_portal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pum_portal_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function pum_portal_flag_default_flags() {
  $flags = array();
  // Exported flag: "Subscribe to this blog page".
  $flags['subscribe_to_this_blog_page'] = array(
    'entity_type' => 'node',
    'title' => 'Subscribe to this blog page',
    'global' => 0,
    'types' => array(
      0 => 'pum_portal_blog',
    ),
    'flag_short' => 'Subscribe to this blog page',
    'flag_long' => 'Subscribe to this blog page',
    'flag_message' => 'Subscribed',
    'unflag_short' => 'Unsubscribe from this blog page',
    'unflag_long' => 'Unsubscribe from this blog page',
    'unflag_message' => 'Not subscribed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'pum_portal',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "subscribe to this forum topic".
  $flags['subscribe_to_this_forum_topic'] = array(
    'entity_type' => 'node',
    'title' => 'subscribe to this forum topic',
    'global' => 0,
    'types' => array(
      0 => 'pum_forum_item',
    ),
    'flag_short' => 'Subscribe to this forum topic',
    'flag_long' => 'Subscribe to this forum topic',
    'flag_message' => 'Subscribed',
    'unflag_short' => 'Unsubscribe from this forum topic',
    'unflag_long' => 'Unsubscribe from this forum topic',
    'unflag_message' => 'Not subscribed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'pum_portal',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Subscribe to this user blog".
  $flags['subscribe_to_this_user_blog'] = array(
    'entity_type' => 'user',
    'title' => 'Subscribe to this user blog',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Subscribe to this user blog',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unsubscribe from this user blog',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 0,
    'access_uid' => '',
    'module' => 'pum_portal',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function pum_portal_node_info() {
  $items = array(
    'pum_forum_item' => array(
      'name' => t('Portal Forum Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pum_portal_blog' => array(
      'name' => t('Portal Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pum_portal_document' => array(
      'name' => t('Portal Document'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pum_portal_news' => array(
      'name' => t('Portal News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
