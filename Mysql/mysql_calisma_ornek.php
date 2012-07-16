<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>


<?php 

include('inc/mysql.inc');

$baglan= new  mysql_config();
$baglan->mysql_con();

/*

Örnek mysql veri ekleme

$mysqladd= new mysql_add();
$mysqladd->tablo_adi="veri";
$mysqladd->sutun_adi="kullanici,sifre";
$mysqladd->add_veri="'admin','15935789'";
$mysqladd->mysql_add_onay();
*/

/*
örnek mysql veri guncelleme

$mysql_update= new mysql_update();
$mysql_update->upd_tablo_adi="veri";
$mysql_update->upd_veri="kullanici='Replay',sifre='789456123'";
$mysql_update->where_id="id";
$mysql_update->upd_id="2";
$mysql_update->mysql_update_onay();
*/

/*
Örnek mysql veri silme

$mysql_delete= new mysql_delete();
$mysql_delete->del_tablo_adi="veri";
$mysql_delete->where_id="id";
$mysql_delete->del_id="1";
$mysql_delete->mysql_delete_onay();
*/

?>

<body>
</body>
</html>