	// $Id$
Drupal.behaviors.ajax_resources = function (context) {

	window.resourceTopic 	= 'all';
	window.resourceType 	= 'all';
	window.og 				= 'all';
	window.counter 			= 0;
	
// add a group select to the search bar

	groupSelect	=	$('<select id="group-select"></select>');
	groupSelect.appendTo('div#search-bar');

//Populate the groups select options list with the taxonomy tree	

    var updateGroups = function(data) {
// add an "all" option - view accepts 'all' as an argument for this filter
	
	var groupOption = $("<option value='all'>Any</option>");
	groupOption.appendTo(groupSelect);
		$.each(data, function() {
			
			var groupOption = $("<option value='"+this['nid']+"'>"+this["node_title"]+"</option>");
			groupOption.appendTo(groupSelect);
			
});
			
			
		$('select#group-select').change( function() {
			$('#resource-count').html("Resources Found: 0").hide();
			$('#resource-count').fadeIn(2000);

			groupNid = $('select#group-select option:selected').val();
						window.counter =0;
						window.og = groupNid;
						var theURL = 'http://'+document.domain+'/resources-view-json/'+window.resourceType+'/'+window.resourceTopic+'/'+window.og;

						$('#divResources').html('');
						$.ajax({
							type: 'POST',
							url: theURL, 			
							success: updateResourcesGroup,  
							dataType: 'json', 		
							data: 'js=1' 				
							})				
	
			});

	}
	
	
// add a topic select to the search bar

	topicSelect	=	$('<select id="topic-select"></select>');
	topicSelect.appendTo('div#search-bar');

// add initial text

	var init_text = "Select Group, Resource Topic and/or Resource Type to list resources. The listed resources can be accessed directly from the library or (for large files) accessed through a link. Select Advanced Search for more in-depth search terms.  New topics and resources will continually be added as they are identified, reviewed, and vetted."
	$('ul#topic-desc-list').append('<li id=\'title-init\' class=\'topic-title\'>'+init_text+'</li>');
	$('li#title-init').fadeIn(2000);
	
	
//Populate the topics select options list with the taxonomy tree	

    var updateTopics = function(data) {
// add an "all" option - view accepts 'all' as an argument for this filter
	
	var topicOption = $("<option value='all'>All</option>");
	topicOption.appendTo(topicSelect);
		$.each(data, function() {
			
						option_txt = this['value'];

			if (this['depth'] == '1') {  option_txt = "-- "+option_txt; 	}
			
			var topicOption = $("<option value='"+this['nid']+"'>"+option_txt+"</option>");
			topicOption.appendTo(topicSelect);
			
			$('ul#topic-desc-list').append('<li id=\'title-'+this['nid']+'\' class=\'topic-title\'>'+this['value']+'</li>');
			if(this['desc'] !='') {
			$('ul#topic-desc-list').append('<li id=\'desc-'+this['nid']+'\' class=\'topic-desc\'>'+this['desc']+'</li>');
}
			
			});
			
			
		$('select#topic-select').change( function() {
			$('#resource-count').html("Resources Found: 0").hide();
			$('#resource-count').fadeIn(2000);

			topicNid = $('select#topic-select option:selected').val();
						window.counter =0;
						window.resourceTopic = topicNid;
						$('li.topic-title').css('display','none');
						$('li.topic-desc').css('display','none');
						$('li#title-'+topicNid).fadeIn(2000);
						$('li#desc-'+topicNid).fadeIn(3000);
						
						var theURL = 'http://'+document.domain+'/resources-view-json/'+window.resourceType+'/'+window.resourceTopic+'/'+window.og;

						$('#divResources').html('');
						$.ajax({
							type: 'POST',
							url: theURL, 			
							success: updateResourcesTopic,  
							dataType: 'json', 		
							data: 'js=1' 				
							}).done(function() { 
										if (window.counter == 0) {
										var no_resource_link = $('<div id=\'resourcesList\'>No available resources for this selection.</div>');
										no_resource_link.appendTo('#divResources');
										}
								})				
	
			});

	}
	
	
//We are converting the types list to a select box now...

	typeSelect	=	$('<select id="type-select"></select>');
	typeSelect.appendTo('div#search-bar');
	
//Populate the types list with the taxonomy tree


    var updateTypes = function(data) {
			var typeOption = $("<option value='all'>All</option>");
			typeOption.appendTo(typeSelect);
			
			
		$.each(data, function() {
			var typeOption = $("<option value='"+this['nid']+"'>"+this['value']+"</option>");
			typeOption.appendTo(typeSelect);

			});
		
			
		$('select#type-select').change( function() {
			$('#resource-count').html("Resources Found: 0").hide();
			$('#resource-count').fadeIn(2000);
			typeNid = $('select#type-select option:selected').val();
						window.counter =0;
						window.resourceType = typeNid;
						var theURL = 'http://'+document.domain+'/resources-view-json/'+window.resourceType+'/'+window.resourceTopic+'/'+window.og;

						$('#divResources').html('');
						$.ajax({
							type: 'POST',
							url: theURL, 			
							success: updateResourcesType,  
							dataType: 'json', 		
							data: 'js=1' 				
							});			
		});
		
		

	}
	

		
		
		
//below are the functions for after the selections are made...

	var updateResourcesGroup = function(data) {
		window.counter=0;
		$.each(data, function() {
					window.counter +=1;
					var resource_link = $('<div id=\'resourcesList\'><h4 class="title"><a href=\'/node/'+this['nid']+'\'>'+this['node_title']+'</a></h4>'+'<div class=\'resource-teaser\'>'+this['node_revisions_teaser']+'</div></div>');
					resource_link.appendTo('#divResources');
					$('#resource-count').html("Resources Found: "+window.counter);
			})
		}

	var updateResourcesTopic = function(data) {
		window.counter=0;
		$.each(data, function() {
					window.counter +=1;
					var resource_link = $('<div id=\'resourcesList\'><h4 class="title"><a href=\'/node/'+this['nid']+'\'>'+this['node_title']+'</a></h4>'+'<div class=\'resource-teaser\'>'+this['node_revisions_teaser']+'</div></div>');
					resource_link.appendTo('#divResources');
					$('#resource-count').html("Resources Found: "+window.counter);
			})
		}

	var updateResourcesType = function(data) {
		window.counter=0;
		$.each(data, function() {
				window.counter +=1;
					resource_link = $('<div id=\'resourcesList\'><h4 class="title"><a href=\'/node/'+this['nid']+'\'>'+this['node_title']+'</a></h4>'+'<div class=\'resource-teaser\'>'+this['node_revisions_teaser']+'</div></div>');
					resource_link.appendTo('#divResources');
					$('#resource-count').html("Resources Found: "+window.counter);
			})
	
		}
     
	
	

   $.ajax({
      type: 'POST',
      url: '/group-tree', 		//
      success: updateGroups,  	// The js function that will be called upon success request
      dataType: 'json', 		// Define the type of data that is going to get back from the server
      data: 'js=1' 				// Pass a key/value pair
    });

   $.ajax({
      type: 'POST',
      url: '/topic-tree', 		//
      success: updateTopics,  	// The js function that will be called upon success request
      dataType: 'json', 		// Define the type of data that is going to get back from the server
      data: 'js=1' 				// Pass a key/value pair
    });

	
   $.ajax({
      type: 'POST',
      url: '/type-tree', 		//
      success: updateTypes,  	// The js function that will be called upon success request
      dataType: 'json', 		// Define the type of data that is going to get back from the server
      data: 'js=1' 				// Pass a key/value pair
    });
	

	


 

} //end drupal behaviors
	