/**
 * Custom tweaks for rtt2 theme
 */
$(document).ready(function() {
  // Remove certain empty elements. RTT-203, RTT-205
//  $('a[href]').filter(function(index) { return !$(this).text() && !$('img', this).length; }).remove();
//  $('h1, h2, h3, h4, h5, h6').filter(function(index) { return !$(this).text(); }).remove();

  // Indicate today's date on the calendar. RTT-65
//  $(".calendar-calendar td.today .inner .day").append(
//    $("<span>(today)</span>")
//    .addClass("calendar-today-indicator")
//  );



// Add click functionality to the search box(es)

$('input#edit-search-theme-form-header').click( function() {

	var search_val = $(this).val();
	if (search_val == "Search...") {
		$(this).val('').css('color','#5588dd');	
	}
}
);

// On page load, if value of search is not the default value, change text color

	if('Search...' != $('input#edit-search-theme-form-header').val()) {
		$('input#edit-search-theme-form-header').css('color','#5588dd');	
}



//Set the value of original and rollover image URL
	var outImg = $("input#search_header").css('background-image');
	var overImg = outImg.replace(/spy_glass/i,'spy_glass_hover');

// On mouseover change the background image of the search button


$("input#search_header").mouseover( function() {	
		$(this).css('background-image',overImg);
	});
	
$("input#search_header").mouseout( function() {
		$(this).css('background-image',outImg);
	});

	
// Preload images
function preload(arrayOfImages) {
    $(arrayOfImages).each(function(){
         (new Image()).src = this;
    });
}

// Usage:

preload([
	'../images/spy_glass_hover.png'
]);


//Search bar functions

	$(".search-input").click( function() {
		$(".search-input").attr('value','');
	});
	
	
	$("input#edit-keys").click( function() {
		$(this).value('');
	});
	
	
});
