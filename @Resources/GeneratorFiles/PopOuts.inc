[FFTWarningTint]
Meter=Shape
MeterStyle=SettingsBackGround
Shape = Rectangle 0,0, 400, 600, 15 | Fill Color 000000cc
Hidden=1
Group=Warnings | FFTWarning | ReflectionWarning | ChannelWarning
LeftMouseUpAction=[!HideMeterGroup Warnings][!Redraw]

[FFTWarning]
Meter=Shape
X=100
Y=300
Shape=Rectangle 0,0,290,110,10 | StrokeWidth 3 | Fill Color 16161a
Hidden=1
Group=Warnings | FFTWarning

[FFTWarningString]
Meter=String
Text=The value must be even and preferrably a power of 2. High FFT size can result in high CPU usage and lag. Click on text for more info. #CRLF#Continue?
X=125
W=242
Y=10r
H=80
ClipString=1
FontFace=Segoe UI
FontSize=10
FontColor=94a1b2
AntiAlias=1
Hidden=1
Group=Warnings | FFTWarning
SolidColor=0,0,0,1
LeftMouseUpAction=["https://docs.rainmeter.net/manual/plugins/audiolevel/"]

[FFTWarningOkay]
Meter=Shape
X=220
Y=75r
Shape=Rectangle 0,0,50,20,3 | StrokeWidth 1.5 | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Group=Warnings | FFTWarning
LeftMouseUpAction=[!HideMeterGroup FFTWarning][!Redraw][!CommandMeasure FFTSizeInputText "ExecuteBatch 1"]
Hidden=1

[FFTOkayString]
Meter=String
Text=Okay!
X=245
Y=9r
FontSize=9
FontFace=Segoe UI
FontWeight=500
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=Warnings | FFTWarning
Hidden=1

[ReflectionWarning]
Meter=Shape
X=100
Y=200
Shape=Rectangle 0,0,290,110,10 | StrokeWidth 3 | Fill Color 16161a
Hidden=1
Group=Warnings | ReflectionWarning

[ReflectionWarningString]
Meter=String
Text=Since it draws alpha gradient it uses a considerably high amount of resources. Are you sure you want to enable?
X=125
W=242
Y=210
H=80
ClipString=1
FontFace=Segoe UI
FontSize=10
FontColor=94a1b2
AntiAlias=1
Hidden=1
Group=Warnings | ReflectionWarning
SolidColor=0,0,0,1

[ReflectionWarningOkay]
Meter=Shape
X=165
Y=285
Shape=Rectangle 0,0,50,20,3 | StrokeWidth 1.5 | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Group=Warnings | ReflectionWarning
LeftMouseUpAction=[!WriteKeyValue Variables BarType "Reflection" "#@#Variables\GlobalVariables.inc"][!SetVariable TypeContainerHeight "0"][!HideMeterGroup ReflectionWarning][!Refresh]
Hidden=1

[ReflectionOkayString]
Meter=String
Text=Yes
X=190
Y=293
FontSize=9
FontFace=Segoe UI
FontWeight=500
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=Warnings | ReflectionWarning
Hidden=1

[ReflectionWarningNo]
Meter=Shape
X=275
Y=285
Shape=Rectangle 0,0,50,20,3 | StrokeWidth 1.5 | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Hidden=1
Group=Warnings | ReflectionWarning
LeftMouseUpAction=[!HideMeterGroup ReflectionWarning]

[ReflectionNo]
Meter=String
Text=No
X=300
Y=293
FontSize=9
FontFace=Segoe UI
FontWeight=500
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=Warnings | ReflectionWarning
Hidden=1

[ChannelWarning]
Meter=Shape
X=100
Y=220
Shape=Rectangle 0,0,290,290,10 | StrokeWidth 3 | Fill Color 16161a
Hidden=1
Group=Warnings | ChannelWarning

[ChannelString1]
Meter = String
X=30r
Y=20r
Text = Default#CRLF#FrontLeft#CRLF#FrontRight#CRLF#Center#CRLF#CenterBack#CRLF#LowFrequency#CRLF#BackLeft#CRLF#BackRight#CRLF#SideLeft#CRLF#SideRight
FontFace=Segoe UI
FontColor=FFFFFF
FontSize=13
Group=Warnings | ChannelWarning
AntiAlias=1
ClipString=1
StringAlign=Left
Hidden=1
FontWeight=500

[ChannelString2]
Meter = String
X=20R
Y=-3r
Text = |#CRLF#|#CRLF#|#CRLF#|#CRLF#|#CRLF#|#CRLF#|#CRLF#|#CRLF#|#CRLF#|
FontFace=Segoe UI
FontColor=FFFFFF
FontSize=13
Group=Warnings | ChannelWarning
AntiAlias=1
ClipString=1
StringAlign=Left
Hidden=1
FontWeight=500

[ChannelString3]
Meter = String
X=80R
Y=3r
Text = Auto#CRLF#FL#CRLF#FR#CRLF#C#CRLF#CB#CRLF#LFE#CRLF#BL#CRLF#BR#CRLF#SL#CRLF#SR
FontFace=Segoe UI
FontColor=FFFFFF
FontSize=13
Group=Warnings | ChannelWarning
AntiAlias=1
ClipString=1
StringAlign=Right
Hidden=1
FontWeight=500

[ChannelOkay]
Meter=Shape
X=220
Y=10R
Shape=Rectangle 0,0,50,20,3 | StrokeWidth 1.5 | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Group=Warnings | ChannelWarning
LeftMouseUpAction=[!HideMeterGroup ChannelWarning][!Redraw][!CommandMeasure EqualizerChannelInputText "ExecuteBatch 1"]
Hidden=1

[ChannelOkayString]
Meter=String
Text=Okay!
X=245
Y=9r
FontSize=9
FontFace=Segoe UI
FontWeight=500
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=Warnings | ChannelWarning
Hidden=1