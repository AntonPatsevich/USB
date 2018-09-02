<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=windows-1251">
<title>Озера Беларуси</title>
</head>
<body>


<? $vyb=$_POST[vyb]; $rek=$_POST[rek]; $hed="ozera/header.htm";
if ($vyb==1) $fvyb="ozera/narach.htm";
if ($vyb==2) $fvyb="ozera/drivaty.htm";
if ($rek==1) $frek="ozera/reklama1.htm";
if ($rek==2) $frek="ozera/reklama2.htm";
include $hed; echo "<p><hr>"; 
include $fvyb; echo "<p><hr>"; 
if ($rek>0) include $frek; ?>








</body>
</html>

