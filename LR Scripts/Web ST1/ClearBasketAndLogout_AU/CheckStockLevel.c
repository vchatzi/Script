CheckStockLevel()
{
	int nFound;
	nFound = atoi(lr_eval_string("{checkstock_count}"));
	                  	if (nFound == 0)
	    return 0; 
	else
	{
   	
	
	lr_think_time(1);
	
	web_set_max_retries ("10");
	
	web_reg_find("Text=Real time qty checker", LAST);
	
	lr_start_transaction("AU-07-CheckStockLevelLink");

	web_submit_data("0281035", 
		"Action=https://{p_URL}/web/p/{brVal}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0281035/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value={c_ajaxReq}", ENDITEM, //j_id3061
		"Name=addToCartForm_{c_BasketId}", "Value=addToCartForm_{c_BasketId}", ENDITEM, //115597
		"Name=addToCartForm_{c_BasketId}:qtyWeb", "Value={prodqty}", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", ENDITEM, //j_id3
		"Name=addToCartForm_{c_BasketId}:rtqLinkTop", "Value=addToCartForm_{c_BasketId}:rtqLinkTop", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("0281035_2", 
		"Action=https://{p_URL}/web/p/{brVal}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0281035/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=rtqCheckerForm", "Value=rtqCheckerForm", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", ENDITEM, 
		"Name=rtqCheckerForm:rtqCheckQty", "Value={prodqty}", ENDITEM, 
		"Name=rtqCheckerForm:{rtqCheck}", "Value=rtqCheckerForm:{rtqCheck}", ENDITEM, //j_id3142
		"Name=ajaxSingle", "Value=rtqCheckerForm:rtqCheckQty", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);
	
	lr_end_transaction("AU-07-CheckStockLevelLink", LR_AUTO);


	/* Clk on Check */
	
	web_set_max_retries ("10");
	
	lr_start_transaction("AU-08-CheckStockLevel");


	web_submit_data("0281035_3", 
		"Action=https://{p_URL}/web/p/{brVal}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0281035/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=rtqCheckerForm", "Value=rtqCheckerForm", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", ENDITEM, 
		"Name=rtqCheckerForm:rtqCheckQty", "Value={prodqty}", ENDITEM, 
		"Name=rtqCheckerForm:{rtqCheck}", "Value=rtqCheckerForm:{rtqCheck}", ENDITEM, 
		"Name=ajaxSingle", "Value=rtqCheckerForm:rtqCheckQty", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("0281035_4", 
		"Action=https://{p_URL}/web/p/{brVal}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0281035/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=rtqCheckerForm", "Value=rtqCheckerForm", ENDITEM, 
		"Name=rtqCheckerForm:rtqCheckQty", "Value={prodqty}", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", ENDITEM, 
		"Name=rtqCheckerForm:rtqCheckButton", "Value=rtqCheckerForm:rtqCheckButton", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);
	
	lr_end_transaction("AU-08-CheckStockLevel", LR_AUTO);
	
	}
	
	
	return 0;
}
