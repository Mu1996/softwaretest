SystemUtil.CloseDescendentProcesses
SystemUtil.Run "C:\Program Files\HP\QuickTest Professional\samples\flight\app\flight4a.exe"

Dialog("Login_2").WinEdit("Agent Name:").Set DataTable("name", dtLocalSheet) @@ hightlight id_;_525826_;_script infofile_;_ZIP::ssf21.xml_;_
Dialog("Login_2").WinEdit("Password:").SetSecure DataTable("password", dtLocalSheet) @@ hightlight id_;_1180648_;_script infofile_;_ZIP::ssf22.xml_;_
Dialog("Login_2").WinButton("OK").Click @@ hightlight id_;_329260_;_script infofile_;_ZIP::ssf23.xml_;_
If Dialog("Login_2").Dialog("Flight Reservations").Exist(3) Then @@ hightlight id_;_1181246_;_script infofile_;_ZIP::ssf26.xml_;_
Dialog("Login_2").Dialog("Flight Reservations").Static("Agent name must be at least 4 characters long.").Output CheckPoint("Agent name must be at least 4 characters long._2") @@ hightlight id_;_919058_;_script infofile_;_ZIP::ssf26.xml_;_
'Dialog("Login_2").Dialog("Flight Reservations").Static("Agent name must be at least 4 characters long.").Check CheckPoint("Agent name must be at least 4 characters long.") @@ hightlight id_;_919058_;_script infofile_;_ZIP::ssf26.xml_;_
Dialog("Login_2").Dialog("Flight Reservations").WinButton("确定").Click @@ hightlight id_;_1443368_;_script infofile_;_ZIP::ssf28.xml_;_
Dialog("Login_2").WinButton("Cancel").Click @@ hightlight id_;_656946_;_script infofile_;_ZIP::ssf35.xml_;_
Else if Window("Flight Reservation").Exist(3) Then
Window("Flight Reservation").Output CheckPoint("Flight Reservation") @@ hightlight id_;_788140_;_script infofile_;_ZIP::ssf40.xml_;_
	Window("Flight Reservation").Close @@ hightlight id_;_788140_;_script infofile_;_ZIP::ssf40.xml_;_
	End if
End if

actual=DataTable("actual",dtLocalSheet)
expect=DataTable("expect",dtLocalSheet)

If actual <> expect Then
    Reporter.ReportEvent micFail, "登陆功能测试", "预期值为："+expect+"实际值为："+actual
End If


 @@ hightlight id_;_525506_;_script infofile_;_ZIP::ssf42.xml_;_













