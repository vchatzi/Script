AddtoBasket()
{
	
	/* Clk Add to Basket */

	
	lr_think_time(1);
	
	web_reg_save_param("c_viewstate1",
                       "LB=javax.faces.ViewState\" value=\"",
                       "RB=\"",
                       "ORD=1",
                       "NOTFOUND=Warning",
                       LAST);

	web_set_max_retries ("10");		
	
	lr_start_transaction("UK-09-ClkAddtoBasket");

	

	web_reg_find("Search=All",
		"SaveCount=",
		"Text=Added",
		LAST);

	web_submit_data("0281035_5", 
		"Action=https://{p_URL}/web/p/{brVal}", //socket-{p_searchParam}ews/0292271
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0292271/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value={c_ajaxReq}", ENDITEM, //j_id3061
		"Name=addToCartForm_{c_BasketId}", "Value=addToCartForm_{c_BasketId}", ENDITEM, 
		"Name=addToCartForm_{c_BasketId}:qtyWeb", "Value={prodqty}", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", ENDITEM, 
		"Name=addToCartForm_{c_BasketId}:addToOrder", "Value=addToCartForm_{c_BasketId}:addToOrder", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);
	
	lr_end_transaction("UK-09-ClkAddtoBasket", LR_AUTO);

	lr_think_time(1);

	return 0;
}