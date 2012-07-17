<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function reformsupportnetwork_core_taxonomy_default_vocabularies() {
  return array(
    'user_type' => array(
      'name' => 'User type',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_user_type',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
  );
}
