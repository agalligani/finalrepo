<?php
function resources_form() {


$newLayout=<<<defaulto
	<div id='resources-wrapper'>
		<ul id='topic-desc-list'></ul>
		<ul id='type-desc-list'></ul>
		<div id='divResources'></div>
	</div>
	
	<div id ='search-bar'>
		<div id='group-select-label'>Group</div>
		<div id='type-select-label'>Resource Type</div>
		<div id='topic-select-label'>Resource Topic</div>
		<div id='advanced-search'><a id='advanced-search-link' href="/search/node/adv-src">Advanced Search</a></div>	
		<div id='resource-count'></div>	
	</div>	
	<div id ='static-text'>
		<h3>School Turnaround Learning Community Library of Resources</h3>
		<p>The purpose of the School Turnaround Learning Community (STLC) Library of Resources is to provide a range of resources to assist states, districts, and schools in quickly and efficiently locating resources that support the implementation of the U.S. Department of Education (ED) School Improvement Grants (SIG). The library serves as a repository of tools, products, reports, media, webinars, and research to support implementation.</p><p>The library was compiled through a systematic search procedure using search terms aligned with the topics identified by ED as closely related to SIG implementation. Resources were identified through ED's website, Federally-funded projects and centers such as the Content and Comprehensive Centers, Regional Education Labs, and Doing What Works as well as through non-profit organizations, ERIC, EBSCO, and JSTOR. All resources not from Federally-funded projects or centers were reviewed using a vetting tool. The library does not include reports, articles, or tools that promote a branded curriculum or program.</p>
	</div>	
	<div id='type-header' class='resource-header'>Types</div>
		<div id='topic-wrapper'><div id='topic-header' class='resource-header'>&nbsp;</div></div>
		<div id='type-wrapper'><div id='type-header' class='resource-header'>Types</div></div>
			
	</div>

defaulto;
				

						
return $newLayout;
				
}
