<?php
/**
 * @file
 * pum_portal.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function pum_portal_default_rules_configuration() {
  $items = array();
  $items['rules_logindestination'] = entity_import('rules_config', '{ "rules_logindestination" : {
      "LABEL" : "logindestination",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [ { "redirect" : { "url" : "portal", "force" : 0 } } ]
    }
  }');
  return $items;
}
