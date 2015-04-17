<?php
/**
 * @file
 * pum_portal.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pum_portal_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'country',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'two-col-panel',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'countries' => 'countries',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 1,
          2 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'topleft',
          1 => 'topright',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'topleft' => array(
        'type' => 'region',
        'title' => 'topleft',
        'width' => '50',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'topright' => array(
        'type' => 'region',
        'title' => 'topright',
        'width' => '50',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'top' => NULL,
      'topleft' => NULL,
      'topright' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:vocabulary - %term:name';
  $display->uuid = '2448beb5-3987-431c-b6dd-a64fac3e2d5b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'pum_portal_latest_forum_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $display->content['new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e'] = $pane;
    $display->panels['center'][0] = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $pane = new stdClass();
    $pane->pid = 'new-8008d3d9-b438-4602-878d-0165c1b32adc';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_documents';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8008d3d9-b438-4602-878d-0165c1b32adc';
    $display->content['new-8008d3d9-b438-4602-878d-0165c1b32adc'] = $pane;
    $display->panels['center'][1] = 'new-8008d3d9-b438-4602-878d-0165c1b32adc';
    $pane = new stdClass();
    $pane->pid = 'new-77a59b84-3da4-4c4d-a311-adada0a3956d';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_blogs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77a59b84-3da4-4c4d-a311-adada0a3956d';
    $display->content['new-77a59b84-3da4-4c4d-a311-adada0a3956d'] = $pane;
    $display->panels['right'][0] = 'new-77a59b84-3da4-4c4d-a311-adada0a3956d';
    $pane = new stdClass();
    $pane->pid = 'new-65179ef5-13af-4c29-a11d-647b08c586a1';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '65179ef5-13af-4c29-a11d-647b08c586a1';
    $display->content['new-65179ef5-13af-4c29-a11d-647b08c586a1'] = $pane;
    $display->panels['right'][1] = 'new-65179ef5-13af-4c29-a11d-647b08c586a1';
    $pane = new stdClass();
    $pane->pid = 'new-886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $pane->panel = 'top';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $display->content['new-886f81fe-65f9-46f4-a47f-ed50be2079a6'] = $pane;
    $display->panels['top'][0] = 'new-886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $pane = new stdClass();
    $pane->pid = 'new-0bed3bc4-78e5-4c44-b59f-951aaac3293b';
    $pane->panel = 'topleft';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_flag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0bed3bc4-78e5-4c44-b59f-951aaac3293b';
    $display->content['new-0bed3bc4-78e5-4c44-b59f-951aaac3293b'] = $pane;
    $display->panels['topleft'][0] = 'new-0bed3bc4-78e5-4c44-b59f-951aaac3293b';
    $pane = new stdClass();
    $pane->pid = 'new-41e72a07-81a5-44ba-a9c2-68a21283ea69';
    $pane->panel = 'topright';
    $pane->type = 'views';
    $pane->subtype = 'country_experts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.field_country_id',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41e72a07-81a5-44ba-a9c2-68a21283ea69';
    $display->content['new-41e72a07-81a5-44ba-a9c2-68a21283ea69'] = $pane;
    $display->panels['topright'][0] = 'new-41e72a07-81a5-44ba-a9c2-68a21283ea69';
    $pane = new stdClass();
    $pane->pid = 'new-165a767f-8c4a-432d-8fe5-7353c0f85c98';
    $pane->panel = 'topright';
    $pane->type = 'views';
    $pane->subtype = 'country_experts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'context' => array(
        0 => 'argument_term_1.field-country-id',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '165a767f-8c4a-432d-8fe5-7353c0f85c98';
    $display->content['new-165a767f-8c4a-432d-8fe5-7353c0f85c98'] = $pane;
    $display->panels['topright'][1] = 'new-165a767f-8c4a-432d-8fe5-7353c0f85c98';
    $pane = new stdClass();
    $pane->pid = 'new-42118dfd-8f41-4eb6-a0ae-9e2778882276';
    $pane->panel = 'topright';
    $pane->type = 'views';
    $pane->subtype = 'country_experts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'context' => array(
        0 => 'argument_term_1.field-country-id',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '42118dfd-8f41-4eb6-a0ae-9e2778882276';
    $display->content['new-42118dfd-8f41-4eb6-a0ae-9e2778882276'] = $pane;
    $display->panels['topright'][2] = 'new-42118dfd-8f41-4eb6-a0ae-9e2778882276';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'sector',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'two-col-panel',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'sector' => 'sector',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:vocabulary - %term:name';
  $display->uuid = '2448beb5-3987-431c-b6dd-a64fac3e2d5b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'pum_portal_latest_forum_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $display->content['new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e'] = $pane;
    $display->panels['center'][0] = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $pane = new stdClass();
    $pane->pid = 'new-8008d3d9-b438-4602-878d-0165c1b32adc';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_documents';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8008d3d9-b438-4602-878d-0165c1b32adc';
    $display->content['new-8008d3d9-b438-4602-878d-0165c1b32adc'] = $pane;
    $display->panels['center'][1] = 'new-8008d3d9-b438-4602-878d-0165c1b32adc';
    $pane = new stdClass();
    $pane->pid = 'new-62c63dcd-b533-47f8-900b-01ad44c05e88';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'sector_coordinator';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => 'argument_term_1.field_pum_coordinator_id',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '62c63dcd-b533-47f8-900b-01ad44c05e88';
    $display->content['new-62c63dcd-b533-47f8-900b-01ad44c05e88'] = $pane;
    $display->panels['center'][2] = 'new-62c63dcd-b533-47f8-900b-01ad44c05e88';
    $pane = new stdClass();
    $pane->pid = 'new-77a59b84-3da4-4c4d-a311-adada0a3956d';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_blogs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77a59b84-3da4-4c4d-a311-adada0a3956d';
    $display->content['new-77a59b84-3da4-4c4d-a311-adada0a3956d'] = $pane;
    $display->panels['right'][0] = 'new-77a59b84-3da4-4c4d-a311-adada0a3956d';
    $pane = new stdClass();
    $pane->pid = 'new-65179ef5-13af-4c29-a11d-647b08c586a1';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '65179ef5-13af-4c29-a11d-647b08c586a1';
    $display->content['new-65179ef5-13af-4c29-a11d-647b08c586a1'] = $pane;
    $display->panels['right'][1] = 'new-65179ef5-13af-4c29-a11d-647b08c586a1';
    $pane = new stdClass();
    $pane->pid = 'new-fff9f0f4-4c6e-4215-bc18-a8841d6f3c6c';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'subscriptions_ui-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fff9f0f4-4c6e-4215-bc18-a8841d6f3c6c';
    $display->content['new-fff9f0f4-4c6e-4215-bc18-a8841d6f3c6c'] = $pane;
    $display->panels['right'][2] = 'new-fff9f0f4-4c6e-4215-bc18-a8841d6f3c6c';
    $pane = new stdClass();
    $pane->pid = 'new-886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $pane->panel = 'top';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $display->content['new-886f81fe-65f9-46f4-a47f-ed50be2079a6'] = $pane;
    $display->panels['top'][0] = 'new-886f81fe-65f9-46f4-a47f-ed50be2079a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'community',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'two-col-panel',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'pum_generic' => 'pum_generic',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:vocabulary - %term:name';
  $display->uuid = '2448beb5-3987-431c-b6dd-a64fac3e2d5b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'pum_portal_latest_forum_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $display->content['new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e'] = $pane;
    $display->panels['center'][0] = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $pane = new stdClass();
    $pane->pid = 'new-8008d3d9-b438-4602-878d-0165c1b32adc';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_documents';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8008d3d9-b438-4602-878d-0165c1b32adc';
    $display->content['new-8008d3d9-b438-4602-878d-0165c1b32adc'] = $pane;
    $display->panels['center'][1] = 'new-8008d3d9-b438-4602-878d-0165c1b32adc';
    $pane = new stdClass();
    $pane->pid = 'new-3056d31d-f7a6-4937-b18b-15c722fde808';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'country_experts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => 'argument_term_1.field-country-id',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3056d31d-f7a6-4937-b18b-15c722fde808';
    $display->content['new-3056d31d-f7a6-4937-b18b-15c722fde808'] = $pane;
    $display->panels['center'][2] = 'new-3056d31d-f7a6-4937-b18b-15c722fde808';
    $pane = new stdClass();
    $pane->pid = 'new-41e72a07-81a5-44ba-a9c2-68a21283ea69';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'country_experts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.field_country_id',
      ),
      'override_title' => 1,
      'override_title_text' => 'Coordinator',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '41e72a07-81a5-44ba-a9c2-68a21283ea69';
    $display->content['new-41e72a07-81a5-44ba-a9c2-68a21283ea69'] = $pane;
    $display->panels['center'][3] = 'new-41e72a07-81a5-44ba-a9c2-68a21283ea69';
    $pane = new stdClass();
    $pane->pid = 'new-77a59b84-3da4-4c4d-a311-adada0a3956d';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_blogs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77a59b84-3da4-4c4d-a311-adada0a3956d';
    $display->content['new-77a59b84-3da4-4c4d-a311-adada0a3956d'] = $pane;
    $display->panels['right'][0] = 'new-77a59b84-3da4-4c4d-a311-adada0a3956d';
    $pane = new stdClass();
    $pane->pid = 'new-65179ef5-13af-4c29-a11d-647b08c586a1';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '65179ef5-13af-4c29-a11d-647b08c586a1';
    $display->content['new-65179ef5-13af-4c29-a11d-647b08c586a1'] = $pane;
    $display->panels['right'][1] = 'new-65179ef5-13af-4c29-a11d-647b08c586a1';
    $pane = new stdClass();
    $pane->pid = 'new-886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $pane->panel = 'top';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $display->content['new-886f81fe-65f9-46f4-a47f-ed50be2079a6'] = $pane;
    $display->panels['top'][0] = 'new-886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $pane = new stdClass();
    $pane->pid = 'new-412f19e3-4e61-4054-906d-166557e59f60';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'access user profiles',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a href="/portal/view-community-members/%term:tid">View members</a></p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-no-margin add-button',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '412f19e3-4e61-4054-906d-166557e59f60';
    $display->content['new-412f19e3-4e61-4054-906d-166557e59f60'] = $pane;
    $display->panels['top'][1] = 'new-412f19e3-4e61-4054-906d-166557e59f60';
    $pane = new stdClass();
    $pane->pid = 'new-1a4577a7-e38e-4cab-b784-f78a936cc77e';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer taxonomy',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add users',
      'title' => '',
      'body' => '<p><a href="/portal/add-private-taxonomy/%term:tid">Add users to %term:name</a></p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-no-margin add-button',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1a4577a7-e38e-4cab-b784-f78a936cc77e';
    $display->content['new-1a4577a7-e38e-4cab-b784-f78a936cc77e'] = $pane;
    $display->panels['top'][2] = 'new-1a4577a7-e38e-4cab-b784-f78a936cc77e';
    $pane = new stdClass();
    $pane->pid = 'new-5bf289b5-9554-472d-81e0-5f275c8764e0';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer taxonomy',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a href="/portal/delete-community-members/%term:tid">Delete users from Community</a></p>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-no-margin add-button',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5bf289b5-9554-472d-81e0-5f275c8764e0';
    $display->content['new-5bf289b5-9554-472d-81e0-5f275c8764e0'] = $pane;
    $display->panels['top'][3] = 'new-5bf289b5-9554-472d-81e0-5f275c8764e0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'private',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'two-col-panel',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'private_group' => 'private_group',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:vocabulary - %term:name';
  $display->uuid = '2448beb5-3987-431c-b6dd-a64fac3e2d5b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'pum_portal_latest_forum_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $display->content['new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e'] = $pane;
    $display->panels['center'][0] = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
    $pane = new stdClass();
    $pane->pid = 'new-8008d3d9-b438-4602-878d-0165c1b32adc';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_documents';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8008d3d9-b438-4602-878d-0165c1b32adc';
    $display->content['new-8008d3d9-b438-4602-878d-0165c1b32adc'] = $pane;
    $display->panels['center'][1] = 'new-8008d3d9-b438-4602-878d-0165c1b32adc';
    $pane = new stdClass();
    $pane->pid = 'new-77a59b84-3da4-4c4d-a311-adada0a3956d';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_blogs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77a59b84-3da4-4c4d-a311-adada0a3956d';
    $display->content['new-77a59b84-3da4-4c4d-a311-adada0a3956d'] = $pane;
    $display->panels['right'][0] = 'new-77a59b84-3da4-4c4d-a311-adada0a3956d';
    $pane = new stdClass();
    $pane->pid = 'new-65179ef5-13af-4c29-a11d-647b08c586a1';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '65179ef5-13af-4c29-a11d-647b08c586a1';
    $display->content['new-65179ef5-13af-4c29-a11d-647b08c586a1'] = $pane;
    $display->panels['right'][1] = 'new-65179ef5-13af-4c29-a11d-647b08c586a1';
    $pane = new stdClass();
    $pane->pid = 'new-886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $pane->panel = 'top';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $display->content['new-886f81fe-65f9-46f4-a47f-ed50be2079a6'] = $pane;
    $display->panels['top'][0] = 'new-886f81fe-65f9-46f4-a47f-ed50be2079a6';
    $pane = new stdClass();
    $pane->pid = 'new-0ee6d03f-e9df-4d5e-961f-12aa108144ea';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'access user profiles',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a href="/portal/view-members/%term:tid">View members</a></p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-no-margin add-button',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0ee6d03f-e9df-4d5e-961f-12aa108144ea';
    $display->content['new-0ee6d03f-e9df-4d5e-961f-12aa108144ea'] = $pane;
    $display->panels['top'][1] = 'new-0ee6d03f-e9df-4d5e-961f-12aa108144ea';
    $pane = new stdClass();
    $pane->pid = 'new-1e02e891-ea43-402a-8915-37d274051f3d';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer taxonomy',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add user',
      'title' => '',
      'body' => '<p><a href="/portal/add-private-taxonomy/%term:tid">Add users to %term:name</a></p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-no-margin add-button',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1e02e891-ea43-402a-8915-37d274051f3d';
    $display->content['new-1e02e891-ea43-402a-8915-37d274051f3d'] = $pane;
    $display->panels['top'][2] = 'new-1e02e891-ea43-402a-8915-37d274051f3d';
    $pane = new stdClass();
    $pane->pid = 'new-8350b2be-c5cf-4e21-a18b-2238446db37e';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer taxonomy',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Delete user',
      'title' => '',
      'body' => '<p><a href="/portal/delete-members/%term:tid">Delete Users from Community</a></p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-no-margin add-button',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8350b2be-c5cf-4e21-a18b-2238446db37e';
    $display->content['new-8350b2be-c5cf-4e21-a18b-2238446db37e'] = $pane;
    $display->panels['top'][3] = 'new-8350b2be-c5cf-4e21-a18b-2238446db37e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8e001eef-3a6e-4e65-91e3-2d818cc6e66e';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function pum_portal_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'communities_overview_page';
  $page->task = 'page';
  $page->admin_title = 'Communities overview page';
  $page->admin_description = '';
  $page->path = 'portal/communities-overview';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_communities_overview_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'communities_overview_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'communities-overview',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Communities';
  $display->uuid = '0a9567fc-4295-48b2-ad7f-acb2784e0a19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d3d6ed8-ddfe-4fbd-b640-526b5b851ee5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ul>
	<li><a class="country-community community-link" href="/portal/countries">Country community</a></li>
	<li><a class="general-community community-link" href="/portal/general-communities">General community</a></li>
	<li><a class="sector-community community-link" href="/portal/sectors">Sector community</a></li>
</ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d3d6ed8-ddfe-4fbd-b640-526b5b851ee5';
    $display->content['new-1d3d6ed8-ddfe-4fbd-b640-526b5b851ee5'] = $pane;
    $display->panels['middle'][0] = 'new-1d3d6ed8-ddfe-4fbd-b640-526b5b851ee5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['communities_overview_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'general_communities_page';
  $page->task = 'page';
  $page->admin_title = 'General Communities Page';
  $page->admin_description = '';
  $page->path = 'portal/general-communities';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 5,
            2 => 6,
            3 => 7,
            4 => 8,
            5 => 9,
            6 => 10,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_general_communities_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'general_communities_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'General communities';
  $display->uuid = '95086d0c-4367-4cc5-813c-801db7d9ad2d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5b95ec5c-8e73-487a-8aff-8ae210e21405';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'portal_communities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1000',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5b95ec5c-8e73-487a-8aff-8ae210e21405';
    $display->content['new-5b95ec5c-8e73-487a-8aff-8ae210e21405'] = $pane;
    $display->panels['middle'][0] = 'new-5b95ec5c-8e73-487a-8aff-8ae210e21405';
    $pane = new stdClass();
    $pane->pid = 'new-27b83e87-892f-4b9c-9086-27e3da96c6fe';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'private_communities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '100',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '27b83e87-892f-4b9c-9086-27e3da96c6fe';
    $display->content['new-27b83e87-892f-4b9c-9086-27e3da96c6fe'] = $pane;
    $display->panels['middle'][1] = 'new-27b83e87-892f-4b9c-9086-27e3da96c6fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5b95ec5c-8e73-487a-8aff-8ae210e21405';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['general_communities_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'portal';
  $page->task = 'page';
  $page->admin_title = 'Portal';
  $page->admin_description = '';
  $page->path = 'portal';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Portal',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_portal_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'portal';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'two-col-panel home-portal',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '49.92608354190305',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '50.07391645809725',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2b378fb3-2a3c-44da-93a6-ed0f9ed3a1a6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c10982b7-8373-4e59-96c1-134be7a20cc7';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_documents';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c10982b7-8373-4e59-96c1-134be7a20cc7';
    $display->content['new-c10982b7-8373-4e59-96c1-134be7a20cc7'] = $pane;
    $display->panels['center'][0] = 'new-c10982b7-8373-4e59-96c1-134be7a20cc7';
    $pane = new stdClass();
    $pane->pid = 'new-09bcd219-e5f2-41da-ad13-7f8786e5dbe4';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_blogs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '09bcd219-e5f2-41da-ad13-7f8786e5dbe4';
    $display->content['new-09bcd219-e5f2-41da-ad13-7f8786e5dbe4'] = $pane;
    $display->panels['center'][1] = 'new-09bcd219-e5f2-41da-ad13-7f8786e5dbe4';
    $pane = new stdClass();
    $pane->pid = 'new-a8e0cce8-d449-4197-8974-6f72cb4ea89f';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'my_latest_forum_topics_test';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a8e0cce8-d449-4197-8974-6f72cb4ea89f';
    $display->content['new-a8e0cce8-d449-4197-8974-6f72cb4ea89f'] = $pane;
    $display->panels['center'][2] = 'new-a8e0cce8-d449-4197-8974-6f72cb4ea89f';
    $pane = new stdClass();
    $pane->pid = 'new-edf24778-d09f-42ae-a7c7-00fee17955c8';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'portal_my_latest_news';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'edf24778-d09f-42ae-a7c7-00fee17955c8';
    $display->content['new-edf24778-d09f-42ae-a7c7-00fee17955c8'] = $pane;
    $display->panels['center'][3] = 'new-edf24778-d09f-42ae-a7c7-00fee17955c8';
    $pane = new stdClass();
    $pane->pid = 'new-40b77585-434f-4033-a0bb-853fb0c1719b';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'my_blog';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '40b77585-434f-4033-a0bb-853fb0c1719b';
    $display->content['new-40b77585-434f-4033-a0bb-853fb0c1719b'] = $pane;
    $display->panels['center'][4] = 'new-40b77585-434f-4033-a0bb-853fb0c1719b';
    $pane = new stdClass();
    $pane->pid = 'new-5a53d3b2-8f58-4d9d-9e9e-b0c09b147d4a';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'my_documents';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5a53d3b2-8f58-4d9d-9e9e-b0c09b147d4a';
    $display->content['new-5a53d3b2-8f58-4d9d-9e9e-b0c09b147d4a'] = $pane;
    $display->panels['center'][5] = 'new-5a53d3b2-8f58-4d9d-9e9e-b0c09b147d4a';
    $pane = new stdClass();
    $pane->pid = 'new-57c5c8e4-fbd0-4149-beb5-29f42ee6a16a';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'latest_portal_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '57c5c8e4-fbd0-4149-beb5-29f42ee6a16a';
    $display->content['new-57c5c8e4-fbd0-4149-beb5-29f42ee6a16a'] = $pane;
    $display->panels['left'][0] = 'new-57c5c8e4-fbd0-4149-beb5-29f42ee6a16a';
    $pane = new stdClass();
    $pane->pid = 'new-d32d9a88-069e-4167-bc8e-e8050b5c1018';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'pum_portal_latest_forum_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd32d9a88-069e-4167-bc8e-e8050b5c1018';
    $display->content['new-d32d9a88-069e-4167-bc8e-e8050b5c1018'] = $pane;
    $display->panels['left'][1] = 'new-d32d9a88-069e-4167-bc8e-e8050b5c1018';
    $pane = new stdClass();
    $pane->pid = 'new-25fd97b4-ff94-4e21-9b08-0798be9f52b9';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'subscriptions_ui-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '25fd97b4-ff94-4e21-9b08-0798be9f52b9';
    $display->content['new-25fd97b4-ff94-4e21-9b08-0798be9f52b9'] = $pane;
    $display->panels['left'][2] = 'new-25fd97b4-ff94-4e21-9b08-0798be9f52b9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a8e0cce8-d449-4197-8974-6f72cb4ea89f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['portal'] = $page;

  return $pages;

}
