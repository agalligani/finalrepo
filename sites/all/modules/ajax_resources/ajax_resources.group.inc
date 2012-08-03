<?php
function group_tree() {

//todo - filter out private groups which user is not member of...

	  
  $viewname = 'groups_by_nid';
  $view = views_get_view($viewname);
/* $args = array($tid,$tid2,$og_id) */ 
 /* $args = array('359');  */
 
/*	$output = $view->preview('default', $args); */
	$output = $view->preview('default');
	if (empty($view->result)) {
		print "no result";
	}
  $view->render();
  return drupal_json($view->result);
}
