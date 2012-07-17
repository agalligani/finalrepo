<?php // $Id $

/**
 * @file front_panel.inc
 * Implementation of hook_panels_layouts()
 */
function rtt3_front_panel_layouts() {
  $items['front_panel'] = array(
    'title' => t('RTT3 Front Page Panel'),
    'icon' => 'xxx.png',
    'theme' => 'front_panel',
    'theme arguments' => array('id', 'content'),
    'css' => 'front_panel.css',
    'panels' => array(
      'left' => t('Left side'),
      'right' => t('Right side'),
    ),
  );

  return $items;
}
