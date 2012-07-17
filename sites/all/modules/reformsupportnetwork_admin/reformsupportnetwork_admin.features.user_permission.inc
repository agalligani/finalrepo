<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function reformsupportnetwork_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: access backup and migrate
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: access backup files
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: administer backup and migrate
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: create users
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete backup files
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete users with role community manager
  $permissions['delete users with role community manager'] = array(
    'name' => 'delete users with role community manager',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete users with role content manager
  $permissions['delete users with role content manager'] = array(
    'name' => 'delete users with role content manager',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete users with role contributor
  $permissions['delete users with role contributor'] = array(
    'name' => 'delete users with role contributor',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete users with role limited admin
  $permissions['delete users with role limited admin'] = array(
    'name' => 'delete users with role limited admin',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: delete users with role site admin
  $permissions['delete users with role site admin'] = array(
    'name' => 'delete users with role site admin',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit users with role community manager
  $permissions['edit users with role community manager'] = array(
    'name' => 'edit users with role community manager',
    'roles' => array(
      '0' => 'limited admin',
      '1' => 'site admin',
    ),
  );

  // Exported permission: edit users with role content manager
  $permissions['edit users with role content manager'] = array(
    'name' => 'edit users with role content manager',
    'roles' => array(
      '0' => 'limited admin',
      '1' => 'site admin',
    ),
  );

  // Exported permission: edit users with role contributor
  $permissions['edit users with role contributor'] = array(
    'name' => 'edit users with role contributor',
    'roles' => array(
      '0' => 'limited admin',
      '1' => 'site admin',
    ),
  );

  // Exported permission: edit users with role limited admin
  $permissions['edit users with role limited admin'] = array(
    'name' => 'edit users with role limited admin',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: edit users with role site admin
  $permissions['edit users with role site admin'] = array(
    'name' => 'edit users with role site admin',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: perform backup
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: restore from backup
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      '0' => 'site admin',
    ),
  );

  return $permissions;
}
