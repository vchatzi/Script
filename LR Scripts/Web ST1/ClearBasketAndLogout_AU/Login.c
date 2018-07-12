Login()
{
	
	lr_think_time(1);
	
	web_set_max_retries ("10");
	
	lr_start_transaction("AU-02-ClkLoginLink");
	
	web_reg_find("Search=All",
		"Text=title=\"Log In\"",
		LAST);
	
	web_url("authHome.html",
		"URL=https://{p_URL}/web/authHome.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	web_url("miniBasketRunningTotal.html_2", 
		"URL=https://{p_URL}/web/miniBasketRunningTotal.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_URL}/web/authHome.html", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("AU-02-ClkLoginLink", LR_AUTO);

	lr_think_time(1);
	
	web_set_max_retries ("10");
	
	lr_start_transaction("AU-03-Login");
	
	web_submit_data("j_security_check", 
		"Action=https://{p_URL}/web/j_security_check", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://{p_URL}/web/authHome.html", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={p_userId}", ENDITEM, 
		"Name=j_password", "Value=password", ENDITEM, 
		"Name=loginBtn", "Value=Log in", ENDITEM, 
		"Name=j_username", "Value=AU_{p_userId}", ENDITEM, 
		"Name=prefix", "Value=AU_", ENDITEM, 
		LAST);

	web_reg_find("Search=All",
		"SaveCount=",
		"Text=Welcome",
		LAST);

	web_url("home.html_2", 
		"URL=https://{p_URL}/web/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);


	web_url("miniBasketRunningTotal.html_3", 
		"URL=https://{p_URL}/web/miniBasketRunningTotal.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AU-03-Login",LR_AUTO);
	
	web_set_sockets_option("SSL_VERSION", "TLS1.1");
	
	return 0;
}
