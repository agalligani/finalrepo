(function($){
	$(document).ready(function() {



//SECTION II - Set the content slides up
	
	var slide					= new Array(3);
	var rotator_text 			= new Array(3);
	var rotator_text_title 		= new Array(3);
	var rotator_text_content 	= new Array(3);
	
	var slide[1] 				= $('<div id="slide-1" class="vid-box"></div>');
	var slide[2] 				= $('<div id="slide-2" class="vid-box"></div>');
	var slide[3] 				= $('<div id="slide-3" class="vid-box"></div>');

	rotator_text[1] 			= $('<div class="vid-text"></div>');
	rotator_text_title[1]		= $('<h2></h2>');
	rotator_text_content[1]		= $('<p></p>');

	var rotator_video			= $('<div id="vid-wrapper">'+
									'<!-- iframe width="317" scrolling="no" height="193" '+
									'frameborder="0" title="YouTube video player" '+
									'src="https://www.youtube.com/embed/ixC4aj5Me0c?rel=0&amp;wmode=transparent" '+
									'longdesc="https://www.youtube.com/ixC4aj5Me0c" allowfullscreen=""/ -->'+
									'</div>'
									);

	//set up the buttons
	var rotator_buttons 		= $('<div id="vid-buttons"></div>');
	var rotator_button = new Array(3);
		rotator_button[1]		= $('<div class="vid-button active">1</div>');
		rotator_button[2]		= $('<div class="vid-button">2</div>');
		rotator_button[3]		= $('<div class="vid-button">3</div>');
		
			
			


									
		
	//Set title
	rotator_text_title[1].appendTo(rotator_text[1]);	
	rotator_text_content[1].html('Lorem ips');
	rotator_text_content[1].appendTo(rotator_text[1]);	

	rotator_text_title[1].html(desc[1]);
	rotator_text[1].appendTo(slide[1]);
	rotator_video.appendTo(slide[1]);
	
	//add the buttons
	rotator_buttons.appendTo(rotator_text[1]);
	rotator_button[1].appendTo(rotator_buttons);
	rotator_button[2].appendTo(rotator_buttons);
	rotator_button[3].appendTo(rotator_buttons);

	$('.vid-button').click(
		function() {
			$(this).siblings().removeClass('active');
			$(this).addClass('active');
			$('div#vid-text').html('johnson');
		}
	);


var c=0;	

rotator();
	
function timedCount() {	
	rotator();	
	}
	

function rotator()
	{		
		if (c==3) { c=0; }		
			c=c+1;			
			
						t=setTimeout(timedCount,1000);
						content_load(c);
	}


function content_load(v) {
						rotator_button[v].addClass('active').siblings().removeClass('active');	
}





/*
<div id="vid-box">
	<div id="vid-text">johnson</div>
	
		<div id="vid-buttons">
			<div class="vid-button active">1</div>

			<div class="vid-button">2</div>
			<div class="vid-button">3</div>
		</div>
		<div id="vid-wrapper"><iframe width="317" scrolling="no" height="193" frameborder="0" title="YouTube video player" src="https://www.youtube.com/embed/ixC4aj5Me0c?rel=0&amp;wmode=transparent" longdesc="https://www.youtube.com/ixC4aj5Me0c" allowfullscreen=""/></div>
	</div>    </div>
*/	
	
	

});
})(jQuery);