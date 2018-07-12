HierarchicalSearch()
{
	char * srchVal;
    char * TN_Page;
	lr_think_time(1);
	
	
	web_reg_save_param_regexp(
    	"ParamName=TN_Page",
    	"RegExp=:\/\/st1-uk.rs-online.com\/web\/c\/(.+?)\/(.+?)\/(.+?)\/\" title=\"",
    	"Ordinal=ALL",
    	"Group=3",
    	SEARCH_FILTERS,
    	"IgnoreRedirections=Yes",
		"NOTFOUND=WARNING",     
    	LAST );
	
	
	web_set_max_retries ("10");
	lr_save_string(lr_eval_string("{p_section}"),"category_1");
	lr_save_string(lr_eval_string("{p_subsection}"),"category_2");
	
	lr_start_transaction("UK-04-HierarchySearch");
	
	web_reg_find("Search=All",
		"Text=\"page_type\":\"l2\"",
		LAST);
	
	web_url("rechargeable-batteries", 
		"URL=https://{p_URL}/web/c/{category_1}/{category_2}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URLSt2}/web/home.html", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UK-04-HierarchySearch", LR_AUTO);	

	pcount = atoi(lr_eval_string("{TN_Page_count}"));
	
	if (pcount>0)
	{
		TN_Page =  lr_paramarr_random("TN_Page");
		lr_save_string(TN_Page,"TN_Page");
		lr_save_string(lr_eval_string("{category_1}/{category_2}/{TN_Page}"),"srchVal");
	}
	else{
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO); 
	}
	return 0;
}
