<?php
$min = $_POST["min"];
$max = $_POST["max"];
$id = $_POST["user"];
$f = "Data.txt";
$today = date("y-m-d H;i;s");
$ip = $_SERVER["REMOTE_ADDR"];
$rec = $today . ',' . $min . ',' . $max . ',' . $id . ',' . $ip . "\n";
if(file_exists($f))
        $fp = fopen($f, "a");
else
        $fp = fopen($f, "w");

fwrite($fp, $rec);
fclose($fp);
echo "Data is saved\n";
?>
