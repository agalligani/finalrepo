<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function reformsupportnetwork_document_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "features_override" && $api == "features_override") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function reformsupportnetwork_document_views_api() {
  return array(
    'api' => '2',
  );
}
