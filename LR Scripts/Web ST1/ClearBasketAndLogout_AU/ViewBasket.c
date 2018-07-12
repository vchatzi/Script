ViewBasket()
{
	lr_think_time(1);
	
	web_set_max_retries ("10");
		
	lr_start_transaction("AU-10-ViewBasket");	
	
	/*web_reg_save_param("Noofitems",
	 	"LB=<span class=\"item-badge\">",
	  	"RB=</span>",
		"ORD=1",
	 	"Notfound=warning",
	  	LAST);*/
            
	
	web_reg_save_param("Noofitems",
	 	"LB=id=\"js-basketQty\">",
	  	"RB=</div>",
		"ORD=1",
	 	"Notfound=warning",
	  	LAST);
            
    web_reg_save_param("pollid","LB=A4J.AJAX.Poll('_viewRoot','",
	   	"RB=',{'pollId'",
		"ORD=1",
	   	"Notfound=warning",
	   	LAST);
	
    web_reg_save_param("viewstatepoll",
	    "LB=<input type=\"hidden\" name=\"javax.faces.ViewState\" id=\"javax.faces.ViewState\" value=\"",
	    "RB=\"",
	    "ORD=1",
	    "NOTFOUND=Warning",
	    LAST);
	
	web_reg_find("Search=All",
		"SaveCount=",
		"Text=\"page_type\":\"basket\"",
		LAST);
	
	web_custom_request("28 £547.15", 
        "URL=https://{p_URL}/web/ca/basketsummary/", 
        "Method=GET", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=http://{p_URL}/web/p/{ItemSelection_Corr}", 
        "Snapshot=t177.inf", 
        "Mode=HTTP", 
        LAST);
        
        
        if(strlen(lr_eval_string("{Noofitems}"))<=0)
        {
        
            do
        {
     web_reg_save_param("Noofitems2","LB=<span class=\"item-badge\">","RB=</span>","ORD=1","Notfound=warning",LAST);
     
     web_custom_request("payment_2",
        "URL=https://{p_URL}/web/ca/basketsummary", 
        "Method=POST", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=http://{p_URL}/web/ca/basketsummary", 
        "Snapshot=t257.inf", 
        "Mode=HTTP", 
        "EncType=application/x-www-form-urlencoded; charset=UTF-8", 
        "Body=AJAXREQUEST=_viewRoot&{pollid}={pollid}&javax.faces.ViewState={viewstatepoll}&{pollid}%3Apoll={pollid}%3Apoll&",
       
        LAST);
        
        
        }
        
        while (strlen(lr_eval_string("{Noofitems2}"))<=0);

        }
        
    
    web_reg_save_param("c_id1",
	                  	"LB=RS Stock No.</span><br /><input type=\"text\" name=\"shoppingBasketForm:",
	                 	"RB=\"",
	                	"ORD=1",
	                	"NOTFOUND=Warning",
	               		LAST);
	                
	web_reg_save_param("c_id2",
	                  "LB=Qty</span><br /><input type=\"text\" name=\"shoppingBasketForm:",
	                  "RB=\"",
	                  "ORD=1",
	                  "NOTFOUND=Warning",
	                  LAST);
	              
	                	                
    web_reg_save_param("c_value",
	                  "LB=<span class=\"textTitle\">",
	                  "RB=</span>",
	                  "ORD=ALL",
	                  "NOTFOUND=Warning",
	                  LAST);

   web_reg_save_param("c_qty",
                       "LB=value=\"",
                       "RB=\" class=\"inputText costColumn floatLeft",
                       "ORD=ALL",
                       "NOTFOUND=Warning",
                       LAST);

	                
    web_reg_save_param("c_viewstate",
                       	"LB=id=\"javax.faces.ViewState\" value=\"",
                       	"RB=\"",
                      	"ORD=1",
                      	"NOTFOUND=Warning",
                      	LAST);

	
	web_reg_save_param("c_mail",
      					"LB=LoggedInUserSendToColleagueWidgetAction_mailTo\" value=\"",
     					"RB=\"",
    					"ORD=1",
    					"NOTFOUND=Warning",
    					LAST);
    
    web_reg_save_param("Finalbasketformid",
                       "LB=<a href=\"#\" onclick=\"if(typeof jsfcljs == 'function'){jsfcljs(document.getElementById('shoppingBasketForm'),{'shoppingBasketForm:",
                       "RB='",
                       "ORD=1",
                       "NOTFOUND=Warning",
                       LAST);
	

    web_custom_request("mybasket",
        "URL=https://{p_URL}/web/ca/basketsummary/", 
        "Method=GET", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=http://{p_URL}/web/p/{ItemSelection_Corr}", 
        "Snapshot=t177.inf", 
        "Mode=HTTP", 
        LAST);
        
	
	lr_end_transaction("AU-10-ViewBasket", LR_AUTO);
	
	
	vcount = atoi(lr_eval_string("{c_value_count}"));
	
	if (vcount>0)
	{
		
	lr_save_string(lr_eval_string("shoppingBasketForm=shoppingBasketForm&shoppingBasketForm%3AquickStockNo_0=&shoppingBasketForm%3AquickQty_0=&shoppingBasketForm%3AquickStockNo_1=&shoppingBasketForm%3AquickQty_1=&shoppingBasketForm%3AquickStockNo_2=&shoppingBasketForm%3AquickQty_2=&shoppingBasketForm%3AquickStockNo_3=&shoppingBasketForm%3AquickQty_3=&shoppingBasketForm%3AquickStockNo_4=&shoppingBasketForm%3AquickQty_4=&shoppingBasketForm%3AquickStockNo_5=&shoppingBasketForm%3AquickQty_5=&shoppingBasketForm%3AquickStockNo_6=&shoppingBasketForm%3AquickQty_6=&shoppingBasketForm%3AquickStockNo_7=&shoppingBasketForm%3AquickQty_7=&shoppingBasketForm%3AquickStockNo_8=&shoppingBasketForm%3AquickQty_8=&shoppingBasketForm%3AquickStockNo_9=&shoppingBasketForm%3AquickQty_9=&shoppingBasketForm%3Aj_id3033=&shoppingBasketForm%3Aj_id3039=&shoppingBasketForm%3AQuickOrderWidgetAction_quickOrderTextBox_decorate%3AQuickOrderWidgetAction_listItems=Paste+or+type+your+list+here+and+click+%27Add%27."),"body1");
			
	lr_save_string(lr_eval_string("deliveryOptionCode=5&shoppingBasketForm%3APromoCodeWidgetAction_promotionCode=&shoppingBasketForm%3ApromoCodeTermsAndConditionModalLayerOpenedState=&shoppingBasketForm%3AsendToColleagueWidgetPanelOpenedState=&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_mailTo_decorate%3ALoggedInUserSendToColleagueWidgetAction_mailTo={c_mail}&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_subject_decorate%3ALoggedInUserSendToColleagueWidgetAction_subject=Copy+of+order+from+RS+Online&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_message_decorate%3ALoggedInUserSendToColleagueWidgetAction_message=&shoppingBasketForm%3AsendToColleagueSuccessWidgetPanelOpenedState=&javax.faces.ViewState={c_viewstate}&shoppingBasketForm%3A{Finalbasketformid}=shoppingBasketForm%3A{Finalbasketformid}"),"body2"); //PQR751.ABC751%40abc.com j_id2501
	}
	
	else{
		
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO); 
	}

	for (k=0; k<lr_paramarr_len("c_value"); k++) {
    lr_save_string(lr_paramarr_idx("c_value", k+1), "value");
    lr_save_string(lr_paramarr_idx("c_qty", k+1), "qty");
    
    lr_save_int(k, "ItemIndex");
    
    
   	lr_save_string(lr_eval_string("shoppingBasketForm%3Aj_id3131%3A{ItemIndex}%3Aj_id3178={value}&shoppingBasketForm%3Aj_id3131%3A{ItemIndex}%3Aj_id3258={qty}&"),"temp");
}
    
	lr_save_string(lr_eval_string("{body1}&{temp}{body2}"), "Body");

	return 0;
}