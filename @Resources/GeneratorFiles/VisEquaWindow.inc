[VisualizerSettings]
Meter=String
Text=Visualizer Settings
X=242
Y=75
Group=SuperContainers
MeterStyle=SubtitleStyle
Hidden=[#TabState]

[SettingsBackGroundContainer]
Meter=Shape
X=45
Y=130
Shape = Rectangle 0,0, 400, 490, 15
;MouseScrollDownAction=[!SetVariable OffSetY "(Clamp(#OffSetY#+65,0,330))"][!UpdateMeterGroup Scroll][!UpdateMeasureGroup Hiders][!Redraw]
;MouseScrollUpAction=[!SetVariable OffSetY "(Clamp(#OffSetY#-65,0,330))"][!UpdateMeterGroup Scroll][!UpdateMeasureGroup Hiders][!Redraw]
Group=Scroll | SuperContainers
MouseActionCursor=0
DynamicVariables=1
Hidden=[#TabState]

[Type]
Meter=String
Text=Visualizer Type
X=30
Y=-#OffSetY#
MeterStyle=ContentStyle

[TypeBox]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure ActionTimer "Execute 1"]
Group=SuperContainers
Hidden=[#TabState]
MeterStyle=ContentValueBoxStyle

[TypeString]
Meter=String
Text=[#BarType]
X=311
Y=11r
MeterStyle=ButtonTextStyle

[Bands]
Meter=String
Text = Bar Count
X=30
Y=30r
MeterStyle=ContentStyle

[BandsBox]
Meter=Shape
Y=r
MeterStyle=TypeBox | ContentValueBoxStyle
LeftMouseUpAction=[!CommandMeasure BandsInputText "ExecuteBatch 1"]
Group=SuperContainers
Hidden=[#TabState]

[BandsInputText]
Measure=Plugin
Plugin=InputText
H=([BandsBox:H]-5)
W=([BandsBox:W]-5)
X=([BandsBox:X]+2)
Y=([BandsBox:Y]+2)
DefaultValue=[#Bands]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables Bands "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R1#
DynamicVariables=1
Container=SettingsBackGroundContainer

[BandsString]
Meter=String
MeterStyle= TypeString | ButtonTextStyle
Text=[#Bands]

[Height]
Meter=String
Text = Bar Height
MeterStyle=ContentStyle | Bands

[HeightBox]
Meter=Shape
Y=r
MeterStyle=TypeBox | ContentValueBoxStyle
LeftMouseUpAction=[!CommandMeasure HeightInputText "ExecuteBatch 1"]
Group=SuperContainers
Hidden=[#TabState]

[HeightInputText]
Measure=Plugin
Plugin=InputText
H=([HeightBox:H]-5)
W=([HeightBox:W]-5)
X=([HeightBox:X]+2)
Y=([HeightBox:Y]+2)
DefaultValue=[#Height]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables Height "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R1#
DynamicVariables=1
Container=SettingsBackGroundContainer

[HeightString]
Meter=String
MeterStyle= TypeString | ButtonTextStyle
Text=[#Height]

[Width]
Meter=String
Text = Bar Width
MeterStyle=ContentStyle | Bands

[WidthBox]
Meter=Shape
Y=r
MeterStyle=TypeBox | ContentValueBoxStyle
LeftMouseUpAction=[!CommandMeasure WidthInputText "ExecuteBatch 1"]
Group=SuperContainers
Hidden=[#TabState]

[WidthInputText]
Measure=Plugin
Plugin=InputText
H=([WidthBox:H]-5)
W=([WidthBox:W]-5)
X=([WidthBox:X]+2)
Y=([WidthBox:Y]+2)
DefaultValue=[#BarWidth]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables BarWidth "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R1#
DynamicVariables=1
Container=SettingsBackGroundContainer

[WidthString]
Meter=String
MeterStyle= TypeString | ButtonTextStyle
Text=[#BarWidth]

[Gap]
Meter=String
Text = Bar Gap
MeterStyle=ContentStyle | Bands

[GapBox]
Meter=Shape
Y=r
MeterStyle=TypeBox | ContentValueBoxStyle
LeftMouseUpAction=[!CommandMeasure GapInputText "ExecuteBatch 1"]
Group=SuperContainers
Hidden=[#TabState]

[GapInputText]
Measure=Plugin
Plugin=InputText
H=([GapBox:H]-5)
W=([GapBox:W]-5)
X=([GapBox:X]+2)
Y=([GapBox:Y]+2)
DefaultValue=[#BarGap]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables BarGap "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R1#
DynamicVariables=1
Container=SettingsBackGroundContainer

[GapString]
Meter=String
MeterStyle= TypeString | ButtonTextStyle
Text=[#BarGap]

[Rounding]
Meter=String
Text = Corner Rounding
MeterStyle=ContentStyle | Bands

[RoundingBox]
Meter=Shape
Y=r
MeterStyle=TypeBox | ContentValueBoxStyle
LeftMouseUpAction=[!CommandMeasure CornerRoundingInputText "ExecuteBatch 1"]
Group=SuperContainers
Hidden=[#TabState]

[CornerRoundingInputText]
Measure=Plugin
Plugin=InputText
H=([RoundingBox:H]-5)
W=([RoundingBox:W]-5)
X=([RoundingBox:X]+2)
Y=([RoundingBox:Y]+2)
DefaultValue=[#CornerRounding]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables CornerRounding "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R1#
DynamicVariables=1
Container=SettingsBackGroundContainer

[RoundingString]
Meter=String
MeterStyle= TypeString | ButtonTextStyle
Text=[#CornerRounding]

[Levitate]
Meter=String
Text = Levitation
MeterStyle=ContentStyle | Bands

[LevitateBox]
Meter=Shape
Y=r
MeterStyle=TypeBox | ContentValueBoxStyle
LeftMouseUpAction=[!CommandMeasure LevitateInputText "ExecuteBatch 1"]
Group=SuperContainers
Hidden=[#TabState]

[LevitateInputText]
Measure=Plugin
Plugin=InputText
H=([LevitateBox:H]-5)
W=([LevitateBox:W]-5)
X=([LevitateBox:X]+2)
Y=([LevitateBox:Y]+2)
DefaultValue=[#Levitate]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables Levitate "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R1#
DynamicVariables=1
Container=SettingsBackGroundContainer

[LevitateString]
Meter=String
MeterStyle= TypeString | ButtonTextStyle
Text=[#Levitate]

[Angle]
Meter=String
Text = Angle
MeterStyle=ContentStyle | Bands

[AngleBox]
Meter=Shape
Y=r
MeterStyle=TypeBox | ContentValueBoxStyle
LeftMouseUpAction=[!CommandMeasure AngleInputText "ExecuteBatch 1"]
Group=SuperContainers
Hidden=[#TabState]

[AngleInputText]
Measure=Plugin
Plugin=InputText
H=([AngleBox:H]-5)
W=([AngleBox:W]-5)
X=([AngleBox:X]+2)
Y=([AngleBox:Y]+2)
DefaultValue=[#Angle]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables Angle "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R1#
DynamicVariables=1
Container=SettingsBackGroundContainer

[AngleString]
Meter=String
MeterStyle= TypeString | ButtonTextStyle
Text=[#Angle]

[StrokeWidth]
Meter=String
Text = Stroke Width
MeterStyle=ContentStyle | Bands

[StrokeWidthBox]
Meter=Shape
Y=r
MeterStyle=TypeBox | ContentValueBoxStyle
LeftMouseUpAction=[!CommandMeasure StrokeWidthInputText "ExecuteBatch 1"]
Group=SuperContainers
Hidden=[#TabState]

[StrokeWidthInputText]
Measure=Plugin
Plugin=InputText
H=([StrokeWidthBox:H]-5)
W=([StrokeWidthBox:W]-5)
X=([StrokeWidthBox:X]+2)
Y=([StrokeWidthBox:Y]+2)
DefaultValue=[#BarStrokeWidth]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables BarStrokeWidth "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R1#
DynamicVariables=1
Container=SettingsBackGroundContainer

[StrokeWidthString]
Meter=String
MeterStyle= TypeString | ButtonTextStyle
Text=[#BarStrokeWidth]

[MirrorDistance]
Meter=String
Text = MirrorDistance
MeterStyle=ContentStyle | Bands

[MirrorDistanceBox]
Meter=Shape
Y=r
MeterStyle=TypeBox | ContentValueBoxStyle
LeftMouseUpAction=[!CommandMeasure MirrorDistanceInputText "ExecuteBatch 1"]
Group=SuperContainers
Hidden=[#TabState]

[MirrorDistanceInputText]
Measure=Plugin
Plugin=InputText
H=([MirrorDistanceBox:H]-5)
W=([MirrorDistanceBox:W]-5)
X=([MirrorDistanceBox:X]+2)
Y=([MirrorDistanceBox:Y]+2)
DefaultValue=[#MirrorDistance]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables MirrorDistance "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R1#
DynamicVariables=1
Container=SettingsBackGroundContainer

[MirrorDistanceString]
Meter=String
MeterStyle= TypeString | ButtonTextStyle
Text=[#MirrorDistance]