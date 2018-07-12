ViewProductDeatils()
{
	web_reg_find("Text=Real time qty checker", "SaveCount=checkstock_count", LAST);
	

	lr_think_time(1);
	
	web_reg_save_param("c_ajaxReq",
	  	"LB=A4J.AJAX.Submit('",
	  	"RB=','addToCartForm",
	  	"ORD=1",
	  	"NOTFOUND=Warning",
	   	LAST);

	web_reg_save_param("c_BasketId",
		"LB=<form id=\"addToCartForm_",
		"RB=\" name",
		"ORD=1",
		"NOTFOUND=Warning",
		LAST);
	
	web_reg_save_param("c_viewstate",
	   	"LB=faces.ViewState\" value=\"",
	   	"RB=\"",
	   	"ORD=1",
	 	"NOTFOUND=Warning",
	  	LAST);
	
	web_reg_save_param("rtqCheck",
	  	"LB='rtqCheckerForm:",
	  	"RB=',",
	   	"ORD=1",
	   	"NOTFOUND=Warning",
	   	LAST);
	
	web_reg_save_param("prodqty",
	  	"LB=SaveToPartsListWidgetAction_quantity\" value=\"",
	  	"RB=\"",
  		"ORD=1",
	 	"NOTFOUND=Warning",
	  	LAST);
	 
	web_set_max_retries ("10");
	
	lr_start_transaction("AU-06-ViewProductDetailsPage");
	
	web_reg_find("Search=All",
		"SaveCount=",
		"Text=Product Details",
		LAST);

	web_url("Hex Socket Cap Stainless Steel Plain Socket {p_searchParam}ew, M4 x 12mm", 
		"URL=https://{p_URL}/web/p/{brVal}", //0281035  socket-{p_searchParam}ews/0292271/
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/c/fasteners-fixings/{p_searchParam}ews-bolts/socket-{p_searchParam}ews/?sra=p&r=t", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("AU-06-ViewProductDetailsPage",LR_AUTO);

	return 0;
}
