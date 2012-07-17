<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function reformsupportnetwork_document_default_features_overrides() {
  $export = array();
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_document_content_extra_weights_document';
  $features_override->description = '';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'content_extra_weights_document';
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
            'key' => 'revision_information',
          ),
        ),
        'value' => '2',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'author',
          ),
        ),
        'value' => '5',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'options',
          ),
        ),
        'value' => '6',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'comment_settings',
          ),
        ),
        'value' => '4',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'menu',
          ),
        ),
        'value' => '3',
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'path',
          ),
        ),
        'value' => '7',
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'flag',
          ),
        ),
        'value' => '0',
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'og_nodeapi',
          ),
        ),
        'value' => '1',
      ),
      8 => array(
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
        'value' => '8',
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_document_content_extra_weights_document'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_document_document_field_featured_content';
  $features_override->description = '';
  $features_override->component_type = 'content';
  $features_override->component_id = 'document-field_featured_content';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'display_settings',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'token',
          ),
        ),
        'value' => array(
          'exclude' => 0,
          'format' => 'default',
        ),
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default_value_php',
          ),
        ),
      ),
    ),
  );

  $export['commons_document_document_field_featured_content'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_document_document_field_file';
  $features_override->description = '';
  $features_override->component_type = 'content';
  $features_override->component_id = 'document-field_file';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'description_field',
          ),
        ),
        'value' => '0',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'display_settings',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'token',
          ),
        ),
        'value' => array(
          'exclude' => 0,
          'format' => 'default',
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'display_settings',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => '22',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'display_settings',
          ),
          1 => array(
            'type' => 'array',
            'key' => 2,
          ),
        ),
        'value' => array(
          'exclude' => 0,
          'format' => 'default',
        ),
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'display_settings',
          ),
          1 => array(
            'type' => 'array',
            'key' => 3,
          ),
        ),
        'value' => array(
          'exclude' => 0,
          'format' => 'default',
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'list_default',
          ),
        ),
        'value' => 0,
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'list_field',
          ),
        ),
        'value' => '0',
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'file_extensions',
          ),
        ),
        'value' => 'jpg jpeg gif png doc docx txt xls xlsx pdf ppt pptx pps odt ods odp tar gz tgz zip',
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_Featured',
          ),
        ),
        'value' => 0,
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_Small',
          ),
        ),
        'value' => 0,
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_group_images_showcase',
          ),
        ),
        'value' => 0,
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => '22',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_content_image_primary',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'insert_styles',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'imagecache_content_image_secondary',
          ),
        ),
      ),
    ),
  );

  $export['commons_document_document_field_file'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_document_document_field_group_sticky';
  $features_override->description = '';
  $features_override->component_type = 'content';
  $features_override->component_id = 'document-field_group_sticky';
  $features_override->value = array(
    'additions' => array(),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default_value_php',
          ),
        ),
      ),
    ),
  );

  $export['commons_document_document_field_group_sticky'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_document_document_group_upload';
  $features_override->description = '';
  $features_override->component_type = 'fieldgroup';
  $features_override->component_id = 'document-group_upload';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'label',
          ),
        ),
        'value' => 'Upload/Link',
      ),
    ),
    'deletions' => array(),
  );

  $export['commons_document_document_group_upload'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_document_og_tab_documents';
  $features_override->description = '';
  $features_override->component_type = 'views';
  $features_override->component_id = 'og_tab_documents';
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
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'limit',
          ),
        ),
        'value' => 1,
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
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          6 => array(
            'type' => 'array',
            'key' => 2,
          ),
        ),
        'value' => 2,
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
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          6 => array(
            'type' => 'array',
            'key' => 4,
          ),
        ),
        'value' => 0,
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
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          6 => array(
            'type' => 'array',
            'key' => 6,
          ),
        ),
        'value' => 0,
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
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          6 => array(
            'type' => 'array',
            'key' => 7,
          ),
        ),
        'value' => 0,
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
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          6 => array(
            'type' => 'array',
            'key' => 8,
          ),
        ),
        'value' => 0,
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
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          6 => array(
            'type' => 'array',
            'key' => 5,
          ),
        ),
        'value' => 0,
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
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          6 => array(
            'type' => 'array',
            'key' => 3,
          ),
        ),
        'value' => 0,
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
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'exclude',
          ),
        ),
        'value' => 1,
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
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid_2',
          ),
        ),
        'value' => array(
          'label' => 'State',
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
          'type' => 'separator',
          'separator' => ', ',
          'link_to_taxonomy' => 1,
          'limit' => 1,
          'vids' => array(
            6 => 6,
            4 => 0,
            7 => 0,
            2 => 0,
            5 => 0,
            3 => 0,
          ),
          'exclude' => 0,
          'id' => 'tid_2',
          'table' => 'term_node',
          'field' => 'tid',
          'relationship' => 'none',
        ),
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
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_file_fid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'hide_empty',
          ),
        ),
        'value' => 1,
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
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_file_fid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'exclude',
          ),
        ),
        'value' => 1,
      ),
      12 => array(
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
            'key' => 'field_link_url',
          ),
        ),
        'value' => array(
          'label' => 'Link',
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
          'hide_empty' => 1,
          'empty_zero' => 0,
          'link_to_node' => 0,
          'label_type' => 'widget',
          'format' => 'default',
          'multiple' => array(
            'group' => 1,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => 0,
          ),
          'exclude' => 1,
          'id' => 'field_link_url',
          'table' => 'node_data_field_link',
          'field' => 'field_link_url',
          'relationship' => 'none',
        ),
      ),
      13 => array(
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
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'exposed',
          ),
        ),
        'value' => FALSE,
      ),
      14 => array(
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
            'key' => 'tid_2',
          ),
        ),
        'value' => array(
          'operator' => 'or',
          'value' => '',
          'group' => '0',
          'exposed' => TRUE,
          'expose' => array(
            'use_operator' => 0,
            'operator' => 'tid_2_op',
            'identifier' => 'state_id',
            'label' => 'State',
            'optional' => 1,
            'single' => 1,
            'remember' => 0,
          ),
          'type' => 'textfield',
          'limit' => TRUE,
          'vid' => '6',
          'id' => 'tid_2',
          'table' => 'term_node',
          'field' => 'tid',
          'hierarchy' => 0,
          'relationship' => 'none',
          'reduce_duplicates' => 0,
        ),
      ),
      15 => array(
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
            'key' => 'picture',
          ),
        ),
        'value' => 'picture',
      ),
      16 => array(
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
            'key' => 'field_file_fid',
          ),
        ),
        'value' => 'field_file_fid',
      ),
      17 => array(
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
            'key' => 'field_link_url',
          ),
        ),
        'value' => 'field_file_fid',
      ),
      18 => array(
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
            'key' => 'picture',
          ),
        ),
        'value' => array(
          'sortable' => 0,
          'separator' => '',
        ),
      ),
      19 => array(
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
            'key' => 'field_file_fid',
          ),
        ),
        'value' => array(
          'separator' => '',
        ),
      ),
      20 => array(
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
            'key' => 'field_link_url',
          ),
        ),
        'value' => array(
          'separator' => '',
        ),
      ),
      21 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'limit',
          ),
        ),
        'value' => 1,
      ),
      22 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          7 => array(
            'type' => 'array',
            'key' => 2,
          ),
        ),
        'value' => 2,
      ),
      23 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          7 => array(
            'type' => 'array',
            'key' => 4,
          ),
        ),
        'value' => 0,
      ),
      24 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          7 => array(
            'type' => 'array',
            'key' => 6,
          ),
        ),
        'value' => 0,
      ),
      25 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          7 => array(
            'type' => 'array',
            'key' => 7,
          ),
        ),
        'value' => 0,
      ),
      26 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          7 => array(
            'type' => 'array',
            'key' => 8,
          ),
        ),
        'value' => 0,
      ),
      27 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          7 => array(
            'type' => 'array',
            'key' => 5,
          ),
        ),
        'value' => 0,
      ),
      28 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          7 => array(
            'type' => 'array',
            'key' => 3,
          ),
        ),
        'value' => 0,
      ),
      29 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'exclude',
          ),
        ),
        'value' => 1,
      ),
      30 => array(
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
            'key' => 'tid_2',
          ),
        ),
        'value' => array(
          'label' => 'State',
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
          'type' => 'separator',
          'separator' => ', ',
          'link_to_taxonomy' => 1,
          'limit' => 1,
          'vids' => array(
            6 => 6,
            4 => 0,
            7 => 0,
            2 => 0,
            5 => 0,
            3 => 0,
          ),
          'exclude' => 0,
          'id' => 'tid_2',
          'table' => 'term_node',
          'field' => 'tid',
          'relationship' => 'none',
        ),
      ),
      31 => array(
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
            'key' => 'field_file_fid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'hide_empty',
          ),
        ),
        'value' => 1,
      ),
      32 => array(
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
            'key' => 'field_file_fid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'exclude',
          ),
        ),
        'value' => 1,
      ),
      33 => array(
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
            'key' => 'field_link_url',
          ),
        ),
        'value' => array(
          'label' => 'Link',
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
          'hide_empty' => 1,
          'empty_zero' => 0,
          'link_to_node' => 0,
          'label_type' => 'widget',
          'format' => 'default',
          'multiple' => array(
            'group' => 1,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => 0,
          ),
          'exclude' => 1,
          'id' => 'field_link_url',
          'table' => 'node_data_field_link',
          'field' => 'field_link_url',
          'relationship' => 'none',
        ),
      ),
      34 => array(
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'exposed',
          ),
        ),
        'value' => FALSE,
      ),
      35 => array(
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
            'key' => 'tid_2',
          ),
        ),
        'value' => array(
          'operator' => 'or',
          'value' => '',
          'group' => '0',
          'exposed' => TRUE,
          'expose' => array(
            'use_operator' => 0,
            'operator' => 'tid_2_op',
            'identifier' => 'state_id',
            'label' => 'State',
            'optional' => 1,
            'single' => 1,
            'remember' => 0,
          ),
          'type' => 'textfield',
          'limit' => TRUE,
          'vid' => '6',
          'id' => 'tid_2',
          'table' => 'term_node',
          'field' => 'tid',
          'hierarchy' => 0,
          'relationship' => 'none',
          'reduce_duplicates' => 0,
        ),
      ),
      36 => array(
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
            'key' => 'picture',
          ),
        ),
        'value' => 'picture',
      ),
      37 => array(
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
            'key' => 'field_file_fid',
          ),
        ),
        'value' => 'field_file_fid',
      ),
      38 => array(
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
            'key' => 'field_link_url',
          ),
        ),
        'value' => 'field_file_fid',
      ),
      39 => array(
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
            'key' => 'picture',
          ),
        ),
        'value' => array(
          'sortable' => 0,
          'separator' => '',
        ),
      ),
      40 => array(
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
            'key' => 'field_file_fid',
          ),
        ),
        'value' => array(
          'separator' => '',
        ),
      ),
      41 => array(
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
            'key' => 'field_link_url',
          ),
        ),
        'value' => array(
          'separator' => '',
        ),
      ),
      42 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'menu',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'title',
          ),
        ),
        'value' => 'Group Documents',
      ),
      43 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
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
            'key' => 'menu',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'title',
          ),
        ),
        'value' => 'Group Documents',
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
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'tid',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          6 => array(
            'type' => 'array',
            'key' => 1,
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
            'key' => 'tid',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'vids',
          ),
          7 => array(
            'type' => 'array',
            'key' => 1,
          ),
        ),
      ),
    ),
  );

  $export['commons_document_og_tab_documents'] = $features_override;
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'commons_document_primary_links_content_documents';
  $features_override->description = '';
  $features_override->component_type = 'menu_links';
  $features_override->component_id = 'primary-links:content/documents';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => '-46',
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

  $export['commons_document_primary_links_content_documents'] = $features_override;
  return $export;
}
