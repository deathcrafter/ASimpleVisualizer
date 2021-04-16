[ColorSettings]
Meter=String
Text=Color Settings
X=242
Y=75
Group=SuperContainers
Hidden=(2-[#TabState])
MeterStyle=SubtitleStyle

[ColorsContainer]
Meter=Shape
X=45
Y=130
Shape = Rectangle 0,0, 400, 515, 15
DynamicVariables=1
Group=SuperContainers
Hidden=(2-[#TabState])

[ColorCount]
Meter=String
X=30
Y=0
Text=Color Count
Container=ColorsContainer
MeterStyle=ContentStyle

[ColorCountInputBackGround]
Meter=Shape
X=240
Y=2r
Shape=Rectangle 0,0,120, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure ColorCountInputText "ExecuteBatch 1"]
Container=ColorsContainer
MeterStyle=ContentValueBoxStyle
Group=SuperContainers
Hidden=(2-[#TabState])


[ColorCountString]
Meter=String
X=300
Text=[#ColorCount]
Container=ColorsContainer
MeterStyle=ButtonTextStyle | FFTSizeString

[ColorCountInputText]
Measure=Plugin
Plugin=InputText
H=([ColorCountInputBackGround:H]-5)
W=([ColorCountInputBackGround:W]-5)
X=([ColorCountInputBackGround:X]+2)
Y=([ColorCountInputBackGround:Y]+2)
DefaultValue=[#ColorCount]
SolidColor=16161a
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables ColorCount "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1
Container=ColorsContainer

[EditColors]
Meter=String
X=200
Y=30r
Text=-Edit gradients below-#CRLF#-Right click the boxes to activate palette-
FontSize=12
InlineSetting=GradientColor | 180 | 30B282;0.0 | 7C5DEC;1.0
InlinePattern=.*
InlinePattern2=#CRLF#(.*)$
InlineSetting2=Size | 9
InlinePattern2=#CRLF#(.*)$
InlineSetting2=Weight | 100
Container=ColorsContainer
MeterStyle=SubtitleStyle

[Color1]
Meter=String
X=30
Y=50r
Text=Color 1
Container=ColorsContainer
MeterStyle=ContentStyle

[Color1InputBackGround]
Meter=Shape
X=240
Y=2r
Shape=Rectangle 0,0,120, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure Color1InputText "ExecuteBatch 1"]
RightMouseUpAction=["#@#RainRGB\RainRGB4.exe" "VarName=ColorA0" "FileName=#@#Variables\GlobalVariables.inc" "RefreshConfig=#CURRENTCONFIG#"]
Container=ColorsContainer
Group=SuperContainers
Hidden=(2-[#TabState])

MeterStyle=ContentValueBoxStyle

[Color1String]
Meter=String
X=301
Y=11r
Text=[#ColorA0]
StringAlign=CenterCenter
Container=ColorsContainer
MeterStyle=ButtonTextStyle

[Color1InputText]
Measure=Plugin
Plugin=InputText
H=([Color1InputBackGround:H]-5)
W=([Color1InputBackGround:W]-5)
X=([Color1InputBackGround:X]+2)
Y=([Color1InputBackGround:Y]+2)
DefaultValue=[#ColorA0]
SolidColor=16161a
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables ColorA0 "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[Color2]
Meter=String
X=30
Y=25r
Text=Color 2
Container=ColorsContainer
MeterStyle=ContentStyle

[Color2InputBackGround]
Meter=Shape
X=240
Y=2r
Shape=Rectangle 0,0,120, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure Color2InputText "ExecuteBatch 1"]
RightMouseUpAction=["#@#RainRGB\RainRGB4.exe" "VarName=ColorA1" "FileName=#@#Variables\GlobalVariables.inc" "RefreshConfig=#CURRENTCONFIG#"]
Container=ColorsContainer
Group=SuperContainers
Hidden=(2-[#TabState])

MeterStyle=ContentValueBoxStyle

[Color2String]
Meter=String
Text=[#ColorA1]
Container=ColorsContainer
MeterStyle=ButtonTextStyle | Color1String

[Color2InputText]
Measure=Plugin
Plugin=InputText
H=([Color2InputBackGround:H]-5)
W=([Color2InputBackGround:W]-5)
X=([Color2InputBackGround:X]+2)
Y=([Color2InputBackGround:Y]+2)
DefaultValue=[#ColorA1]
SolidColor=16161a
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables ColorA1 "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[Color3]
Meter=String
X=30
Y=25r
Text=Color 3
Container=ColorsContainer
MeterStyle=ContentStyle

[Color3InputBackGround]
Meter=Shape
X=240
Y=2r
Shape=Rectangle 0,0,120, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure Color3InputText "ExecuteBatch 1"]
RightMouseUpAction=["#@#RainRGB\RainRGB4.exe" "VarName=ColorA2" "FileName=#@#Variables\GlobalVariables.inc" "RefreshConfig=#CURRENTCONFIG#"]
Container=ColorsContainer
Group=SuperContainers
Hidden=(2-[#TabState])

MeterStyle=ContentValueBoxStyle

[Color3String]
Meter=String
Text=[#ColorA2]
Container=ColorsContainer
MeterStyle=ButtonTextStyle | Color1String

[Color3InputText]
Measure=Plugin
Plugin=InputText
H=([Color3InputBackGround:H]-5)
W=([Color3InputBackGround:W]-5)
X=([Color3InputBackGround:X]+2)
Y=([Color3InputBackGround:Y]+2)
DefaultValue=[#ColorA2]
SolidColor=16161a
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables ColorA2 "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[Color4]
Meter=String
X=30
Y=25r
Text=Color 4
Container=ColorsContainer
MeterStyle=ContentStyle

[Color4InputBackGround]
Meter=Shape
X=240
Y=2r
Shape=Rectangle 0,0,120, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure Color4InputText "ExecuteBatch 1"]
RightMouseUpAction=["#@#RainRGB\RainRGB4.exe" "VarName=ColorA3" "FileName=#@#Variables\GlobalVariables.inc" "RefreshConfig=#CURRENTCONFIG#"]
Container=ColorsContainer
Group=SuperContainers
Hidden=(2-[#TabState])

MeterStyle=ContentValueBoxStyle

[Color4String]
Meter=String
Text=[#ColorA3]
Container=ColorsContainer
MeterStyle=ButtonTextStyle | Color1String

[Color4InputText]
Measure=Plugin
Plugin=InputText
H=([Color4InputBackGround:H]-5)
W=([Color4InputBackGround:W]-5)
X=([Color4InputBackGround:X]+2)
Y=([Color4InputBackGround:Y]+2)
DefaultValue=[#ColorA3]
SolidColor=16161a
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables ColorA3 "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[Color5]
Meter=String
X=30
Y=25r
Text=Color 5
Container=ColorsContainer
MeterStyle=ContentStyle

[Color5InputBackGround]
Meter=Shape
X=240
Y=2r
Shape=Rectangle 0,0,120, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure Color5InputText "ExecuteBatch 1"]
RightMouseUpAction=["#@#RainRGB\RainRGB4.exe" "VarName=ColorA4" "FileName=#@#Variables\GlobalVariables.inc" "RefreshConfig=#CURRENTCONFIG#"]
Container=ColorsContainer
Group=SuperContainers
Hidden=(2-[#TabState])

MeterStyle=ContentValueBoxStyle

[Color5String]
Meter=String
Text=[#ColorA4]
Container=ColorsContainer
MeterStyle=ButtonTextStyle | Color1String

[Color5InputText]
Measure=Plugin
Plugin=InputText
H=([Color5InputBackGround:H]-5)
W=([Color5InputBackGround:W]-5)
X=([Color5InputBackGround:X]+2)
Y=([Color5InputBackGround:Y]+2)
DefaultValue=[#ColorA4]
SolidColor=16161a
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables ColorA4 "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[Color6]
Meter=String
X=30
Y=25r
Text=Color 6
Container=ColorsContainer
MeterStyle=ContentStyle

[Color6InputBackGround]
Meter=Shape
X=240
Y=2r
Shape=Rectangle 0,0,120, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure Color6InputText "ExecuteBatch 1"]
RightMouseUpAction=["#@#RainRGB\RainRGB4.exe" "VarName=ColorA5" "FileName=#@#Variables\GlobalVariables.inc" "RefreshConfig=#CURRENTCONFIG#"]
Container=ColorsContainer
Group=SuperContainers
Hidden=(2-[#TabState])

MeterStyle=ContentValueBoxStyle

[Color6String]
Meter=String
Text=[#ColorA5]
Container=ColorsContainer
MeterStyle=ButtonTextStyle | Color1String

[Color6InputText]
Measure=Plugin
Plugin=InputText
H=([Color6InputBackGround:H]-5)
W=([Color6InputBackGround:W]-5)
X=([Color6InputBackGround:X]+2)
Y=([Color6InputBackGround:Y]+2)
DefaultValue=[#ColorA5]
SolidColor=16161a
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables ColorA5 "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[Color7]
Meter=String
X=30
Y=25r
Text=Color 7
Container=ColorsContainer
MeterStyle=ContentStyle

[Color7InputBackGround]
Meter=Shape
X=240
Y=2r
Shape=Rectangle 0,0,120, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure Color7InputText "ExecuteBatch 1"]
RightMouseUpAction=["#@#RainRGB\RainRGB4.exe" "VarName=ColorA6" "FileName=#@#Variables\GlobalVariables.inc" "RefreshConfig=#CURRENTCONFIG#"]
Container=ColorsContainer
Group=SuperContainers
Hidden=(2-[#TabState])

MeterStyle=ContentValueBoxStyle

[Color7String]
Meter=String
Text=[#ColorA6]
Container=ColorsContainer
MeterStyle=ButtonTextStyle | Color1String

[Color7InputText]
Measure=Plugin
Plugin=InputText
H=([Color7InputBackGround:H]-5)
W=([Color7InputBackGround:W]-5)
X=([Color7InputBackGround:X]+2)
Y=([Color7InputBackGround:Y]+2)
DefaultValue=[#ColorA6]
SolidColor=16161a
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables ColorA6 "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1

[GenerateColorsBox]
Meter=Shape
X=140
Y=30R
Shape=Rectangle 0,0,130, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure "SuperScript" "CreateColorMeasures()"][!Refresh]
Container=ColorsContainer
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!ShowMeter InfoCol][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!HideMeter InfoCol][!Redraw]
DynamicVariables=1
Group=SuperContainers
Hidden=(2-[#TabState])
MeterStyle=ContentValueBoxStyle

[GenerateColorText]
Meter=String
X=65r
Y=11r
Text=GenerateColors
Container=ColorsContainer
MeterStyle=ButtonTextStyle

[InfoCol]
Meter=String
Text="You have to click generate and apply#CRLF#after you generate colors!"
X=200
Y=10R
StringAlign=CenterCenter
FontSize=9
FontFace=Segoe UI
FontColor=255,100,100
FontWeight=500
AntiAlias=1
Hidden=1
Container=ColorsContainer