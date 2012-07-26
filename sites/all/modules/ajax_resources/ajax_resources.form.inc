<?php
function resources_form() {

		
		$topicList	= "<ul id='topic-list'></ul>";
		$typeList	= "<ul id='type-list'></ul>";
		$targetDiv 	= "<div id='divResources'></div>";

  	return 		"<div id='resources-wrapper'>".$topicList.$typeList.$targetDiv."</div>";
}
