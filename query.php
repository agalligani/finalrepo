<?php

$db_url = 'mysql://edsat_user:Drup!L5@localhost/edsat';

$link = mysql_connect('localhost', 'edsat_user', 'Drup!L5');
if (!$link) {
    die('Could not connect: ' . mysql_error());
}
echo 'Connected successfully';

if (!mysql_select_db('edsat', $link)) {
    echo 'Could not select database';
    exit;
}

//run query

$sql    = "SELECT nid, title FROM node WHERE type = 'group' ORDER BY title";
$result = mysql_query($sql, $link);

if (!$result) {
    echo "DB Error, could not query the database\n";
    echo 'MySQL Error: ' . mysql_error();
    exit;
}

while ($row = mysql_fetch_assoc($result)) {
    echo "<br/>".$row['nid'];
    echo " => ";
    echo $row['title'];
}

mysql_free_result($result);

mysql_close($link);
?>

