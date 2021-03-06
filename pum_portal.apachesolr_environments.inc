<?php
/**
 * @file
 * pum_portal.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function pum_portal_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'test solr';
  $environment->url = 'http://132.160.180.2:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_access_always_add_grants' => 0,
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'country',
      1 => 'faq',
      2 => 'merci_reservation',
      3 => 'news',
      4 => 'page',
      5 => 'pum_forum_item',
      6 => 'pum_portal_blog',
      7 => 'pum_portal_document',
      8 => 'pum_portal_news',
      9 => 'room_reservations_reservation',
      10 => 'sector',
      11 => 'story_customer',
      12 => 'story_expert',
      13 => 'story_partner',
      14 => 'story_regular',
      15 => 'webform',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
