<?php
/**
 * @file
 * pum_portal.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pum_portal_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_portal:portal
  $menu_links['main-menu_portal:portal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portal',
    'router_path' => 'portal',
    'link_title' => 'Portal',
    'options' => array(
      'identifier' => 'main-menu_portal:portal',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Portal');


  return $menu_links;
}
