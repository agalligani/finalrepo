<?php
function type_tree() {
		$vocab = ajax_resources_get_vocabulary_by_name("Event Type");
      $items = array();
	  
      $tree = taxonomy_get_tree($vocab->vid);
      if ($tree && (count($tree) > 0)) {
        $options = array();
        foreach ($tree as $term) {
          $items[$term->tid] = str_repeat('-', $term->depth) . $term->name;
        }
      }
		print_r($items);
      print theme('item_list', $items);
	  print drupal_json($items);
}
