<?php

/**
 * Implementation of hook_strongarm().
 */
function reformsupportnetwork_notifications_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_default_send_interval';
  $strongarm->value = '86400';

  $export['notifications_default_send_interval'] = $strongarm;
  return $export;
}
