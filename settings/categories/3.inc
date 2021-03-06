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
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator3]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[Var0]
Meter=String
Text=Visualizer Type
MeterStyle=VarTitle | RightPanel
[Var0Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel

[Type1Image]
Meter=Image
X=10r
Y=R
H=135
W=240
ImageName=#SKINSPATH#ASimpleVisualizer\@Resources\Images\[#BarType].png
DynamicVariables=1
PreserveAspectRatio=2
SolidColor=0,0,0,1
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 20 "#SKINSPATH#ASimpleVisualizer\settings\includes\Variables.inc"][!Refresh]
MeterStyle=RightPanel

@include=VisualizerTypes\[#BarType].inc

[LastRightPanel]
Meter=String
Text=Last
FontColor=0,0,0,0
MeterStyle=LastItem | RightPanel

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
[ActiveTypeShape]
X=510
Y=100
