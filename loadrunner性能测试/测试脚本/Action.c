Action()
{
	lr_rendezvous("同时登陆");
	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(10);
	lr_start_transaction("登陆事务");
	web_submit_form("login.pl", 
		"Snapshot=t18.inf", 
		ITEMDATA, 
		"Name=username", "Value=muyh3", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=login.x", "Value=71", ENDITEM, 
		"Name=login.y", "Value=11", ENDITEM, 
		LAST);
	lr_end_transaction("登陆事务", LR_AUTO);



	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t19.inf", 
		LAST);



	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t25.inf", 
		LAST);

	return 0;
}