<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function reformsupportnetwork_core_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'login_destination';
  $context->description = 'Redirection for login page';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~user' => '~user',
        '~login' => '~login',
        '~user/password' => '~user/password',
        '~login/password' => '~login/password',
        '~user/reset/*' => '~user/reset/*',
        '~login/reset/*' => '~login/reset/*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Redirection for login page');
  t('Sitewide');

  $export['login_destination'] = $context;
  return $export;
}
