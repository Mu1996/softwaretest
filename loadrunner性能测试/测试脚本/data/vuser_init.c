/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 8859
   ------------------------------------------------------------------------------- */

vuser_init()
{

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

	web_submit_form("login.pl", 
		"Snapshot=t18.inf", 
		ITEMDATA, 
		"Name=username", "Value=muyh3", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=login.x", "Value=71", ENDITEM, 
		"Name=login.y", "Value=11", ENDITEM, 
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t19.inf", 
		LAST);

	lr_think_time(9);

	web_submit_form("reservations.pl", 
		"Snapshot=t20.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=05/25/2017", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=05/26/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=46", ENDITEM, 
		"Name=findFlights.y", "Value=8", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t21.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=000;0;05/25/2017", ENDITEM, 
		"Name=reserveFlights.x", "Value=35", ENDITEM, 
		"Name=reserveFlights.y", "Value=9", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t22.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=mu", ENDITEM, 
		"Name=lastName", "Value=yh", ENDITEM, 
		"Name=address1", "Value=hznu", ENDITEM, 
		"Name=address2", "Value=hz", ENDITEM, 
		"Name=pass1", "Value=mu yh", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=56", ENDITEM, 
		"Name=buyFlights.y", "Value=4", ENDITEM, 
		LAST);

	web_image("Home Button", 
		"Alt=Home Button", 
		"Snapshot=t23.inf", 
		LAST);

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t24.inf", 
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t25.inf", 
		LAST);

	return 0;
}