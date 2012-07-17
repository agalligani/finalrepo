<?php
$glinks = array(
    "807" => "Increased Learning Time",
    "812" => "Teacher and Leader Effectiveness",
    "1611" => "Secondary Schools"
);
$x = '812';
?>
<ul id="discussion-links">
<?php
foreach($glinks as $key => $value) {
	$normal 	= "<li><a href='discussion_boards_group/%s'>%s</a></li>";	
	$active 	= "<li class='active'><a href='discussion_boards_group/%s'>%s</a>*</li>";	
if ($x==$key) {
	printf($active, $key, $value);
	} else {
	printf($normal, $key, $value);
	}
}
?>

<ul>
