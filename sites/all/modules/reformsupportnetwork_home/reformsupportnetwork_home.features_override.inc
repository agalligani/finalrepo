<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function reformsupportnetwork_home_default_features_overrides() {
  $export = array();
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_home_commons_homepage';
  $features_override->description = '';
  $features_override->component_type = 'page_manager_pages';
  $features_override->component_id = 'commons_homepage';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'admin_description',
          ),
        ),
        'value' => 'Site homepage',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'type',
          ),
        ),
        'value' => 'node',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'subtype',
          ),
        ),
        'value' => 'node',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'nid',
          ),
        ),
        'value' => '660',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'links',
          ),
        ),
        'value' => 0,
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'leave_node_title',
          ),
        ),
        'value' => 0,
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'identifier',
          ),
        ),
        'value' => '',
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'build_mode',
          ),
        ),
        'value' => 'full',
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'link_node_title',
          ),
        ),
        'value' => 0,
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'override_title',
          ),
        ),
        'value' => 1,
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'override_title_text',
          ),
        ),
        'value' => 'Welcome to the RTT Grantee Portal',
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'shown',
          ),
        ),
        'value' => FALSE,
      ),
      12 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-6',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'shown',
          ),
        ),
        'value' => FALSE,
      ),
      13 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'incoming_content',
          ),
        ),
        'value' => NULL,
      ),
      14 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'css_id',
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
            'key' => 'access',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'admin_title',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'title',
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'body',
          ),
        ),
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'format',
          ),
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'configuration',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'substitute',
          ),
        ),
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-1',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-2',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-3',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-4',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-5',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'content',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'new-6',
          ),
          6 => array(
            'type' => 'object',
            'key' => 'style',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
        ),
      ),
      12 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'incoming_content',
          ),
        ),
      ),
      13 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'css_id',
          ),
        ),
      ),
      14 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'layout_settings',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'items',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'canvas',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'parent',
          ),
        ),
      ),
      15 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'panel_settings',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'style_settings',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'default',
          ),
        ),
      ),
      16 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'panel_settings',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'style_settings',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'left',
          ),
        ),
      ),
      17 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'default_handlers',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_commons_home_panel_context',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'conf',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'display',
          ),
          4 => array(
            'type' => 'object',
            'key' => 'panel_settings',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'style_settings',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'right',
          ),
        ),
      ),
    ),
  );

  $export['commons_home_commons_homepage'] = $features_override;
  return $export;
}
