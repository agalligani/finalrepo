(function($){
	$(document).ready(function() {
	
	
	
	$('.row_wrapper').
		mouseover(function() { $(this).css({'background-color':'#777777'}); }).
		mouseout(function() { $(this).css({'background-color':'#ffffff'}); }).
		click(function() { 
			//add the overlay and action box
			add_overlay();
		
			//capture the cid and contact name of the clicked row
			var selectedCID 	= $(this).find('div.cid').attr('id');
			var selectedName 	= $(this).find('div.display_name').html();

			//create a message for the action box
			var action_msg = "<div class='action_message'>"+
			"Press CTRL + the OK button in the row you want to merge with. <br> Name: "+selectedName+
			"<br> Contact id: #"+selectedCID+". <br> Hit \"Cancel\" to terminate this operation."+
			"<div";
			$('#action_box').append(action_msg);
			
	
			//move the duplicates to the action box by cloning the whole group
			$(this).parent().clone().appendTo('#action_box');
			
			//find the row that is a duplicate of the row selected in the alert bow and hide it
			var action_row = $('#action_box>.grouping>.row_wrapper>div#'+selectedCID).parent();
			action_row.remove();
			
			$('#action_box>.grouping>.row_wrapper').
				mouseover(function() { $(this).css({'background-color':'#777777'}); }).
				mouseout(function() { $(this).css({'background-color':'#ffffff'}); }).
				click(function() {
				$(this).append("<div class='tiny_cell'>"+
								"<a href='http://localhost/civi/civicrm/contact/merge?reset=1&cid="+
									selectedCID+"&oid="+
									$(this).find('div.cid').attr("id")+
									"&action=update&rgid=7'  target='_blank'>"+
									$(this).find('div.cid').attr("id")+
									"</a></div>");
				});
				
			$('.tiny_cell').click( function(){
			
				$('div#action_box').remove();
				$('div#overlay_tint').remove();
				$('div#overlay_wrapper').remove();
			});	

		});
	
	});

//add the wrapper functions...

	
	function add_overlay() {
		//create a background tint partially opaque
		var tinter = $('<div id=\'overlay_tint\'></div>');
		$('body').append(tinter);
		tinter.css({'opacity':'0.3'});
		
		//create clear bacckground to position the action box
		var clear_wrapper = $('<div id=\'overlay_wrapper\'></div>');
			$('body').append(clear_wrapper);
	
		var action_box = $('<div id=\'action_box\'></div>');
			clear_wrapper.append(action_box);			
			
		var close_button = $('<a id=\'close_button\'>CANCEL</a>');
			action_box.append(close_button);			
		
		close_button.click(function() {
				action_box.remove();
				tinter.remove();
				clear_wrapper.remove();
		});
	
	} 	// end add_overlay()
	
	
})(jQuery);