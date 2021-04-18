<?php
$name = $_POST["name"];
$proj = $_POST["project"];
$f = "testPost.txt";
$today = date("y-m-d H;i;s");
$rec = $today . ' ' . $name . ' ' . $proj . "\n";
if(file_exists($f))
        $fp = fopen($f, "a");
else
        $fp = fopen($f, "w");

fwrite($fp, $rec);
fclose($fp);
echo "Data is saved";
?>
