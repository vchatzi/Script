PredectiveSearch()
{
	lr_think_time(1);
	
	web_reg_save_param("c_params",
	                  "LB=/web/c/",
	                  //"RB=/\">",
	                  "RB=sra=p",
	                  "ORD=ALL",
	                  "NOTFOUND=Warning",
	               	  LAST);
	
	web_set_max_retries ("10");
	
	lr_start_transaction("AU-04-PredictiveSearch");
	
	web_reg_find("Search=All",
		"Text=?sra\=p",
		LAST);
	
	web_url("catSearch", 
		"URL=https://{p_URL}/predictivesearch/catSearch?searchTerm={p_searchParam}&locale=au&advancedPredictiveSearchEnabled=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("AU-04-PredictiveSearch",LR_AUTO);
	
	ccount = atoi(lr_eval_string("{c_params_count}"));
	
	if (ccount>0)
	{
		lr_save_string(lr_paramarr_random("c_params"),"srchVal");
	}
	else{
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO); 
	}
	
	return 0;
}
