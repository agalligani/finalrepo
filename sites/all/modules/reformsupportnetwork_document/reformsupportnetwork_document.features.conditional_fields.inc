<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function reformsupportnetwork_document_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_storage_method',
  'field_name' => 'field_file',
  'type' => 'document',
  'trigger_values' => 
  array (
    0 => '0',
  ),
);
$items[] = array (
  'control_field_name' => 'field_storage_method',
  'field_name' => 'field_link',
  'type' => 'document',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
return $items;
}
