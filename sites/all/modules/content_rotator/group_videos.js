(function($){
	$(document).ready(function() {

				
	//action for search box... sorry i put it here ...:)
	
	
	
//	$(".search-input").click( function() {$(this).value('')});
	
	
//SECTION I - Grab all the values from the Scroller Node ...
	
	var gv = new Array(3);
	var gv_url = new Array(3);
	var gvp = new Array(3);
	var gv_content = new Array(3);
	var gv_content_embed = new Array(3);
	var gv_img	= new Array(3);
	
		gv[1] =	$("div.field-field-video-1 div.field-items div.field-item");
		gv[2] =	$("div.field-field-video-2 div.field-items div.field-item");
		gv[3] =	$("div.field-field-video-3 div.field-items div.field-item");

	
		gv_url[1] =	$.trim(gv[1].html().replace(/&amp;/g, '&'))+'&';
		gv_url[2] =	$.trim(gv[2].html().replace(/&amp;/g, '&'))+'&';
		gv_url[3] =	$.trim(gv[3].html().replace(/&amp;/g, '&'))+'&';

	
			var vhz = '131px';
			var vwz = '209px';
	
	
	for (x=1;x<4;x++) {
			// trim the youtube video values...
			trimStart = gv_url[x].indexOf('=');
			trimStop = 	gv_url[x].indexOf('&');
			if(trimStop == -1) {
					gval = 			gv_url[x].substr(trimStart+1,content_value[c].length);
			}
			if(trimStop > 0) {
					gval = 			gv_url[x].substring(trimStart+1,trimStop);
			}
			gv_img = 'http://i1.ytimg.com/vi/'+gval+'/0.jpg';
			gv_content[x] = $('<object class=\'group-video\' style="height: '+vhz+'; width: '+vwz+'"><param name="movie" value="https://www.youtube.com/v/'+gval+'?version=3&feature=player_embedded"><param name="allowFullScreen" value="true"><param name="allowScriptAccess" value="always"></object>');
			gv_content_embed[x] = $('<embed src="https://www.youtube.com/v/'+gval+'?version=3&feature=player_embedded" type="application/x-shockwave-flash" allowfullscreen="true" allowScriptAccess="always" width="'+vwz+'" height="'+vhz+'">');
					gvp[x] =  gv[x].parent().parent();
		gvp[x].html('');
		gv_content[x].appendTo(gvp[x]);
		gv_content_embed[x].appendTo(gvp[x]);
		
		

	}
		clearer = $("<div class='clearfix'><p></p></div>");
		topSpot = $("div.panel-2col-stacked div.pane-node-title div.pane-content");
		video_1_title = $("div.field-field-video-1-title div.field-item");
		title1 = video_1_title.html();
		$("<p>"+title1+"<br/><br/><p>").appendTo(gvp[1]);
		video_2_title = $("div.field-field-video-2-title div.field-item");
		title2 = video_2_title.html();
		$("<p>"+title2+"<br/><br/><p>").appendTo(gvp[2]);
		video_3_title = $("div.field-field-video-3-title div.field-item");
		title3 = video_3_title.html();
		$("<p>"+title3+"<br/><br/><p>").appendTo(gvp[3]);
		video_1_title.parent().parent().remove();
		video_2_title.parent().parent().remove();
		video_3_title.parent().parent().remove();
		
		clearer.appendTo(topSpot);


		gvp[1].appendTo(topSpot);
		gvp[2].appendTo(topSpot);
		gvp[3].appendTo(topSpot);
			

		
	});

})(jQuery);