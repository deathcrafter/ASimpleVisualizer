[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon3]
Meter=String
Text=[\xE74C]
MeterStyle=CategoryIcon | RightPanel

[Title3]
Meter=String
Text=Visualizer Types 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon3:W])

[CategoryDescription3]
Meter=String
Text=
FontWeight=500
MeterStyle=VarDescription | RightPanel

[CategoryTitleSeparator3]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[LastRightPanel]
Meter=String
Text=Last
FontColor=0,0,0,0
MeterStyle=LastItem | RightPanel

[ActiveTypeShape]
Meter=Shape
X=220
Y=100
Shape=Rectangle 0,0, 240,135,7 | StrokeWidth 5 | StrokeColor FFFFFE | Fill Color 30,30,30,0


[ShapeType1]
Meter=Shape
X=([#s_LeftPanelW] + [#s_VariableXPadding])
Y=100
Shape=Rectangle 0,0, 240,135,7 | StrokeWidth 0 | Fill Color 30,30,30
LeftMouseUpAction=[!WriteKeyValue Variables BarType "Normal" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!WriteKeyValue ActiveTypeShape X "([#s_LeftPanelW] + [#s_VariableXPadding])" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue ActiveTypeShape Y "100" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue Variables s_CurrentCategory 3 "#SKINSPATH#ASimpleVisualizer\settings\includes\Variables.inc"][!Refresh]

[Type1Image]
Meter=Image
H=135
W=240
ImageName=#SKINSPATH#ASimpleVisualizer\@Resources\Images\normal.png
PreserveAspectRatio=2
Container=ShapeType1

[Type1Text]
Meter=String
X=120r
Y=10R
Text=Normal
FontFace=Segoe UI
FontSize=12
FontColor=FFFFFF
FontWeight=500
StringAlign=CenterCenter
AntiAlias=1

[ShapeType2]
Meter=Shape
X=([#s_LeftPanelW] + [#s_VariableXPadding] + 290)
Y=100
Shape=Rectangle 0,0, 240,135,7 | StrokeWidth 0 | Fill Color 30,30,30
LeftMouseUpAction=[!WriteKeyValue Variables BarType "MirrorX" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!WriteKeyValue ActiveTypeShape X "([#s_LeftPanelW] + [#s_VariableXPadding] + 290)" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue ActiveTypeShape Y "100" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue Variables s_CurrentCategory 3 "#SKINSPATH#ASimpleVisualizer\settings\includes\Variables.inc"][!Refresh]

[Type2Image]
Meter=Image
H=135
W=240
ImageName=#SKINSPATH#ASimpleVisualizer\@Resources\Images\mirrorx.png
PreserveAspectRatio=2
Container=ShapeType2

[Type2Text]
Meter=String
X=120r
Y=10R
Text=MirrorX
FontFace=Segoe UI
FontSize=12
FontColor=FFFFFF
FontWeight=500
StringAlign=CenterCenter
AntiAlias=1

[ShapeType3]
Meter=Shape
X=([#s_LeftPanelW] + [#s_VariableXPadding])
Y=265
Shape=Rectangle 0,0, 240,135,7 | StrokeWidth 0 | Fill Color 30,30,30
LeftMouseUpAction=[!WriteKeyValue Variables BarType "MirrorY" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!WriteKeyValue ActiveTypeShape X "([#s_LeftPanelW] + [#s_VariableXPadding])" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue ActiveTypeShape Y "265" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue Variables s_CurrentCategory 3 "#SKINSPATH#ASimpleVisualizer\settings\includes\Variables.inc"][!Refresh]

[Type3Image]
Meter=Image
H=135
W=240
ImageName=#SKINSPATH#ASimpleVisualizer\@Resources\Images\mirrory.png
PreserveAspectRatio=2
Container=ShapeType3

[Type3Text]
Meter=String
X=120r
Y=10R
Text=MirrorY
FontFace=Segoe UI
FontSize=12
FontColor=FFFFFF
FontWeight=500
StringAlign=CenterCenter
AntiAlias=1

[ShapeType4]
Meter=Shape
X=([#s_LeftPanelW] + [#s_VariableXPadding] + 290)
Y=265
Shape=Rectangle 0,0, 240,135,7 | StrokeWidth 0 | Fill Color 30,30,30
LeftMouseUpAction=[!WriteKeyValue Variables BarType "MirrorXY" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!WriteKeyValue ActiveTypeShape X "([#s_LeftPanelW] + [#s_VariableXPadding] + 290)" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue ActiveTypeShape Y "265" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue Variables s_CurrentCategory 3 "#SKINSPATH#ASimpleVisualizer\settings\includes\Variables.inc"][!Refresh]

[Type4Image]
Meter=Image
H=135
W=240
ImageName=#SKINSPATH#ASimpleVisualizer\@Resources\Images\mirrorxy.png
PreserveAspectRatio=2
Container=ShapeType4

[Type4Text]
Meter=String
X=120r
Y=10R
Text=MirrorXY
FontFace=Segoe UI
FontSize=12
FontColor=FFFFFF
FontWeight=500
StringAlign=CenterCenter
AntiAlias=1


[ShapeType5]
Meter=Shape
X=([#s_LeftPanelW] + [#s_VariableXPadding])
Y=435
Shape=Rectangle 0,0, 240,135,7 | StrokeWidth 0 | Fill Color 30,30,30
LeftMouseUpAction=[!WriteKeyValue Variables BarType "Reflection" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!WriteKeyValue ActiveTypeShape X "([#s_LeftPanelW] + [#s_VariableXPadding])" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue ActiveTypeShape Y "435" "#SKINSPATH#ASimpleVisualizer\settings\categories\20.inc"][!WriteKeyValue Variables s_CurrentCategory 3 "#SKINSPATH#ASimpleVisualizer\settings\includes\Variables.inc"][!Refresh]

[Type5Image]
Meter=Image
H=135
W=240
ImageName=#SKINSPATH#ASimpleVisualizer\@Resources\Images\reflection.png
PreserveAspectRatio=2
Container=ShapeType5

[Type5Text]
Meter=String
X=120r
Y=25R
Text=Reflection#CRLF#(Consumes more resources)
FontFace=Segoe UI
FontSize=12
FontColor=FFFFFF
FontWeight=500
InlinePattern=#CRLF#.+
InlineSetting=Color | 230,0,0
InlinePattern2=#CRLF#.+
InlineSetting2=Size | 9
StringAlign=CenterCenter
AntiAlias=1


[ShapeType6]
Meter=Shape
X=([#s_LeftPanelW] + [#s_VariableXPadding] + 290)
Y=435
Shape=Rectangle 0,0, 240,135,7 | StrokeWidth 0 | Fill Color 30,30,30,1

[Type6Image]
Meter=Image
H=135
W=240
SolidColor=544B50
PreserveAspectRatio=2
Container=ShapeType6

[Type6Text]
Meter=String
X=([#s_LeftPanelW] + [#s_VariableXPadding] + 290+120)
Y=(435+68)
Text=Coming#CRLF#Soon...
FontFace=Segoe UI
FontSize=12
FontColor=FFFFFF
FontWeight=500
StringAlign=CenterCenter
AntiAlias=1


[ScrollDownRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] - [#s_ScrollSpeed]
IfCondition=([LastRightPanel:Y] > [#s_ScrollTreshold])
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollDownRightPanel]"][!DisableMeasure "ScrollDownRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollDownRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[ScrollUpRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] + [#s_ScrollSpeed]
IfCondition=([FirstRightPanel:Y] < 0)
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollUpRightPanel]"][!DisableMeasure "ScrollUpRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollUpRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1


