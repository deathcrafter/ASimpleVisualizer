[DeviceIdPopBox]
Meter=Shape
X=(70*[#Scale])
Y=(190*[#Scale])
Shape=Rectangle 0,0,(350*[#Scale]),(335*[#Scale]),(10*[#Scale]) | StrokeWidth (3*[#Scale]) | Fill Color 16161a
Hidden=1
Group=DeviceIDInitiation

[DeviceIdPopTitle]
Meter=String
X=(245*[#Scale])
Y=(20*[#Scale])r
StringAlign=CenterCenter
Text=DeviceID
FontSize=(15*[#Scale])
FontFace=Segoe UI
FontColor=94a1b2
Hidden=1
Group=DeviceIDInitiation
AntiAlias=1

[DeviceIDPopInputBckGrnd]
Meter=Shape
X=(95*[#Scale])
Y=R
Shape=Rectangle 0,0,(300*[#Scale]), (25*[#Scale]), (5*[#Scale]) | StrokeWidth (2*[#Scale]) | Stroke Color 72757e | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure DeviceIDPopInputText "ExecuteBatch 1"][!Redraw]
Hidden=1
Group=DeviceIDInitiation


[DeviceIdPopString]
Meter=String
X=(245*[#Scale])
Y=(12*[#Scale])r
Text=[#ID]
W=(290*[#Scale])
ClipString=1
FontSize=(9*[#Scale])
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
H=([DeviceIDPopInputBckGrnd:H]-5*[#Scale])
W=([DeviceIDPopInputBckGrnd:W]-5*[#Scale])
X=([DeviceIDPopInputBckGrnd:X]+2*[#Scale])
Y=([DeviceIDPopInputBckGrnd:Y]+2*[#Scale])
DefaultValue=[#ID]
SolidColor=16161a
FontFace=Segoe UI
FontSize=(9*[#Scale])
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables ID "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[DeviceIdNameTitle]
Meter=String
X=(245*[#Scale])
Y=(300*[#Scale])
StringAlign=CenterCenter
Text=Device Name
FontSize=(15*[#Scale])
FontFace=Segoe UI
FontColor=94a1b2
Hidden=1
Group=DeviceIDInitiation
AntiAlias=1

[DeviceIDNameInputBckGrnd]
Meter=Shape
X=(95*[#Scale])
Y=R
Shape=Rectangle 0,0,(300*[#Scale]), (25*[#Scale]), (5*[#Scale]) | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure DeviceIDNameInputText "ExecuteBatch 1"][!Redraw]
Hidden=1
Group=DeviceIDInitiation


[DeviceIdNameString]
Meter=String
X=(245*[#Scale])
Y=(12*[#Scale])r
Text=[#DeviceName]
W=(300*[#Scale])
ClipString=1
FontSize=(9*[#Scale])
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
X=(245*[#Scale])
Y=(30*[#Scale])r
W=(300*[#Scale])
H=(110*[#Scale])
ClipString=1
FontSize=(10*[#Scale])
FontFace=Segoe UI
FontColor=fffffe
FontWeight=(500*[#Scale])
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
H=([DeviceIDNameInputBckGrnd:H]-5*[#Scale])
W=([DeviceIDNameInputBckGrnd:W]-5*[#Scale])
X=([DeviceIDNameInputBckGrnd:X]+2*[#Scale])
Y=([DeviceIDNameInputBckGrnd:Y]+2*[#Scale])
DefaultValue=[#DeviceName]
SolidColor=16161a
FontFace=Segoe UI
FontSize=(9*[#Scale])
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables DeviceName "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[DeviceIDGetButton]
Meter=Shape
X=(95*[#Scale])
Y=(5*[#Scale])R
Shape=Rectangle 0,0,(60*[#Scale]),(30*[#Scale]),(3*[#Scale]) | StrokeWidth (1.5*[#Scale]) | Extend ColorA
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
X=(30*[#Scale])r
Y=(13*[#Scale])r
FontSize=(11*[#Scale])
FontFace=Segoe UI
FontWeight=500
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=DeviceIDInitiation
Hidden=1

[DeviceIDDoneButton]
Meter=Shape
X=(340*[#Scale])
Y=(-13*[#Scale])r
Shape=Rectangle 0,0,(60*[#Scale]),(30*[#Scale]),(3*[#Scale]) | StrokeWidth (1.5*[#Scale]) | Extend ColorA
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
X=(30*[#Scale])r
Y=(13*[#Scale])r
FontSize=(11*[#Scale])
FontFace=Segoe UI
FontWeight=500
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=DeviceIDInitiation
Hidden=1