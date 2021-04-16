[DeviceIdPopBox]
Meter=Shape
X=70
Y=200
Shape=Rectangle 0,0,350,300,10 | StrokeWidth 3 | Fill Color 16161a
Hidden=1
Group=DeviceIDInitiation

[DeviceIdPopTitle]
Meter=String
X=245
Y=20r
StringAlign=CenterCenter
Text=DeviceID
FontSize=15
FontFace=Segoe UI
FontColor=94a1b2
Hidden=1
Group=DeviceIDInitiation
AntiAlias=1

[DeviceIDPopInputBckGrnd]
Meter=Shape
X=95
Y=R
Shape=Rectangle 0,0,300, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure DeviceIDPopInputText "ExecuteBatch 1"][!Redraw]
Hidden=1
Group=DeviceIDInitiation


[DeviceIdPopString]
Meter=String
X=245
Y=11r
Text=[#ID]
W=290
ClipString=1
FontSize=9
FontFace=Segoe UI
FontColor=fffffe
FontWeight=500
StringALign=CenterCenter
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=DeviceIDInitiation


[DeviceIDPopInputText]
Measure=Plugin
Plugin=InputText
H=([DeviceIDPopInputBckGrnd:H]-5)
W=([DeviceIDPopInputBckGrnd:W]-5)
X=([DeviceIDPopInputBckGrnd:X]+2)
Y=([DeviceIDPopInputBckGrnd:Y]+2)
DefaultValue=[#ID]
SolidColor=16161a
FontFace=Segoe UI
FontSize=9
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables ID "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[DeviceIdNameTitle]
Meter=String
X=245
Y=20R
StringAlign=CenterCenter
Text=Device Name
FontSize=15
FontFace=Segoe UI
FontColor=94a1b2
Hidden=1
Group=DeviceIDInitiation
AntiAlias=1

[DeviceIDNameInputBckGrnd]
Meter=Shape
X=95
Y=R
Shape=Rectangle 0,0,300, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure DeviceIDNameInputText "ExecuteBatch 1"][!Redraw]
Hidden=1
Group=DeviceIDInitiation


[DeviceIdNameString]
Meter=String
X=245
Y=11r
Text=[#DeviceName]
W=300
ClipString=1
FontSize=9
FontFace=Segoe UI
FontColor=fffffe
FontWeight=500
StringALign=CenterCenter
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=DeviceIDInitiation

[DeviceNameNote]
Meter=String
Text=-Note-#CRLF#    If you leave Device Name blank it will default to None but audio will be recieved from provided Device ID. If you are using AudioAnalyzer then you must set it's Source to DevID to use a specific device.
X=245
Y=30r
W=300
H=80
ClipString=1
FontSize=9
FontFace=Segoe UI
FontColor=fffffe
FontWeight=500
StringALign=Center
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=DeviceIDInitiation
InlinePattern=-Note-
InlineSetting=GradientColor | 180 | DC501C;0.0 | E91C32;1.0

[DeviceIDNameInputText]
Measure=Plugin
Plugin=InputText
H=([DeviceIDNameInputBckGrnd:H]-5)
W=([DeviceIDNameInputBckGrnd:W]-5)
X=([DeviceIDNameInputBckGrnd:X]+2)
Y=([DeviceIDNameInputBckGrnd:Y]+2)
DefaultValue=[#DeviceName]
SolidColor=16161a
FontFace=Segoe UI
FontSize=9
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables DeviceName "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[DeviceIDGetButton]
Meter=Shape
X=95
Y=10R
Shape=Rectangle 0,0,60,30,3 | StrokeWidth 1.5 | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Group=DeviceIDInitiation
LeftMouseUpAction=[powershell.exe -NoExit #@#DeviceID\\DeviceID.ps1]
Hidden=1

[DeviceIDGetString]
Meter=String
Text=GetIDs
X=30r
Y=13r
FontSize=11
FontFace=Segoe UI
FontWeight=500
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=DeviceIDInitiation
Hidden=1

[DeviceIDDoneButton]
Meter=Shape
X=340
Y=-13r
Shape=Rectangle 0,0,60,30,3 | StrokeWidth 1.5 | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Group=DeviceIDInitiation
LeftMouseUpAction=[!HideMeterGroup DeviceIdInitiation][!Redraw]
Hidden=1

[DeviceIDDoneString]
Meter=String
Text=Done
X=30r
Y=13r
FontSize=11
FontFace=Segoe UI
FontWeight=500
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=DeviceIDInitiation
Hidden=1