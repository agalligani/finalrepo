(function($){
	$(document).ready(function() {

	var main_box = $("div#main-box");
	
		var img_1 = $("div#content_1 div.content_image").html();

	
//SECTION I - Grab all the values from the Scroller Node ...
	
	var desc 			= new Array(3);
	
	desc[1] =	$("div#content_1 div.content_description").text();
	desc[2] =	$("div#content_2 div.content_description").text();
	desc[3] =	$("div#content_3 div.content_description").text();

	var body 			= new Array(3);
	
	body[1] =	$("div#content_1 div.content_body").text();
	body[2] =	$("div#content_2 div.content_body").text();
	body[3] =	$("div#content_3 div.content_body").text();
	
	

	var content_type 	= new Array(3);
	
	content_type[1] = $("div#content_1 div.content_type").html();
	content_type[2] = $("div#content_2 div.content_type").html();
	content_type[3] = $("div#content_3 div.content_type").html();
	
	var content_value 	= new Array(3); //content value in html format
	
	content_value[1] = $("div#content_1 div.content_value").html();
	content_value[2] = $("div#content_2 div.content_value").html();
	content_value[3] = $("div#content_3 div.content_value").html();
	
	var content_value_txt 	= new Array(3); //content value in text format
	
	content_value_txt[1] = $("div#content_1 div.content_value").text();
	content_value_txt[2] = $("div#content_2 div.content_value").text();
	content_value_txt[3] = $("div#content_3 div.content_value").text();
	
	var content_image 	= new Array(3);
	
	content_image[1] = $("div#content_1 div.content_image").html();	
	content_image[2] = $("div#content_2 div.content_image").html();
	content_image[3] = $("div#content_3 div.content_image").html();
	
	var content_wrapper = new Array(3);
	var content = new Array(3);
	var content_embed = new Array(3);
	var content_overlay = new Array(3);
	
	/* ok now get rid of it all */

	main_box.html('');
	$('fieldset.group-entry-1').hide();
	$('fieldset.group-entry-2').hide();
	$('fieldset.group-entry-3').hide();
	
	//set up the buttons
	var rotator_buttons 		= $('<div id="vid-buttons"></div>');
	var rotator_button = new Array(3);

		rotator_button[1]		= $('<div class="vid-button active">1</div>');
		rotator_button[2]		= $('<div class="vid-button">2</div>');
		rotator_button[3]		= $('<div class="vid-button">3</div>');

		rotator_button[1].appendTo(rotator_buttons);
		rotator_button[2].appendTo(rotator_buttons);
		rotator_button[3].appendTo(rotator_buttons);
		
		rotator_button[1].click( function() {$(this).addClass('active').siblings().removeClass('active');
										
										stop =1; //stop the auto-rotate
										//reload the other vids to stop playing them

										if(c==1) {return c;}
										if(c==2) { // slide 2 is in center
										slide[1].css({left: lpos_neg_1});
										slide[3].css({left: lpos_1});
										slide[2].animate({left: lpos_1}, 500);											
										slide[1].animate({left: lpos_0}, 500);
										} else {
											content_load(1);
										}
										c=1;
			});
		rotator_button[2].click( function() {$(this).addClass('active').siblings().removeClass('active');
										stop =1; //stop the auto-rotate
										//reload the other vids to stop playing them

										if(c==2) {return c;}
										if(c==3) {
										slide[2].css({left: lpos_neg_1});
										slide[1].css({left: lpos_1});
										slide[3].animate({left: lpos_1}, 500);											
										slide[2].animate({left: lpos_0}, 500);
										} else {
											content_load(2);
										}
										c=2;
			});
		rotator_button[3].click( function() {$(this).addClass('active').siblings().removeClass('active');
										stop =1; //stop the auto-rotate
											//reload the other vids to stop playing them

										if(c==3) {return c;}
										if(c==1) { //slide 1 is centered
										slide[3].css({left: lpos_neg_1});
										slide[2].css({left: lpos_1});
										slide[1].animate({left: lpos_1}, 500);											
										slide[3].animate({left: lpos_0}, 500);
										} else {
											content_load(3);
										}
										c=3;
			});
	
		rotator_buttons.appendTo(main_box);

		
//SECTION II - Set the content slides up
	
	var slide					= new Array(3);
	var rotator_text 			= new Array(3);
	var rotator_text_title 		= new Array(3);
	var rotator_text_content 	= new Array(3);
	
	 slide[1] 				= $('<div id="slide-1" class="vid-box"></div>');
	 slide[2] 				= $('<div id="slide-2" class="vid-box"></div>');
	 slide[3] 				= $('<div id="slide-3" class="vid-box"></div>');
	 
loadAllContent();	 

function loadAllContent() {	 
	assignContent(1);
	assignContent(2);
	assignContent(3);
	}

	var lpos_neg_1 = (0-main_box.width())+"px";
	var lpos_0 = "0px";
	var lpos_1 = (main_box.width())+"px";
	var lpos_2 = (main_box.width())+"px";

function assignContent(c) {
	rotator_text[c] 			= $('<div class="vid-text"></div>');
	rotator_text_title[c]		= $('<h2>'+desc[c]+'</h2>');
	rotator_text_content[c]		= $('<p>'+body[c]+'</p>');
	
	rotator_text_title[c].appendTo(rotator_text[c]);
	rotator_text_content[c].appendTo(rotator_text[c]);
	rotator_text[c].appendTo(slide[c]);
	slide[c].appendTo(main_box);
	slide[c].css({'top': '0px'});
	assignContent2(c);
}

function assignContent2(c) {

	switch(content_type[c]) {
	
	//   yy     yy   oooooo   uu    uu  tttttttt  uu    uu  bbbbbb   eeeeeee
	//    yy   yy   oo    oo  uu    uu     tt     uu    uu  bb   bb  ee	
	//		yy      oo    oo  uu    uu     tt     uu    uu  bbbbbb   eeeeee
	//      yy      oo    oo  uu    uu     tt     uu    uu  bb   bb  ee
	//      yy       oooooo    uuuuuu      tt      uuuuuu   bbbbbb   eeeeeee
	
		case "Youtube":
			content_wrapper[c] = $("<div id='vid-wrapper'></div>");
			content_wrapper[c].appendTo(slide[c]);
			
				// trim the youtube video values...

			trimStart = content_value[c].indexOf('=');
			trimStop = content_value[c].indexOf('&');
//			if(trimStop == -1) {
//					cv = 	content_value[c].substr(trimStart+1,content_value[c].length);
//			}
//			if(trimStop > 0) {
//				cv = 	content_value[c].substring(trimStart+1,trimStop);
//			}

				cv = content_value[c].substr(16,content_value[c].length);
				
			var vh = '193px';
			var vw = '317px';
			content[c] = $('<object class="whoa" style="height: '+vh+'; width: '+vw+'"><param name="movie" value="https://www.youtube.com/v/'+cv+'?version=3&feature=player_embedded"><param name="allowFullScreen" value="true"><param name="allowScriptAccess" value="always"></object>');
//			content_embed[c] = $('<embed src="'+cv+'?version=3&feature=player_embedded" type="application/x-shockwave-flash" allowfullscreen="true" allowScriptAccess="always" width="'+vw+'" height="'+vh+'">');
			content_embed[c] = $('<embed src="http://www.youtube.com/v/'+cv+'?version=3&feature=player_embedded" type="application/x-shockwave-flash" allowfullscreen="true" allowScriptAccess="always" width="'+vw+'" height="'+vh+'">');

			content_embed[c].appendTo(content[c]);
			
			content[c].appendTo(content_wrapper[c]);
			
			
		content[c].bind('mouseover', function(e) {stop=1;});		

			//	mousedown(function() {alert('heck yeah!');});
			
		break;
		
		case "Vimeo":
		
		// vv    vv  iiiiii  m      m  eeeeee   oooooo
		// vv    vv    ii    mmm  mmm  ee      oo    oo
		// vv    vv    ii    mm mm mm  eeeee   oo    oo
		//  vv  vv     ii    mm    mm  ee      oo    oo
		//    vv     iiiiii  mm    mm  eeeeee   oooooo
		
			content_wrapper[c] = $("<div id='vid-wrapper'></div>");
			content_wrapper[c].appendTo(slide[c]);
			
			cv = content_value_txt[c];
			content[c] = $(cv);
			content[c].height(193);
			content[c].width(317);
			content[c].appendTo(content_wrapper[c]);
			
			

		break;
		
		case "Resource":
		
		// RRRRR   EEEEEE   SSSSS    OOOOO   UU   UU  RRRRR    CCCCC  EEEEEE   SSSSS
		// RR  RR  EE      SS       OO   OO  UU   UU  RR  RR  CC      EE      SS
		// RRRRR   EEEE     SSSSS   OO   OO  UU   UU  RRRRR   CC      EEEE     SSSSS
		// RR RR   EE           SS  OO   OO  UU   UU  RR RR   CC      EE           SS
		// RR  RR  EEEEEE   SSSSS    OOOOO    UUUUU   RR  RR   CCCCC  EEEEEE   SSSSS
		
		
		// TODO: add resource logic
			content_wrapper[c] = $("<div id='vid-wrapper'></div>");
			if(content_image[c].length) {

				var the_image = $(content_image[c]);
				the_image.css({"height":"215px","width":"317px","cursor":"pointer"});

				the_image.click(function(){
//							window.open(content_value_txt[c], 'STLC Resource', "location=1,status=1,scrollbars=1");
							window.open("http://www.yahoo.com", 'STLC Resource', "location=1,status=1,scrollbars=1");
							return false;
				});

					the_image.appendTo(content_wrapper[c]);
			}			 
			 
			content_wrapper[c].appendTo(slide[c]);
			
			
			
		break;
		
	}
	
}

	slide[1].css({'left': lpos_1});	
	slide[2].css({'left': lpos_1});	
	slide[3].css({'left': lpos_0, 'opacity':'0'});	



		var stop = 0; //set up a stop variable for the rotator



		
		var c=0;	

rotator();
	
function timedCount() {	
	rotator();	
	}
	

function rotator()
	{	if (stop==1) {return c;}	
		if (c==3) { c=0; }		
			c=c+1;			
			
						t=setTimeout(timedCount,6000);
						content_load(c);
	}

	
function content_load(v) {
						rotator_button[v].addClass('active').siblings().removeClass('active');	
							switch(v) {
							case 1:
								slide[1].animate({left: lpos_0}, 1000);
								slide[2].css({left: lpos_1});
								slide[3].animate({left: lpos_neg_1}, 1000);
							break;
							case 2:
								slide[3].css({'opacity':'1'}); //unhide from initial hide	
								slide[2].animate({left: lpos_0}, 1000);
								slide[3].css({left: lpos_1});
								slide[1].animate({left: lpos_neg_1}, 1000);
							break;
							case 3:
								slide[3].animate({left: lpos_0}, 1000);
								slide[1].css({left: lpos_1});
								slide[2].animate({left: lpos_neg_1}, 1000);
							break;
							}
						}

/**********************************************************************************************/						
/**********************************************************************************************/						
/*************************** view switching logic goes here ***********************************/
/**********************************************************************************************/
/**********************************************************************************************/						
/**********************************************************************************************/						
						
			var view_switch	= $('<div class="panel-pane pane-views">' +
								'<div class="inner">' +
								'<h2 class="pane-title block-title cc">Community Content</h2>' +
								'<div class="pane-content content fade-bg">' +
									'<div id=\'view_switch_1\' class=\'view_switch_on\'>Latest</div>'+
									'<div id=\'view_switch_2\' class=\'view_switch_off\'>Most Popular</div>'+
									'<div id=\'main-inner\' class=\'clearfix\'></div>'+
								'</div>' +		
								'</div>'
							);
							
						
				$("div.panel-2col div.pane-homepage-recent-featured").before(view_switch);
				$("div.panel-2col div.pane-homepage-recent-featured h2.pane-title").remove();
				$("div.panel-2col div.pane-popular h2.pane-title").remove();

				$('h2.cc').css({'margin-bottom':'0px'});			
				//by default hide the most popular pane
				$("div.panel-2col div.pane-popular").hide();					
				

				$('div.#view_switch_1').click(function() {
					$(this).addClass('view_switch_on').removeClass('view_switch_off');				
					$('div.#view_switch_2').addClass('view_switch_off').removeClass('view_switch_on');		
					$("div.panel-2col div.pane-homepage-recent-featured").fadeIn();
					$("div.panel-2col div.pane-popular").hide();					
				});
				
				$('div.#view_switch_2').click(function() {
					$(this).addClass('view_switch_on').removeClass('view_switch_off');				
					$('div.#view_switch_1').addClass('view_switch_off').removeClass('view_switch_on');
								$("div.panel-2col div.pane-homepage-recent-featured").hide();
								$("div.panel-2col div.pane-popular").fadeIn();						
				});
			
			
		
	});
	

	
	

})(jQuery);