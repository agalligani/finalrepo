<?php

/**
 * Implementation of hook_strongarm().
 */
function reformsupportnetwork_admin_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '5';

  $export['user_admin_role'] = $strongarm;
  return $export;
}
