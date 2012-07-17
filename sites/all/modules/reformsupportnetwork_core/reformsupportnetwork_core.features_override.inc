<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function reformsupportnetwork_core_default_features_overrides() {
  $export = array();
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_content_extra_weights_group';
  $features_override->description = '';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'content_extra_weights_group';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'simple_access',
          ),
        ),
        'value' => '20',
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_core_content_extra_weights_group'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_context_ui_global_global';
  $features_override->description = '';
  $features_override->component_type = 'context';
  $features_override->component_id = 'context_ui-global-global';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'block-1',
          ),
        ),
        'value' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'footer',
          'weight' => 0,
        ),
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'commons_core-2',
          ),
        ),
      ),
    ),
  );

  $export['commons_core_context_ui_global_global'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_context_ui_group_group';
  $features_override->description = '';
  $features_override->component_type = 'context';
  $features_override->component_id = 'context_ui-group-group';
  $features_override->value = array(
    'additions' => array(),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'views-og_tag_cloud-block_1',
          ),
        ),
      ),
    ),
  );

  $export['commons_core_context_ui_group_group'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_newest_users';
  $features_override->description = '';
  $features_override->component_type = 'views';
  $features_override->component_id = 'newest_users';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
        'value' => array(
          'operator' => '=',
          'value' => '1',
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
            'operator' => FALSE,
            'label' => '',
          ),
          'id' => 'value',
          'table' => 'profile_values_profile_public_listing',
          'field' => 'value',
          'relationship' => 'none',
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
        'value' => array(
          'operator' => '=',
          'value' => '1',
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
            'operator' => FALSE,
            'label' => '',
          ),
          'id' => 'value',
          'table' => 'profile_values_profile_public_listing',
          'field' => 'value',
          'relationship' => 'none',
        ),
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_core_newest_users'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_node_view_panel_context';
  $features_override->description = '';
  $features_override->component_type = 'page_manager_handlers';
  $features_override->component_id = 'node_view_panel_context';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
        'value' => NULL,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'type',
          ),
        ),
        'value' => 'views',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'subtype',
          ),
        ),
        'value' => 'og_calendar',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'override_pager_settings',
          ),
        ),
        'value' => 0,
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'use_pager',
          ),
        ),
        'value' => 0,
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'nodes_per_page',
          ),
        ),
        'value' => '0',
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'pager_id',
          ),
        ),
        'value' => '',
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'offset',
          ),
        ),
        'value' => '0',
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'more_link',
          ),
        ),
        'value' => 0,
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'feed_icons',
          ),
        ),
        'value' => 0,
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'panel_args',
          ),
        ),
        'value' => 0,
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'link_to_view',
          ),
        ),
        'value' => 0,
      ),
      12 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'args',
          ),
        ),
        'value' => '%1',
      ),
      13 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'url',
          ),
        ),
        'value' => '',
      ),
      14 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'display',
          ),
        ),
        'value' => 'calendar_block_1',
      ),
      15 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'context',
          ),
        ),
        'value' => array(
          0 => '',
          1 => '',
        ),
      ),
      16 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'override_title_text',
          ),
        ),
        'value' => 'Group Calendar',
      ),
      17 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
        'value' => NULL,
      ),
      18 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'type',
          ),
        ),
        'value' => 'block',
      ),
      19 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'subtype',
          ),
        ),
        'value' => 'heartbeat-ogheartbeat',
      ),
      20 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'override_title_text',
          ),
        ),
        'value' => 'Recent group activity',
      ),
      21 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
        'value' => NULL,
      ),
      22 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-4',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'shown',
          ),
        ),
        'value' => FALSE,
      ),
      23 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-4',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
        'value' => NULL,
      ),
      24 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-5',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'type',
          ),
        ),
        'value' => 'block',
      ),
      25 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-5',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'subtype',
          ),
        ),
        'value' => 'menu_block-9',
      ),
      26 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-5',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'access',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'plugins',
          ),
        ),
        'value' => array(
          0 => array(
            'name' => 'path_visibility',
            'settings' => array(
              'visibility_setting' => '1',
              'paths' => 'group/standards-and-assessments',
            ),
            'context' => 'empty',
            'not' => FALSE,
          ),
        ),
      ),
      27 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-5',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'override_title',
          ),
        ),
        'value' => 1,
      ),
      28 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-5',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'override_title_text',
          ),
        ),
        'value' => 'Browse by topic',
      ),
      29 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-5',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
        'value' => NULL,
      ),
      30 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-6',
          ),
        ),
        'value' => (object) array(
  'pid' => 'new-6',
  'panel' => 'right',
  'type' => 'block',
  'subtype' => 'menu_block-8',
  'shown' => TRUE,
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'group/data-systems-improvement',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  ),
  'configuration' => array(
    'override_title' => 1,
    'override_title_text' => 'Browse by topic',
  ),
  'cache' => array(),
  'style' => array(
    'settings' => NULL,
  ),
  'css' => array(),
  'extras' => array(),
  'position' => 2,
),
      ),
      31 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-7',
          ),
        ),
        'value' => (object) array(
  'pid' => 'new-7',
  'panel' => 'right',
  'type' => 'block',
  'subtype' => 'menu_block-7',
  'shown' => TRUE,
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'group/great-teachers-and-leaders',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  ),
  'configuration' => array(
    'override_title' => 1,
    'override_title_text' => 'Browse by topic',
  ),
  'cache' => array(),
  'style' => array(
    'settings' => NULL,
  ),
  'css' => array(),
  'extras' => array(),
  'position' => 3,
),
      ),
      32 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-8',
          ),
        ),
        'value' => (object) array(
  'pid' => 'new-8',
  'panel' => 'right',
  'type' => 'block',
  'subtype' => 'menu_block-5',
  'shown' => TRUE,
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'group/turning-around-lowest-achieving-schools',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  ),
  'configuration' => array(
    'override_title' => 1,
    'override_title_text' => 'Browse by topic',
  ),
  'cache' => array(),
  'style' => array(
    'settings' => NULL,
  ),
  'css' => array(),
  'extras' => array(),
  'position' => 4,
),
      ),
      33 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-9',
          ),
        ),
        'value' => (object) array(
  'pid' => 'new-9',
  'panel' => 'right',
  'type' => 'block',
  'subtype' => 'menu_block-4',
  'shown' => TRUE,
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'group/scopes-work',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  ),
  'configuration' => array(
    'override_title' => 1,
    'override_title_text' => 'Browse by topic',
  ),
  'cache' => array(),
  'style' => array(
    'settings' => NULL,
  ),
  'css' => array(),
  'extras' => array(),
  'position' => 5,
),
      ),
      34 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-10',
          ),
        ),
        'value' => (object) array(
  'pid' => 'new-10',
  'panel' => 'right',
  'type' => 'block',
  'subtype' => 'menu_block-3',
  'shown' => TRUE,
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'group/stakeholder-engagement',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  ),
  'configuration' => array(
    'override_title' => 1,
    'override_title_text' => 'Browse by topic',
  ),
  'cache' => array(),
  'style' => array(
    'settings' => NULL,
  ),
  'css' => array(),
  'extras' => array(),
  'position' => 6,
),
      ),
      35 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-11',
          ),
        ),
        'value' => (object) array(
  'pid' => 'new-11',
  'panel' => 'right',
  'type' => 'views_panes',
  'subtype' => 'og_content_tracker-panel_pane_1',
  'shown' => TRUE,
  'access' => array(),
  'configuration' => array(),
  'cache' => array(),
  'style' => array(
    'settings' => NULL,
  ),
  'css' => array(),
  'extras' => array(),
  'position' => 7,
),
      ),
      36 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'incoming_content',
          ),
        ),
        'value' => NULL,
      ),
      37 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'css_id',
          ),
        ),
        'value' => NULL,
      ),
      38 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'panel_settings',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_settings',
          ),
        ),
        'value' => array(
          'default' => NULL,
          'left' => NULL,
          'right' => NULL,
        ),
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'override_pager_settings',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'use_pager',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'nodes_per_page',
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'pager_id',
          ),
        ),
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'offset',
          ),
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'more_link',
          ),
        ),
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'feed_icons',
          ),
        ),
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'panel_args',
          ),
        ),
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'link_to_view',
          ),
        ),
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'args',
          ),
        ),
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'url',
          ),
        ),
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'display',
          ),
        ),
      ),
      12 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'context',
          ),
        ),
      ),
      13 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'incoming_content',
          ),
        ),
      ),
      14 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'css_id',
          ),
        ),
      ),
    ),
  );

  $export['commons_core_node_view_panel_context'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_og_all';
  $features_override->description = '';
  $features_override->component_type = 'views';
  $features_override->component_id = 'og_all';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_weight_value',
          ),
        ),
        'value' => array(
          'label' => 'Weight',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'link_class' => '',
            'alt' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 0,
          'label_type' => 'widget',
          'format' => 'default',
          'multiple' => array(
            'group' => TRUE,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => FALSE,
          ),
          'exclude' => 1,
          'id' => 'field_weight_value',
          'table' => 'node_data_field_weight',
          'field' => 'field_weight_value',
          'relationship' => 'none',
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'sorts',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_weight_value',
          ),
        ),
        'value' => array(
          'order' => 'ASC',
          'delta' => -1,
          'id' => 'field_weight_value',
          'table' => 'node_data_field_weight',
          'field' => 'field_weight_value',
          'relationship' => 'none',
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'order',
          ),
        ),
        'value' => 'asc',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'columns',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_weight_value',
          ),
        ),
        'value' => 'field_weight_value',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'info',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_weight_value',
          ),
        ),
        'value' => array(
          'sortable' => 1,
          'separator' => '',
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'default',
          ),
        ),
        'value' => 'field_weight_value',
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_weight_value',
          ),
        ),
        'value' => array(
          'label' => 'Weight',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'link_class' => '',
            'alt' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 0,
          'label_type' => 'widget',
          'format' => 'default',
          'multiple' => array(
            'group' => TRUE,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => FALSE,
          ),
          'exclude' => 1,
          'id' => 'field_weight_value',
          'table' => 'node_data_field_weight',
          'field' => 'field_weight_value',
          'relationship' => 'none',
        ),
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'sorts',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_weight_value',
          ),
        ),
        'value' => array(
          'order' => 'ASC',
          'delta' => -1,
          'id' => 'field_weight_value',
          'table' => 'node_data_field_weight',
          'field' => 'field_weight_value',
          'relationship' => 'none',
        ),
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'order',
          ),
        ),
        'value' => 'asc',
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'columns',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'field_weight_value',
          ),
        ),
        'value' => 'field_weight_value',
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'info',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'field_weight_value',
          ),
        ),
        'value' => array(
          'sortable' => 1,
          'separator' => '',
        ),
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'default',
          ),
        ),
        'value' => 'field_weight_value',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'columns',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'created_1',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'info',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'created_1',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'columns',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'created_1',
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'info',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'created_1',
          ),
        ),
      ),
    ),
  );

  $export['commons_core_og_all'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_og_content_tracker';
  $features_override->description = '';
  $features_override->component_type = 'views';
  $features_override->component_id = 'og_content_tracker';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'panel_pane_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'has_pane_conf',
          ),
        ),
        'value' => NULL,
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'panel_pane_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'has_pane_conf',
          ),
        ),
      ),
    ),
  );

  $export['commons_core_og_content_tracker'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_og_members_custom_block';
  $features_override->description = '';
  $features_override->component_type = 'views';
  $features_override->component_id = 'og_members_custom_block';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
        'value' => array(
          'operator' => '=',
          'value' => '1',
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
            'operator' => FALSE,
            'label' => '',
          ),
          'id' => 'value',
          'table' => 'profile_values_profile_public_listing',
          'field' => 'value',
          'relationship' => 'none',
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
        'value' => array(
          'operator' => '=',
          'value' => '1',
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
            'operator' => FALSE,
            'label' => '',
          ),
          'id' => 'value',
          'table' => 'profile_values_profile_public_listing',
          'field' => 'value',
          'relationship' => 'none',
        ),
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_core_og_members_custom_block'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_primary_links_community';
  $features_override->description = '';
  $features_override->component_type = 'menu_links';
  $features_override->component_id = 'primary-links:community';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'hidden',
          ),
        ),
        'value' => '1',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => '-48',
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_core_primary_links_community'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_primary_links_groups';
  $features_override->description = '';
  $features_override->component_type = 'menu_links';
  $features_override->component_id = 'primary-links:groups';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'expanded',
          ),
        ),
        'value' => '1',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'has_children',
          ),
        ),
        'value' => '1',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => '-47',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'parent_path',
          ),
        ),
      ),
    ),
  );

  $export['commons_core_primary_links_groups'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_primary_links_groups_my';
  $features_override->description = '';
  $features_override->component_type = 'menu_links';
  $features_override->component_id = 'primary-links:groups/my';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'parent_path',
          ),
        ),
        'value' => 'groups',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => '-50',
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_core_primary_links_groups_my'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_primary_links_user';
  $features_override->description = '';
  $features_override->component_type = 'menu_links';
  $features_override->component_id = 'primary-links:user';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'hidden',
          ),
        ),
        'value' => '1',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => '-42',
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_core_primary_links_user'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_primary_links_users';
  $features_override->description = '';
  $features_override->component_type = 'menu_links';
  $features_override->component_id = 'primary-links:users';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => '-43',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'parent_path',
          ),
        ),
      ),
    ),
  );

  $export['commons_core_primary_links_users'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_theme_settings';
  $features_override->description = '';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'theme_settings';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'toggle_node_info_deliverable_subtasks',
          ),
        ),
        'value' => 1,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'toggle_node_info_deliverable_tasks',
          ),
        ),
        'value' => 1,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'toggle_node_info_document_category',
          ),
        ),
        'value' => 1,
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'toggle_node_info_document_repository',
          ),
        ),
        'value' => 1,
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'toggle_node_info_rttcalendar',
          ),
        ),
        'value' => 1,
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_core_theme_settings'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_user_terms_vocabs';
  $features_override->description = '';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'user_terms_vocabs';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 8,
          ),
        ),
        'value' => 8,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 5,
          ),
        ),
        'value' => 5,
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 2,
          ),
        ),
      ),
    ),
  );

  $export['commons_core_user_terms_vocabs'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_user_view_panel_context';
  $features_override->description = '';
  $features_override->component_type = 'page_manager_handlers';
  $features_override->component_id = 'user_view_panel_context';
  $features_override->value = array(
    'additions' => array(),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'incoming_content',
          ),
        ),
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'css_id',
          ),
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'panel_settings',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_settings',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'default',
          ),
        ),
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'panel_settings',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_settings',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'left',
          ),
        ),
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'panel_settings',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_settings',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'right',
          ),
        ),
      ),
    ),
  );

  $export['commons_core_user_view_panel_context'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_users_online';
  $features_override->description = '';
  $features_override->component_type = 'views';
  $features_override->component_id = 'users_online';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
        'value' => array(
          'operator' => '=',
          'value' => '1',
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
            'operator' => FALSE,
            'label' => '',
          ),
          'id' => 'value',
          'table' => 'profile_values_profile_public_listing',
          'field' => 'value',
          'relationship' => 'none',
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
        'value' => array(
          'operator' => '=',
          'value' => '1',
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
            'operator' => FALSE,
            'label' => '',
          ),
          'id' => 'value',
          'table' => 'profile_values_profile_public_listing',
          'field' => 'value',
          'relationship' => 'none',
        ),
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_core_users_online'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_core_view_shouts';
  $features_override->description = '';
  $features_override->component_type = 'user_permission';
  $features_override->component_id = 'view shouts';
  $features_override->value = array(
    'additions' => array(),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'roles',
          ),
          1 => array(
            'type' => 'array',
            'key' => 1,
          ),
        ),
      ),
    ),
  );

  $export['commons_core_view_shouts'] = $features_override;
  return $export;
}
