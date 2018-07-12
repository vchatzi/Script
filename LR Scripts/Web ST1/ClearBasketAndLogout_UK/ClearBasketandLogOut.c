ClearBasketandLogOut()
{
	lr_start_transaction("UK-15-ClearBasket");
	web_reg_find("Search=All",
		"SaveCount=",
		"Text=\"page_type\":\"basket\"",
		LAST);
	web_submit_data("basketsummary",
        "Action=https://{p_URL}/web/ca/basketsummary/", 
        "Method=POST", 
        "TargetFrame=", 
        "RecContentType=text/html", 
        "Referer=http://{p_URL}/web/ca/basketsummary/", 
        "Snapshot=t29.inf", 
        "Mode=HTML", 
        ITEMDATA, 
        "Name=isRemoveAll", "Value=true", ENDITEM, 
        LAST);
	
	web_url("0 £0.00", 
		"URL=https://{p_URL}/web/ca/basketsummary/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/ca/basketsummary/", 
		"Snapshot=t396.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UK-15-ClearBasket", LR_AUTO);
	
	lr_think_time(1);

	lr_start_transaction("UK-16-ClkLogout");
	
	web_url("logout.html", 
		"URL=https://{p_URL}/web/logout.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("web", 
		"URL=https://{p_URL}/web?locale=uk&unique=1453930497500-3350773362913288068", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/logout.html", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UK-16-ClkLogout",LR_AUTO);

	return 0;
}
