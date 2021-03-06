[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon4]
Meter=String
Text=[\xE81E]
MeterStyle=CategoryIcon | RightPanel

[Title4]
Meter=String
Text=Image Underlay 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon4:W])

[CategoryDescription4]
Meter=String
Text=Add an image underlay to your visualizer 
FontWeight=500
MeterStyle=VarDescription | RightPanel

[CategoryTitleSeparator4]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[Var0]
Meter=String
Y=275R
Text=Use image underlay 
MeterStyle=VarTitle | RightPanel
[Var0Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel

[ToggleOff0]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#ImageVisBool])
Y=([Var0Description:Y] + [Var0Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[#ImgVis0][!WriteKeyValue Variables "ImageVisBool" 1 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile].inc"][!SetVariable "ImageVisBool" 1][!Update][!Redraw][!Log "Toggled Image Underlay  on"]
Hidden=

[ToggleOn0]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#ImageVisBool] - 1)
Y=([Var0Description:Y] + [Var0Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[#ImgVis1][!WriteKeyValue Variables "ImageVisBool" 0 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile].inc"][!SetVariable "ImageVisBool" 0][!Update][!Redraw][!Log "Toggled Image Underlay  off"]
Hidden=

[ClearFloat0]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
Hidden=
MeterStyle=RightPanel
Y=([Var0Description:Y] + [Var0Description:H])
DynamicVariables=1

[Var1]
Meter=String
Text=Instructions
MeterStyle=VarTitle | RightPanel
[Var1Description]
Meter=String
Text=Drag & Drop an image on the top panel and turn the toggle on.
MeterStyle=VarDescription | RightPanel

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

@includeImage=#SKINSPATH#ASimpleVisualizer\@Resources\ImageUnderlay.inc
