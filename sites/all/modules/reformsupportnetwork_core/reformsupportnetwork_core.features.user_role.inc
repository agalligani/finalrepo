<?php

/**
 * Implementation of hook_user_default_roles().
 */
function reformsupportnetwork_core_user_default_roles() {
  $roles = array();

  // Exported role: contributor
  $roles['contributor'] = array(
    'name' => 'contributor',
  );

  // Exported role: limited admin
  $roles['limited admin'] = array(
    'name' => 'limited admin',
  );

  return $roles;
}
