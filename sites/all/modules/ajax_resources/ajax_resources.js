	// $Id$
Drupal.behaviors.ajax_resources = function (context) {


//Populate the topics list with the taxonomy tree

$('#topic-list').html('test');

    var updateTopics = function(data) {
	var nids = '';
    $.each(data, function() {
		$("<li><a class='topicLink' href='/"+this['value']+"'>"+this['value']+"</a></li>").appendTo('ul#topic-list');

		
        nids += this['nid'] + "";
    });
      $('#divResources').html(nids); // The “products” property is the list of products items 
    } 

   $.ajax({
      type: 'POST',
      url: '/topic-tree', 		//
      success: updateTopics,  	// The js function that will be called upon success request
      dataType: 'json', 		// Define the type of data that is going to get back from the server
      data: 'js=1' 				// Pass a key/value pair
    });

	
	
	
  $('a.categoryLink:not(.categoryLink-processed)', context).click(function () {
 
	$('#divProducts').html('');
	// This function will get executed after the ajax request is completed successfully
	// The data parameter is a JSON object.
    var updateProducts = function(data) {
	
      $('#divResources').html(data.products); // The “products” property is the list of products items 
    }                                        // that was returned from the server response to the ajax request.
	
	
    $.ajax({
      type: 'POST',
      url: this.href, 			// Which url should be handle the ajax request. This is the url defined in the <a> html tag
      success: updateProducts,  // The js function that will be called upon success request
      dataType: 'json', 		// Define the type of data that is going to get back from the server
      data: 'js=1' 				// Pass a key/value pair
    });
    return false;  				// Return false so the navigation stops here and not continue to the page in the link
}).addClass('categoryLink-processed');


  $('a.resourcesLink:not(.reourcesLink-processed)', context).click(function () {
 
	$('#divProducts').html('');
	// This function will get executed after the ajax request is completed successfully
	// The data parameter is a JSON object.
    var updateResources = function(data) {
				
	// this is where we can loop through the results in the json object
	$.each(data, function(i,resource){
			$("<div class='resource'>"+resource.node_title+"</div>").appendTo('#divProducts');
	  });
    }                                        // that was returned from the server response to the ajax request.
	
	
    $.ajax({
      type: 'POST',
      url: this.href, 			// Which url should be handle the ajax request. This is the url defined in the <a> html tag
      success: updateResources,  // The js function that will be called upon success request
      dataType: 'json', 		// Define the type of data that is going to get back from the server
      data: 'js=1' 				// Pass a key/value pair
    });
    return false;  				// Return false so the navigation stops here and not continue to the page in the link
}).addClass('resourcesLink-processed');


}
	