[Generate]
Meter=Shape
X=(75*[#Scale])
Y=(600*[#Scale])
Shape=Rectangle 0,0,(100*[#Scale]),(25*[#Scale]),(5*[#Scale]) | StrokeWidth (2*[#Scale]) | Stroke Color 72757e | Extend ColorA
ColorA= Fill Color 2cb67d00
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 2cb67d"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 2cb67d00"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMeasure "SuperScript" "CalculateAudioBands()"][!CommandMeasure "SuperScript" "Draw[#BarType]()"][!CommandMeasure "SuperScript" "CreateColors()"]

[GenerateText]
Meter=String
X=(127*[#Scale])
Y=(12*[#Scale])r
Text=Generate :)
FontSize=(12*[#Scale])
FontFace=Segoe UI
FontColor=fffffe
FontWeight=500
StringALign=CenterCenter
AntiAlias=1

[Refresh]
Meter=Shape
Shape=Rectangle 0,0,(100*[#Scale]),(25*[#Scale]),(5*[#Scale]) | StrokeWidth (2*[#Scale]) | Stroke Color 72757e | Extend ColorA
ColorA= Fill Color 2cb67d00
X=(315*[#Scale])
Y=(-12*[#Scale])r
ColorA= Fill Color 2cb67d00
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 2cb67d"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 2cb67d00"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Refresh "ASimpleVisualizer\Visualizer" "ASimpleVisualizer.ini"]
DynamicVariables=1

[RefreshText]
Meter=String
X=(367*[#Scale])
Y=(12*[#Scale])r
Text="Apply :)"
FontSize=(12*[#Scale])
FontFace=Segoe UI
FontColor=fffffe
FontWeight=500
StringALign=CenterCenter
AntiAlias=1

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[ActionTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat Act, 30, 12
Act=[!SetVariable TypeContainerHeight "(Clamp(#TypeContainerHeight#+12, 0, 133*[#Scale]))"][!UpdateMeasure ActionTimer][!UpdateMeter TypesContainer][!Redraw]
IgnoreWarnings=1
DynamicVariables=1

[TypesContainer]
Meter=String
X=([TypeBox:X]-(1*[#Scale]))
Y=([TypeBox:Y]+(23*[#Scale]))
H=[#TypeContainerHeight]*[#Scale]
W=(102*[#Scale])
SolidColor=0,0,0
UpdateDivider=-1
DynamicVariables=1
Group=Scroll

[MeasureTypeContainerHider]
Measure=Calc
Formula=[TypesContainer:Y]
ifCondition=MeasureTypeContainerHider <= (70*[#Scale])
ifTrueAction=[!SetVariable TypeContainerHeight "0"][!UpdateMeter TypesContainer][!Redraw]
UpdateDivider=-1
DynamicVariables=1
Group=Hiders

[TypesBackGround]
Meter=Shape
X=(1*[#Scale])
Y=(7*[#Scale])
Shape=Rectangle 0,0,(100*[#Scale]),(125*[#Scale]),(5*[#Scale]) | Fill Color 16161a | StrokeWidth (2*[#Scale])
Container=TypesContainer
;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[TypeHighLightStyle]
ColorA= Fill Color 7f5af000
Container = TypesContainer
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Type1Highlight]
Meter=Shape
X=(1*[#Scale])
Y=(7*[#Scale])
Shape=Rectangle (1*[#Scale]),0,(98*[#Scale]),(25*[#Scale]),(5*[#Scale]) | StrokeWidth 0 | Extend ColorA
Shape2=Rectangle (1*[#Scale]),(10*[#Scale]),(98*[#Scale]),(15*[#Scale])
Shape3=Combine Shape | Union Shape2
MeterStyle=TypeHighLightStyle
LeftMouseUpAction=[!WriteKeyValue Variables BarType "Normal" "#@#Variables\GlobalVariables.inc"][!SetVariable TypeContainerHeight "0"][!Refresh]

[Type2Highlight]
Meter=Shape
X=(1*[#Scale])
Y=R
Shape=Rectangle (1*[#Scale]),0,(98*[#Scale]),(25*[#Scale]) | StrokeWidth 0 | Extend ColorA
MeterStyle=TypeHighLightStyle
LeftMouseUpAction=[!WriteKeyValue Variables BarType "MirrorY" "#@#Variables\GlobalVariables.inc"][!SetVariable TypeContainerHeight "0"][!Refresh]

[Type3Highlight]
Meter=Shape
X=(1*[#Scale])
Y=R
Shape=Rectangle (1*[#Scale]),0,(98*[#Scale]),(25*[#Scale])  | StrokeWidth 0| Extend ColorA
MeterStyle=TypeHighLightStyle
LeftMouseUpAction=[!WriteKeyValue Variables BarType "MirrorX" "#@#Variables\GlobalVariables.inc"][!SetVariable TypeContainerHeight "0"][!Refresh]

[Type4Highlight]
Meter=Shape
X=(1*[#Scale])
Y=R
Shape=Rectangle (1*[#Scale]),0,(98*[#Scale]),(25*[#Scale])  | StrokeWidth 0| Extend ColorA
MeterStyle=TypeHighLightStyle
LeftMouseUpAction=[!WriteKeyValue Variables BarType "MirrorXY" "#@#Variables\GlobalVariables.inc"][!SetVariable TypeContainerHeight "0"][!Refresh]

[Type5Highlight]
Meter=Shape
X=(1*[#Scale])
Y=R
Shape=Rectangle (1*[#Scale]),0,(98*[#Scale]),(15*[#Scale])  | StrokeWidth 0| Extend ColorA
Shape2=Rectangle (1*[#Scale]),0,(98*[#Scale]),(25*[#Scale]),5
Shape3=Combine Shape | Union Shape2
MeterStyle=TypeHighLightStyle
LeftMouseUpAction=[!ShowMeterGroup ReflectionWarning][!Redraw]

;;;;;;;;;;;;;;;;;;;;;;;;
[TypeTextStyle]
FontSize=(12*[#Scale])
FontFace=Segoe UI
FontColor=fffffe
X=(50*[#Scale])
Y=(26*[#Scale])r
AntiAlias=1
Container=TypesContainer
StringAlign=CenterCenter

[Type1Text]
Meter=String
Text=Normal
Y=(18*[#Scale])
MeterStyle=TypeTextStyle

[Type2Text]
Meter=String
Text=MirrorY
MeterStyle=TypeTextStyle

[Type3Text]
Meter=String
Text=MirrorX
MeterStyle=TypeTextStyle

[Type4Text]
Meter=String
Text=MirrorXY
MeterStyle=TypeTextStyle

[Type5Text]
Meter=String
Text="!!Reflection"
MeterStyle=TypeTextStyle