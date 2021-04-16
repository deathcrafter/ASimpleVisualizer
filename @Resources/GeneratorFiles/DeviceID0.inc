[DeviceIdInitiationBack]
Meter=Shape
X=70
Y=220
Shape=Rectangle 0,0,350,200,10 | StrokeWidth 3 | Fill Color 16161a
Hidden=1
Group=Warnings | DeviceIDInitiation

[DeviceIDInitiationString]
Meter = String
X=30r
Y=20r
W=290
H=130
Text = Clicking on install will open up a PowerShell window listing all the audio devices installed to your system. Copy the value to the input field which will appear after clicking the button again.
FontFace=Segoe UI
FontColor=FFFFFF
FontSize=11
Group=Warnings | DeviceIDInitiation
AntiAlias=1
ClipString=1
StringAlign=Left
Hidden=1
FontWeight=500

[DeviceIDInstall]
Meter=Shape
X=215
Y=10R
Shape=Rectangle 0,0,60,30,3 | StrokeWidth 1.5 | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Group=Warnings | DeviceIDInitiation
LeftMouseUpAction=[!CommandMeasure SuperScript "GetAudioDevices()"][!Redraw]
Hidden=1

[DeviceIDInstallString]
Meter=String
Text=Install
X=245
Y=13r
FontSize=11
FontFace=Segoe UI
FontWeight=500
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=Warnings | DeviceIDInitiation
Hidden=1