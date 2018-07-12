HomePage()
{
    web_set_max_html_param_len("1024");
	web_set_max_retries ("10");
	web_set_sockets_option("SSL_VERSION", "TLS");
	lr_start_transaction("AU-01-HomePage");
	
	web_reg_find("Search=All",
		"Text= RS Australia",
		LAST);

	web_url("home.html", 
		"URL=https://{p_URL}/web/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("miniBasketRunningTotal.html", 
		"URL=https://{p_URL}/web/miniBasketRunningTotal.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
	
	web_set_sockets_option("SSL_VERSION", "TLS");
	
	lr_end_transaction("AU-01-HomePage",LR_AUTO);
	return 0;
}