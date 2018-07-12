BrowseByProductcategory()
{	
    char * brVal;
	lr_think_time(1);
	
	web_reg_find("Search=All",
		"SaveCount=",
		"Text=Matches",
		LAST);
	
	web_reg_save_param_regexp(
    	"ParamName=c_val",
    	"RegExp=<a href=\"\/web\/p\/(.+?)\"",
    	"Ordinal=ALL",
    	SEARCH_FILTERS,
    	"IgnoreRedirections=Yes",
		"NOTFOUND=WARNING",     
    	LAST ); 

	web_set_max_retries ("10");
	
	lr_start_transaction("UK-05-BrowseByProductCategory");
	web_url("2-Way Radio Rechargeable Batteries", 
		"URL=https://{p_URL}/web/c/{srchVal}/",
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/c/batteries/rechargeable-batteries/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);
	   lr_end_transaction("UK-05-BrowseByProductCategory", LR_AUTO);
	   
	pcount = atoi(lr_eval_string("{c_val_count}"));
	
	if (pcount>0)
	{
		brVal =  lr_paramarr_random("c_val");
	
		lr_save_string(brVal,"brVal");		
	}
	
	else{
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO); 
	}
	
	return 0;
}
