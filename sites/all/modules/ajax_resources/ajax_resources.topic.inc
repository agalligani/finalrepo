<?php
function topic_tree() {
		$vocab = ajax_resources_get_vocabulary_by_name("Topic");
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
          $items[$i]['desc']=$term->description;
		  
          if($term->depth) {	
				$items[$i]['parent']='/'.$x;				
		  } else {
				$x = $term->name;
				$items[$i]['parent']='self';
		  }

		  
/*		  = str_repeat('-', $term->depth) . $term->name; */
        }
      }
	  print drupal_json($items);
}
