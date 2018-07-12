Action()
{

	web_url("home.html", 
		"URL=http://st2-uk.rs-online.com/web/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_add_cookie("mbox=session#1453913707213-662076#1453915568|PC#1453913707213-662076.26_11#1455123308; DOMAIN=st2-uk.rs-online.com");

	web_url("miniBasketRunningTotal.html", 
		"URL=http://st2-uk.rs-online.com/web/miniBasketRunningTotal.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/home.html", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	/* Clk Login */

	web_add_cookie("__utma=223526617.1011134675.1453913708.1453913708.1453913708.1; DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmb=223526617.1.10.1453913708; DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmc=223526617; DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmz=223526617.1453913708.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmt=1; DOMAIN=st2-uk.rs-online.com");

	web_url("authHome.html", 
		"URL=https://st2-uk.rs-online.com/web/authHome.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/home.html", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	web_url("miniBasketRunningTotal.html_2", 
		"URL=https://st2-uk.rs-online.com/web/miniBasketRunningTotal.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/authHome.html", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	/* Clk Login */

	web_add_cookie("rememberMe=N; DOMAIN=st2-uk.rs-online.com");

	web_submit_data("j_security_check", 
		"Action=https://st2-uk.rs-online.com/web/j_security_check", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/authHome.html", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=perf021", ENDITEM, 
		"Name=j_password", "Value=password", ENDITEM, 
		"Name=loginBtn", "Value=Log in", ENDITEM, 
		"Name=j_username", "Value=UK_perf021", ENDITEM, 
		"Name=prefix", "Value=UK_", ENDITEM, 
		LAST);

	web_url("home.html_2", 
		"URL=http://st2-uk.rs-online.com/web/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("mbox=session#1453913707213-662076#1453915643|PC#1453913707213-662076.26_11#1455123383; DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmb=223526617.2.10.1453913708; DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmv=223526617.|1=Customer_Group=4=1^2=User_Type=WEB=1^3=Job_Role=14=1^4=Job_Technology=0=1; DOMAIN=st2-uk.rs-online.com");

	web_url("miniBasketRunningTotal.html_3", 
		"URL=http://st2-uk.rs-online.com/web/miniBasketRunningTotal.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/home.html", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	/* Search With keyword */

	lr_think_time(27);

	web_url("catSearch", 
		"URL=http://st2-uk.rs-online.com/predictivesearch/catSearch?searchTerm=scr&locale=uk&advancedPredictiveSearchEnabled=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/home.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("socket-screws", 
		"URL=http://st2-uk.rs-online.com/web/c/fasteners-fixings/screws-bolts/socket-screws/?sra=p&r=t", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/home.html", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("mbox=session#1453913707213-662076#1453915684|PC#1453913707213-662076.26_11#1455123424|disable#browser%20timeout#1453917439; DOMAIN=st2-uk.rs-online.com");

	web_url("Brand", 
		"URL=http://st2-uk.rs-online.com/web/c/fasteners-fixings/screws-bolts/socket-screws/?sra=p&r=t", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/home.html", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("mbox=session#1453913707213-662076#1453915752|PC#1453913707213-662076.26_11#1455123492|disable#browser%20timeout#1453917439; DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmb=223526617.4.9.1453913924767; DOMAIN=st2-uk.rs-online.com");

	/* Clk on LL Items */

	lr_think_time(25);

	web_url("Hex Socket Cap Stainless Steel Plain Socket Screw, M4 x 12mm", 
		"URL=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/c/fasteners-fixings/screws-bolts/socket-screws/?sra=p&r=t", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	/* Check Stock Levels */

	web_add_cookie("mbox=session#1453913707213-662076#1453915788|PC#1453913707213-662076.26_11#1455123528|disable#browser%20timeout#1453917439; DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmb=223526617.5.9.1453913924767; DOMAIN=st2-uk.rs-online.com");

	lr_think_time(18);

	web_submit_data("0281035", 
		"Action=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=j_id3061", ENDITEM, 
		"Name=addToCartForm_115597", "Value=addToCartForm_115597", ENDITEM, 
		"Name=addToCartForm_115597:qtyWeb", "Value=1", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id3", ENDITEM, 
		"Name=addToCartForm_115597:rtqLinkTop", "Value=addToCartForm_115597:rtqLinkTop", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("0281035_2", 
		"Action=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=rtqCheckerForm", "Value=rtqCheckerForm", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id3", ENDITEM, 
		"Name=rtqCheckerForm:rtqCheckQty", "Value=1", ENDITEM, 
		"Name=rtqCheckerForm:j_id3142", "Value=rtqCheckerForm:j_id3142", ENDITEM, 
		"Name=ajaxSingle", "Value=rtqCheckerForm:rtqCheckQty", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);

	/* Clk on Check */

	web_submit_data("0281035_3", 
		"Action=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=rtqCheckerForm", "Value=rtqCheckerForm", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id3", ENDITEM, 
		"Name=rtqCheckerForm:rtqCheckQty", "Value=2", ENDITEM, 
		"Name=rtqCheckerForm:j_id3142", "Value=rtqCheckerForm:j_id3142", ENDITEM, 
		"Name=ajaxSingle", "Value=rtqCheckerForm:rtqCheckQty", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("0281035_4", 
		"Action=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=rtqCheckerForm", "Value=rtqCheckerForm", ENDITEM, 
		"Name=rtqCheckerForm:rtqCheckQty", "Value=2", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id3", ENDITEM, 
		"Name=rtqCheckerForm:rtqCheckButton", "Value=rtqCheckerForm:rtqCheckButton", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);

	/* Clk Add to Basket */

	web_submit_data("0281035_5", 
		"Action=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=j_id3061", ENDITEM, 
		"Name=addToCartForm_115597", "Value=addToCartForm_115597", ENDITEM, 
		"Name=addToCartForm_115597:qtyWeb", "Value=1", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id3", ENDITEM, 
		"Name=addToCartForm_115597:addToOrder", "Value=addToCartForm_115597:addToOrder", ENDITEM, 
		"Name=AJAX:EVENTS_COUNT", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("0281035_6", 
		"Action=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=j_id134", "Value=j_id134", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id3", ENDITEM, 
		"Name=j_id134:poll", "Value=j_id134:poll", ENDITEM, 
		LAST);

	/* View Basket */

	web_url("1 £8.82", 
		"URL=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/p/socket-screws/0281035/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("mbox=session#1453913707213-662076#1453915856|PC#1453913707213-662076.26_11#1455123596|disable#browser%20timeout#1453917439; DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmb=223526617.6.9.1453913924767; DOMAIN=st2-uk.rs-online.com");

	web_add_cookie("__utmv=223526617.|2=User_Type=WEB=1^3=Job_Role=14=1^4=Job_Technology=0=1; DOMAIN=st2-uk.rs-online.com");

	web_custom_request("execute", 
		"URL=http://st2-uk.rs-online.com/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context></context></header><body><call component=\"ServerSideStateChecker\" method=\"sessionOk\" id=\"0\">\n<params><param><str>ready</str></param></params><refs></refs></call></body></envelope>", 
		LAST);

	web_custom_request("basketsummary", 
		"URL=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=AJAXREQUEST=_viewRoot&shoppingBasketForm=shoppingBasketForm&=ManualEntry&=DELIVERY&shoppingBasketForm%3AquickStockNo_0=&shoppingBasketForm%3AquickQty_0=&shoppingBasketForm%3AquickStockNo_1=&shoppingBasketForm%3AquickQty_1=&shoppingBasketForm%3AquickStockNo_2=&shoppingBasketForm%3AquickQty_2=&shoppingBasketForm%3AquickStockNo_3=&shoppingBasketForm%3AquickQty_3=&shoppingBasketForm%3AquickStockNo_4=&shoppingBasketForm%3AquickQty_4=&shoppingBasketForm%3AquickStockNo_5=&"
		"shoppingBasketForm%3AquickQty_5=&shoppingBasketForm%3AquickStockNo_6=&shoppingBasketForm%3AquickQty_6=&shoppingBasketForm%3AquickStockNo_7=&shoppingBasketForm%3AquickQty_7=&shoppingBasketForm%3AquickStockNo_8=&shoppingBasketForm%3AquickQty_8=&shoppingBasketForm%3AquickStockNo_9=&shoppingBasketForm%3AquickQty_9=&shoppingBasketForm%3Aj_id3033=&shoppingBasketForm%3Aj_id3039=&shoppingBasketForm%3AQuickOrderWidgetAction_quickOrderTextBox_decorate%3AQuickOrderWidgetAction_listItems="
		"Paste%20or%20type%20your%20list%20here%20and%20click%20'Add'.&shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3178=281-035&shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3258=1&shoppingBasketForm%3APromoCodeWidgetAction_promotionCode=&shoppingBasketForm%3ApromoCodeTermsAndConditionModalLayerOpenedState=&shoppingBasketForm%3AsendToColleagueWidgetPanelOpenedState=&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_mailTo_decorate%3ALoggedInUserSendToColleagueWidgetAction_mailTo=PQR021.ABC021%40abc.com&"
		"shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_subject_decorate%3ALoggedInUserSendToColleagueWidgetAction_subject=Copy%20of%20order%20from%20RS%20Online&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_message_decorate%3ALoggedInUserSendToColleagueWidgetAction_message=&shoppingBasketForm%3AsendToColleagueSuccessWidgetPanelOpenedState=&javax.faces.ViewState=j_id4&shoppingBasketForm%3AWebBasketLineWidgetActionCARTPOLLId="
		"shoppingBasketForm%3AWebBasketLineWidgetActionCARTPOLLId&", 
		LAST);

	/* Manuallly Enter Product */

	lr_think_time(8);

	web_custom_request("execute_2", 
		"URL=http://st2-uk.rs-online.com/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context><conversationId>71</conversationId></context></header><body><call component=\"ServerSideStateChecker\" method=\"sessionOk\" id=\"1\">\n<params><param><str>focus</str></param></params><refs></refs></call></body></envelope>", 
		LAST);

	/* Clk Add */

	lr_think_time(20);

	web_custom_request("execute_3", 
		"URL=http://st2-uk.rs-online.com/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context><conversationId>71</conversationId></context></header><body><call component=\"ServerSideStateChecker\" method=\"sessionOk\" id=\"2\">\n<params><param><str>focus</str></param></params><refs></refs></call></body></envelope>", 
		LAST);

	web_custom_request("basketsummary_2", 
		"URL=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=AJAXREQUEST=shoppingBasketForm%3Aj_id2632&shoppingBasketForm=shoppingBasketForm&=ManualEntry&=DELIVERY&shoppingBasketForm%3AquickStockNo_0=281-035&shoppingBasketForm%3AquickQty_0=1&shoppingBasketForm%3AquickStockNo_1=&shoppingBasketForm%3AquickQty_1=&shoppingBasketForm%3AquickStockNo_2=&shoppingBasketForm%3AquickQty_2=&shoppingBasketForm%3AquickStockNo_3=&shoppingBasketForm%3AquickQty_3=&shoppingBasketForm%3AquickStockNo_4=&shoppingBasketForm%3AquickQty_4=&shoppingBasketForm%3AquickStockNo_5="
		"&shoppingBasketForm%3AquickQty_5=&shoppingBasketForm%3AquickStockNo_6=&shoppingBasketForm%3AquickQty_6=&shoppingBasketForm%3AquickStockNo_7=&shoppingBasketForm%3AquickQty_7=&shoppingBasketForm%3AquickStockNo_8=&shoppingBasketForm%3AquickQty_8=&shoppingBasketForm%3AquickStockNo_9=&shoppingBasketForm%3AquickQty_9=&shoppingBasketForm%3Aj_id3033=&shoppingBasketForm%3Aj_id3039=&shoppingBasketForm%3AQuickOrderWidgetAction_quickOrderTextBox_decorate%3AQuickOrderWidgetAction_listItems="
		"Paste%20or%20type%20your%20list%20here%20and%20click%20'Add'.&shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3178=281-035&shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3258=1&deliveryOptionCode=5&shoppingBasketForm%3APromoCodeWidgetAction_promotionCode=&shoppingBasketForm%3ApromoCodeTermsAndConditionModalLayerOpenedState=&shoppingBasketForm%3AsendToColleagueWidgetPanelOpenedState=&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_mailTo_decorate%3ALoggedInUserSendToColleagueWidgetAction_mailTo="
		"PQR021.ABC021%40abc.com&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_subject_decorate%3ALoggedInUserSendToColleagueWidgetAction_subject=Copy%20of%20order%20from%20RS%20Online&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_message_decorate%3ALoggedInUserSendToColleagueWidgetAction_message=&shoppingBasketForm%3AsendToColleagueSuccessWidgetPanelOpenedState=&javax.faces.ViewState=j_id4&shoppingBasketForm%3Aj_id3069=shoppingBasketForm%3Aj_id3069&", 
		LAST);

	/* UpDate Line items */

	lr_think_time(26);

	web_custom_request("execute_4", 
		"URL=http://st2-uk.rs-online.com/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context><conversationId>71</conversationId></context></header><body><call component=\"ServerSideStateChecker\" method=\"sessionOk\" id=\"3\">\n<params><param><str>focus</str></param></params><refs></refs></call></body></envelope>", 
		LAST);

	web_custom_request("basketsummary_3", 
		"URL=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=AJAXREQUEST=shoppingBasketForm%3Aj_id3099&shoppingBasketForm=shoppingBasketForm&=ManualEntry&=DELIVERY&shoppingBasketForm%3AquickStockNo_0=&shoppingBasketForm%3AquickQty_0=&shoppingBasketForm%3AquickStockNo_1=&shoppingBasketForm%3AquickQty_1=&shoppingBasketForm%3AquickStockNo_2=&shoppingBasketForm%3AquickQty_2=&shoppingBasketForm%3AquickStockNo_3=&shoppingBasketForm%3AquickQty_3=&shoppingBasketForm%3AquickStockNo_4=&shoppingBasketForm%3AquickQty_4=&shoppingBasketForm%3AquickStockNo_5=&"
		"shoppingBasketForm%3AquickQty_5=&shoppingBasketForm%3AquickStockNo_6=&shoppingBasketForm%3AquickQty_6=&shoppingBasketForm%3AquickStockNo_7=&shoppingBasketForm%3AquickQty_7=&shoppingBasketForm%3AquickStockNo_8=&shoppingBasketForm%3AquickQty_8=&shoppingBasketForm%3AquickStockNo_9=&shoppingBasketForm%3AquickQty_9=&shoppingBasketForm%3Aj_id3033=&shoppingBasketForm%3Aj_id3039=&shoppingBasketForm%3AQuickOrderWidgetAction_quickOrderTextBox_decorate%3AQuickOrderWidgetAction_listItems="
		"Paste%20or%20type%20your%20list%20here%20and%20click%20'Add'.&shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3178=0281035&shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3258=3&deliveryOptionCode=5&shoppingBasketForm%3APromoCodeWidgetAction_promotionCode=&shoppingBasketForm%3ApromoCodeTermsAndConditionModalLayerOpenedState=&shoppingBasketForm%3AsendToColleagueWidgetPanelOpenedState=&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_mailTo_decorate%3ALoggedInUserSendToColleagueWidgetAction_mailTo="
		"PQR021.ABC021%40abc.com&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_subject_decorate%3ALoggedInUserSendToColleagueWidgetAction_subject=Copy%20of%20order%20from%20RS%20Online&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_message_decorate%3ALoggedInUserSendToColleagueWidgetAction_message=&shoppingBasketForm%3AsendToColleagueSuccessWidgetPanelOpenedState=&javax.faces.ViewState=j_id4&shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3261="
		"shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3261&", 
		LAST);

	web_submit_data("basketsummary_4", 
		"Action=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=j_id134", "Value=j_id134", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4", ENDITEM, 
		"Name=j_id134:poll", "Value=j_id134:poll", ENDITEM, 
		LAST);

	web_custom_request("basketsummary_5", 
		"URL=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=AJAXREQUEST=_viewRoot&shoppingBasketForm=shoppingBasketForm&=ManualEntry&=DELIVERY&shoppingBasketForm%3AquickStockNo_0=&shoppingBasketForm%3AquickQty_0=&shoppingBasketForm%3AquickStockNo_1=&shoppingBasketForm%3AquickQty_1=&shoppingBasketForm%3AquickStockNo_2=&shoppingBasketForm%3AquickQty_2=&shoppingBasketForm%3AquickStockNo_3=&shoppingBasketForm%3AquickQty_3=&shoppingBasketForm%3AquickStockNo_4=&shoppingBasketForm%3AquickQty_4=&shoppingBasketForm%3AquickStockNo_5=&"
		"shoppingBasketForm%3AquickQty_5=&shoppingBasketForm%3AquickStockNo_6=&shoppingBasketForm%3AquickQty_6=&shoppingBasketForm%3AquickStockNo_7=&shoppingBasketForm%3AquickQty_7=&shoppingBasketForm%3AquickStockNo_8=&shoppingBasketForm%3AquickQty_8=&shoppingBasketForm%3AquickStockNo_9=&shoppingBasketForm%3AquickQty_9=&shoppingBasketForm%3Aj_id3033=&shoppingBasketForm%3Aj_id3039=&shoppingBasketForm%3AQuickOrderWidgetAction_quickOrderTextBox_decorate%3AQuickOrderWidgetAction_listItems="
		"Paste%20or%20type%20your%20list%20here%20and%20click%20'Add'.&shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3178=0281035&shoppingBasketForm%3Aj_id3131%3A0%3Aj_id3258=3&deliveryOptionCode=5&shoppingBasketForm%3APromoCodeWidgetAction_promotionCode=&shoppingBasketForm%3ApromoCodeTermsAndConditionModalLayerOpenedState=&shoppingBasketForm%3AsendToColleagueWidgetPanelOpenedState=&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_mailTo_decorate%3ALoggedInUserSendToColleagueWidgetAction_mailTo="
		"PQR021.ABC021%40abc.com&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_subject_decorate%3ALoggedInUserSendToColleagueWidgetAction_subject=Copy%20of%20order%20from%20RS%20Online&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_message_decorate%3ALoggedInUserSendToColleagueWidgetAction_message=&shoppingBasketForm%3AsendToColleagueSuccessWidgetPanelOpenedState=&javax.faces.ViewState=j_id4&shoppingBasketForm%3AWebBasketLineWidgetActionCARTPOLLId="
		"shoppingBasketForm%3AWebBasketLineWidgetActionCARTPOLLId&", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	/* Clk Checkout Securely */

	web_submit_data("basketsummary_6", 
		"Action=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://st2-uk.rs-online.com/web/ca/basketsummary/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=shoppingBasketForm", "Value=shoppingBasketForm", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_0", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_0", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_1", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_1", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_2", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_2", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_3", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_3", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_4", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_4", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_5", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_5", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_6", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_6", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_7", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_7", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_8", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_8", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickStockNo_9", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:quickQty_9", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:j_id3033", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:j_id3039", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:QuickOrderWidgetAction_quickOrderTextBox_decorate:QuickOrderWidgetAction_listItems", "Value=Paste or type your list here and click 'Add'.", ENDITEM, 
		"Name=shoppingBasketForm:j_id3131:0:j_id3178", "Value=0281035", ENDITEM, 
		"Name=shoppingBasketForm:j_id3131:0:j_id3258", "Value=3", ENDITEM, 
		"Name=deliveryOptionCode", "Value=5", ENDITEM, 
		"Name=shoppingBasketForm:PromoCodeWidgetAction_promotionCode", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:promoCodeTermsAndConditionModalLayerOpenedState", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:sendToColleagueWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:LoggedInUserSendToColleagueWidgetAction_mailTo_decorate:LoggedInUserSendToColleagueWidgetAction_mailTo", "Value=PQR021.ABC021@abc.com", ENDITEM, 
		"Name=shoppingBasketForm:LoggedInUserSendToColleagueWidgetAction_subject_decorate:LoggedInUserSendToColleagueWidgetAction_subject", "Value=Copy of order from RS Online", ENDITEM, 
		"Name=shoppingBasketForm:LoggedInUserSendToColleagueWidgetAction_message_decorate:LoggedInUserSendToColleagueWidgetAction_message", "Value=", ENDITEM, 
		"Name=shoppingBasketForm:sendToColleagueSuccessWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4", ENDITEM, 
		"Name=shoppingBasketForm:j_id2501", "Value=shoppingBasketForm:j_id2501", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	web_custom_request("execute_5", 
		"URL=https://st2-uk.rs-online.com/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/delivery/?cid=86", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context></context></header><body><call component=\"ServerSideStateChecker\" method=\"longRunningConversationOk\" id=\"0\">\n<params><param><number>86</number></param><param><str>ready</str></param></params><refs></refs></call></body></envelope>", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	/* Clk Continue to Payment */

	web_submit_data("delivery", 
		"Action=https://st2-uk.rs-online.com/web/co/delivery/?cid=86", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/delivery/?cid=86", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=deliveryCollectionForm", "Value=deliveryCollectionForm", ENDITEM, 
		"Name=deliveryCollectionForm:FAOContactDetailWidgetAction_forAttentionOfName_decorate:FAOContactDetailWidgetAction_forAttentionOfName", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:DeliveryListAddressWidgetAction_selectedAddressId_decorate:DeliveryListAddressWidgetAction_selectedAddressId", "Value=1", ENDITEM, 
		"Name=softAddAlias", "Value=100003731789", ENDITEM, 
		"Name=deliveryCollectionForm:addAddressModelPanelOpenedState", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:AddDeliveryAddressWidgetAction_companyNameOne_decorate:AddDeliveryAddressWidgetAction_companyNameOne", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:AddDeliveryAddressWidgetAction_companyNameTwo_decorate:AddDeliveryAddressWidgetAction_companyNameTwo", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:AddDeliveryAddressWidgetAction_addressLineOne_decorate:AddDeliveryAddressWidgetAction_addressLineOne", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:AddDeliveryAddressWidgetAction_addressLineTwo_decorate:AddDeliveryAddressWidgetAction_addressLineTwo", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:AddDeliveryAddressWidgetAction_addressLineThree_decorate:AddDeliveryAddressWidgetAction_addressLineThree", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:AddDeliveryAddressWidgetAction_selectedRegion_decorate:AddDeliveryAddressWidgetAction_selectedRegion", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:AddDeliveryAddressWidgetAction_selectedRegion_decorate:selectedRegion", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:AddDeliveryAddressWidgetAction_postCode_decorate:AddDeliveryAddressWidgetAction_postCode", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:editAddressModelPanelOpenedState", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:EditDeliveryAddressWidgetAction_companyNameOne_decorate:EditDeliveryAddressWidgetAction_companyNameOne", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:EditDeliveryAddressWidgetAction_companyNameTwo_decorate:EditDeliveryAddressWidgetAction_companyNameTwo", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:EditDeliveryAddressWidgetAction_addressLineOne_decorate:EditDeliveryAddressWidgetAction_addressLineOne", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:EditDeliveryAddressWidgetAction_addressLineTwo_decorate:EditDeliveryAddressWidgetAction_addressLineTwo", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:EditDeliveryAddressWidgetAction_addressLineThree_decorate:EditDeliveryAddressWidgetAction_addressLineThree", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:EditDeliveryAddressWidgetAction_selectedRegion_decorate:EditDeliveryAddressWidgetAction_selectedRegion", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:EditDeliveryAddressWidgetAction_selectedRegion_decorate:selectedRegion", "Value=", ENDITEM, 
		"Name=deliveryCollectionForm:EditDeliveryAddressWidgetAction_postCode_decorate:EditDeliveryAddressWidgetAction_postCode", "Value=", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id5", ENDITEM, 
		"Name=deliveryCollectionForm:j_id1178", "Value=deliveryCollectionForm:j_id1178", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	/* Clk Add Payment Type */

	web_submit_data("payment", 
		"Action=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=paymentForm", "Value=paymentForm", ENDITEM, 
		"Name=paymentForm:addPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:AddUserPaymentWidgetAction_cardNumber", "Value=", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:j_id526", "Value=", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:j_id527", "Value=", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:j_id528", "Value=", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:j_id529", "Value=", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardName_decorate:AddUserPaymentWidgetAction_cardName", "Value=", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardHolder_decorate:AddUserPaymentWidgetAction_cardHolder", "Value=", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_expiryDate_decorate:AddUserPaymentWidgetAction_expiryDate", "Value=", ENDITEM, 
		"Name=paymentForm:rsAccountAddedSuccessPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:editPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentType", "Value=101", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardNumber_decorate:EditUserPaymentWidgetAction_cardNumber", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardName_decorate:EditUserPaymentWidgetAction_cardName", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardHolder_decorate:EditUserPaymentWidgetAction_cardHolder", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_expiryDate_decorate:EditUserPaymentWidgetAction_expiryDate", "Value=", ENDITEM, 
		"Name=paymentForm:AddInvoiceAddressWidgetAction_invoiceAddressSameAsDelivery", "Value=on", ENDITEM, 
		"Name=paymentForm:PurchaseOrderNumberWidgetAction_purchaseOrderNumber_decorate:PurchaseOrderNumberWidgetAction_purchaseOrderNumber", "Value=", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id6", ENDITEM, 
		"Name=paymentForm:j_id454", "Value=paymentForm:j_id454", ENDITEM, 
		LAST);

	/* Clk Save */

	web_submit_data("payment_2", 
		"Action=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=paymentForm:j_id481", ENDITEM, 
		"Name=paymentForm", "Value=paymentForm", ENDITEM, 
		"Name=paymentForm:addPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:rsAccountAddedSuccessPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:editPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardNumber_decorate:EditUserPaymentWidgetAction_cardNumber", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardName_decorate:EditUserPaymentWidgetAction_cardName", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardHolder_decorate:EditUserPaymentWidgetAction_cardHolder", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_expiryDate_decorate:EditUserPaymentWidgetAction_expiryDate", "Value=", ENDITEM, 
		"Name=paymentForm:AddInvoiceAddressWidgetAction_invoiceAddressSameAsDelivery", "Value=on", ENDITEM, 
		"Name=paymentForm:PurchaseOrderNumberWidgetAction_purchaseOrderNumber_decorate:PurchaseOrderNumberWidgetAction_purchaseOrderNumber", "Value=", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id6", ENDITEM, 
		"Name=paymentType", "Value=101", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:AddUserPaymentWidgetAction_cardNumber", "Value=", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:j_id526", "Value=4004", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:j_id527", "Value=8903", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:j_id528", "Value=0647", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardNumber_decorate:j_id529", "Value=4240", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardName_decorate:AddUserPaymentWidgetAction_cardName", "Value=TesterCard", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_cardHolder_decorate:AddUserPaymentWidgetAction_cardHolder", "Value=PerfTester1", ENDITEM, 
		"Name=paymentForm:AddUserPaymentWidgetAction_expiryDate_decorate:AddUserPaymentWidgetAction_expiryDate", "Value=03/18", ENDITEM, 
		"Name=paymentForm:j_id764", "Value=paymentForm:j_id764", ENDITEM, 
		LAST);

	web_submit_data("payment_3", 
		"Action=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=paymentForm", "Value=paymentForm", ENDITEM, 
		"Name=selectedPaymentRadio", "Value=30373035", ENDITEM, 
		"Name=paymentForm:j_id2671:LoggedInUserSelectPaymentWidgetAction_tempCvvNum_30373035", "Value=", ENDITEM, 
		"Name=paymentForm:addPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:rsAccountAddedSuccessPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:editPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardNumber_decorate:EditUserPaymentWidgetAction_cardNumber", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardName_decorate:EditUserPaymentWidgetAction_cardName", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardHolder_decorate:EditUserPaymentWidgetAction_cardHolder", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_expiryDate_decorate:EditUserPaymentWidgetAction_expiryDate", "Value=", ENDITEM, 
		"Name=paymentForm:AddInvoiceAddressWidgetAction_invoiceAddressSameAsDelivery", "Value=on", ENDITEM, 
		"Name=paymentForm:PurchaseOrderNumberWidgetAction_purchaseOrderNumber_decorate:PurchaseOrderNumberWidgetAction_purchaseOrderNumber", "Value=", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id6", ENDITEM, 
		"Name=param", "Value=30373035", ENDITEM, 
		"Name=paymentForm:j_id384", "Value=paymentForm:j_id384", ENDITEM, 
		LAST);

	web_submit_data("payment_4", 
		"Action=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=AJAXREQUEST", "Value=_viewRoot", ENDITEM, 
		"Name=paymentForm", "Value=paymentForm", ENDITEM, 
		"Name=selectedPaymentRadio", "Value=30373035", ENDITEM, 
		"Name=paymentForm:j_id2671:LoggedInUserSelectPaymentWidgetAction_tempCvvNum_30373035", "Value=123", ENDITEM, 
		"Name=paymentForm:addPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:rsAccountAddedSuccessPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:editPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardNumber_decorate:EditUserPaymentWidgetAction_cardNumber", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardName_decorate:EditUserPaymentWidgetAction_cardName", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardHolder_decorate:EditUserPaymentWidgetAction_cardHolder", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_expiryDate_decorate:EditUserPaymentWidgetAction_expiryDate", "Value=", ENDITEM, 
		"Name=paymentForm:AddInvoiceAddressWidgetAction_invoiceAddressSameAsDelivery", "Value=on", ENDITEM, 
		"Name=paymentForm:PurchaseOrderNumberWidgetAction_purchaseOrderNumber_decorate:PurchaseOrderNumberWidgetAction_purchaseOrderNumber", "Value=", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id6", ENDITEM, 
		"Name=param", "Value=123", ENDITEM, 
		"Name=paymentForm:j_id386", "Value=paymentForm:j_id386", ENDITEM, 
		LAST);

	/* Clk Continue to order Review */

	web_submit_data("payment_5", 
		"Action=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/payment/?cid=86", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=paymentForm", "Value=paymentForm", ENDITEM, 
		"Name=selectedPaymentRadio", "Value=30373035", ENDITEM, 
		"Name=paymentForm:j_id2671:LoggedInUserSelectPaymentWidgetAction_tempCvvNum_30373035", "Value=123", ENDITEM, 
		"Name=paymentForm:addPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:rsAccountAddedSuccessPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:editPaymentWidgetPanelOpenedState", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardNumber_decorate:EditUserPaymentWidgetAction_cardNumber", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardName_decorate:EditUserPaymentWidgetAction_cardName", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_cardHolder_decorate:EditUserPaymentWidgetAction_cardHolder", "Value=", ENDITEM, 
		"Name=paymentForm:EditUserPaymentWidgetAction_expiryDate_decorate:EditUserPaymentWidgetAction_expiryDate", "Value=", ENDITEM, 
		"Name=paymentForm:AddInvoiceAddressWidgetAction_invoiceAddressSameAsDelivery", "Value=on", ENDITEM, 
		"Name=paymentForm:PurchaseOrderNumberWidgetAction_purchaseOrderNumber_decorate:PurchaseOrderNumberWidgetAction_purchaseOrderNumber", "Value=", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id6", ENDITEM, 
		"Name=paymentForm:j_id1496", "Value=paymentForm:j_id1496", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	web_custom_request("execute_6", 
		"URL=https://st2-uk.rs-online.com/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/order_review/?cid=86", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context></context></header><body><call component=\"ServerSideStateChecker\" method=\"longRunningConversationOk\" id=\"0\">\n<params><param><number>86</number></param><param><str>ready</str></param></params><refs></refs></call></body></envelope>", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_custom_request("execute_7", 
		"URL=https://st2-uk.rs-online.com/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/order_review/?cid=86", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context></context></header><body><call component=\"ServerSideStateChecker\" method=\"longRunningConversationOk\" id=\"1\">\n<params><param><number>86</number></param><param><str>focus</str></param></params><refs></refs></call></body></envelope>", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS");

	/* Clk I Agree */

	web_custom_request("execute_8", 
		"URL=https://st2-uk.rs-online.com/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/order_review/?cid=86", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context><conversationId>86</conversationId></context></header><body><call component=\"ServerSideStateChecker\" method=\"longRunningConversationOk\" id=\"2\">\n<params><param><number>86</number></param><param><str>focus</str></param></params><refs></refs></call></body></envelope>", 
		LAST);

	/* Place Order */

	web_submit_data("order_review", 
		"Action=https://st2-uk.rs-online.com/web/co/order_review/?cid=86", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://st2-uk.rs-online.com/web/co/order_review/?cid=86", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=orderReviewForm", "Value=orderReviewForm", ENDITEM, 
		"Name=orderReviewForm:acceptenableDefaultsChkBox", "Value=on", ENDITEM, 
		"Name=orderReviewForm:recieveOrderStatusChkBox", "Value=on", ENDITEM, 
		"Name=orderReviewForm:CheckoutNotificationSettingsWidgetAction_notificationAddress_decorate:CheckoutNotificationSettingsWidgetAction_notificationAddress", "Value=PQR021.ABC021@abc.com", ENDITEM, 
		"Name=orderReviewForm:CheckoutNotificationSettingsWidgetAction_acceptedRsConditions_decorate:CheckoutNotificationSettingsWidgetAction_acceptedRsConditions", "Value=test", ENDITEM, 
		"Name=orderReviewForm:acceptRSConditionsChkBox", "Value=on", ENDITEM, 
		"Name=orderReviewForm:quickViewModalPanelOpenedState", "Value=", ENDITEM, 
		"Name=orderReviewForm:termsConditionsModalPanelOpenedState", "Value=", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id7", ENDITEM, 
		"Name=orderReviewForm:j_id1045", "Value=orderReviewForm:j_id1045", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	/* Clk Logout */

	return 0;
}