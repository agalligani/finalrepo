<?php
function type_tree() {
		$vocab = ajax_resources_get_vocabulary_by_name("Type");
      $items = array();
	  $i=0;
      $tree = taxonomy_get_tree($vocab->vid);
      if ($tree && (count($tree) > 0)) {
        $options = array();
		$x = '';
        foreach ($tree as $term) {
			$i = $i+1;
          $items[$i]['nid']=$term->tid; 
          $items[$i]['value']=$term->name;
          $items[$i]['depth']=$term->depth;
		  
          if($term->depth) {	
				$items[$i]['parent']='/'.$x;				
		  } else {
				$x = $term->name;
				$items[$i]['parent']='self';
		  }
		  
 
        }
      }
	  print drupal_json($items);
}
