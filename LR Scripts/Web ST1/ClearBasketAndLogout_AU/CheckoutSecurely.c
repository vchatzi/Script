CheckoutSecurely()
{
	lr_think_time(1);
	
	web_set_max_retries ("10");
	
	lr_start_transaction("AU-11-CheckoutSecurely");

	web_custom_request("execute_2", 
		"URL=https://{p_URL}/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/ca/basketsummary/", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context><conversationId>5301</conversationId></context></header><body><call component=\"ServerSideStateChecker\" method=\"sessionOk\" id=\"1\">\n<params><param><str>focus</str></param></params><refs></refs></call></body></envelope>", 
		LAST);

	
	web_set_sockets_option("SSL_VERSION", "TLS");
	
	web_reg_save_param("cid",
	                    "LB=?cid=",
	                    "RB=Vary",
	                    "ORD=1",
	                    "search=Headers",
						"NOTFOUND=Warning",	                     
	                    LAST);
	
	
	web_reg_save_param("c_ViewState",
	                   "LB=id=\"javax.faces.ViewState\" value=\"",
	                   "RB=\"",
	                   "ORD=1",
	                   "NOTFOUND=Warning",
	                  	LAST);
	
	web_reg_save_param("c_callradio",
	                   "LB=onclick=\"callRadioSelect(",
	                   "RB=)\">",
	                   "ORD=1",
	                   "NOTFOUND=WARNING",
	                  	LAST);
	
	web_reg_save_param("c_delcolform",
	                  	"LB={'deliveryCollectionForm:",
	                  	"RB=':",
	                  	"ORD=1",
	                  	"NOTFOUND=WARNING",
	              		LAST);
	
	web_reg_save_param("c_perftext", //j_id1325
	                  "LB=<p>This order is using",
	                  "RB=</p>",
	                  "ORD=1",
	                  "NOTFOUND=WARNING",
	                  LAST);
	
	web_reg_save_param("c_logtext", //j_id1325
	                  "LB=<span class=\"progressNumber pageTitle\">1</span><span class=\"progressActive progressText\">",
	                  "RB=</span></div>",
	                  "ORD=1",
	                  "NOTFOUND=WARNING",
	                  LAST);
	
	web_custom_request("basketsummary_2", 
		"URL=https://{p_URL}/web/ca/basketsummary/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/ca/basketsummary/", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		"Body={Body}",
		LAST);
	
	lr_end_transaction("AU-11-CheckoutSecurely",LR_AUTO);
	lr_think_time(1);
	
	return 0;
}