// $Id$
Drupal.behaviors.edsat_search = function (context) {

	if($('input#edit-keys').val() == 'adv-src') {
		advancedOn();
		$('input#edit-keys').val('');
				$('li#advancedTab').addClass('search-on').removeClass('search-off');
		$('li#basicTab').addClass('search-off').removeClass('search-on');

	}
	
	search_text = $('input#edit-search-theme-form-header');

	search_text.focus( function() {
		
		
		this_val = $(this).val() == "Search..." ? "":$(this).val();  

		$(this).val(this_val);
			
	});
	
	 $('ul#search-tabs li').click( function() {
		$(this).siblings().addClass('search-off');		
		$(this).siblings().removeClass('search-on');		
		$(this).addClass('search-on');		
		$(this).removeClass('search-off');				
	 });
	 
	 $('li#advancedTab').click(function() {advancedOn();});
	 $('li#basicTab').click(function() {advancedOff();});

	 function advancedOn() {
		$('fieldset.search-advanced').fadeIn(2000);
		$('#edit-submit-1').show();
		$('#edit-submit').hide();
	 }
	 
	 function advancedOff() {
		$('fieldset.search-advanced').fadeOut(500);
		$('#edit-submit').show();
		$('#edit-submit-1').hide();
	 }
	 
	 
	 function populateCheckedCats() {
		$('div#edit-category-wrapper input[type="checkbox"]').removeAttr('checked');
		$("div#edit-catTopic-wrapper input:checked").each(function() {
				setTopicOn($(this).val());
		});
		
		$("div#edit-catType-wrapper input:checked").each(function() {
				setTopicOn($(this).val());
		});
	}

//	$('div#edit-category-wrapper').hide();
	
	function setTopicOn(checkedTopic) {
		$('div#edit-category-wrapper input[value="'+checkedTopic+'"]').attr('checked','checked');
	}
	
//		jQuery('#my-checkbox').attr('checked','checked');
//	jQuery('#my-checkbox').removeAttr('checked');
	 $("div#edit-catTopic-wrapper input:checkbox").click(populateCheckedCats);
	 $("div#edit-catType-wrapper input:checkbox").click(populateCheckedCats);

	 $("a.ui-multiselect-all").click(populateCheckedCats);
	 $("a.ui-multiselect-none").click(populateCheckedCats);
	 

}