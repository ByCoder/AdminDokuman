<?php

class mysql_config  

         {
			 
		  private $DBHOST='localhost';
		  private $DBNAME='pegasi';
		  private $DBUSER='root';
		  private $DBPASS='';
		  
		      function mysql_con()
			      
				     {
					     
						 $mcon=mysql_connect($this->DBHOST,$this->DBUSER,$this->DBPASS) or die ('Mysql Baglantisi Hatasi Aldiniz. Mysql Bilgileriniz Lutfen admin/inc/mysql.inc den Düzeltiniz.');	 
						 mysql_select_db($this->DBNAME,$mcon) or die ('Mysql Suanda Olusturdugunuz Veri Tabanına Ulasamadı Lütfen Mysql Bağlantı Ayarlarınızı Kontrol Ediniz');
					 }	 
			 
		 }

class mysql_add  

         {
		       public $add_tablo_adi;
			   public $add_sutun_adi;
			   public $add_veri;
			   
			                                   //("INSERT INTO tabloadı (ornek1,ornek2) VALUES ('$deger1','$deger2')")
				 function mysql_add_onay ()
				 
				        {
						
						 mysql_query("INSERT INTO ".$this->tablo_adi." (".$this->sutun_adi.") VALUES (".$this->add_veri.") ");	
							
						}	 
			 
		 }
		 

class mysql_update

         {
		     
			   public $upd_tablo_adi;
			   public $upd_veri;
			   public $where_id;
			   public $upd_id;
			 
                                                //("UPDATE tabloadı SET ornek='$veri1',ornek2='$veri2',ornek3='$veri3' WHERE id=$idmiz")
			    function mysql_update_onay ()
				  
				           {
							   
							  mysql_query("UPDATE ".$this->upd_tablo_adi." SET ".$this->upd_veri." WHERE  ".$this->where_id."=".$this->upd_id."  "); 
						    
						   }
				   
			 
		 }
		 
		 
		 
class mysql_delete 

      {
		     public $del_tablo_adi;
			 public $where_id;
			 public $del_id;
		  
		                                  //("DELETE FROM firma WHERE id='".$gelen_id."' ")
		  function mysql_delete_onay ()
		  
		           {
					   
					   mysql_query("DELETE FROM ".$this->del_tablo_adi." WHERE ".$this->where_id."='".$this->del_id."' ");
					   
				   }
		  
		  
		  
		  
		  
	  }




























?>