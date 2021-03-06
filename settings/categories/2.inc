[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon2]
Meter=String
Text=[\xF61F]
MeterStyle=CategoryIcon | RightPanel

[Title2]
Meter=String
Text=Visualizer Settings 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon2:W])

[CategoryDescription2]
Meter=String
Text=
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator2]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[Var0]
Meter=String
Text=Bar count 
MeterStyle=VarTitle | RightPanel
[Var0Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value0]
Meter=String
Text=[#Bands]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText0" "ExecuteBatch All"][!Log "InputText0"]
Hidden=
[InputText0]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value0:X] + [#s_VariableXPadding])
Y=([Value0:Y] + [#s_ValueYPadding])
H=[Value0:H]
W=([RightPanelContainer:W] - ([Value0:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "Bands" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var1]
Meter=String
Text=Extrusion 
MeterStyle=VarTitle | RightPanel
[Var1Description]
Meter=String
Text=Amount the bars can grow in addition to minimum height
MeterStyle=VarDescription | RightPanel
[Value1]
Meter=String
Text=[#Height]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText1" "ExecuteBatch All"][!Log "InputText1"]
Hidden=
[InputText1]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value1:X] + [#s_VariableXPadding])
Y=([Value1:Y] + [#s_ValueYPadding])
H=[Value1:H]
W=([RightPanelContainer:W] - ([Value1:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "Height" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var11]
Meter=String
Text=Minimum height 
MeterStyle=VarTitle | RightPanel
[Var11Description]
Meter=String
Text=Minimum height of the bars
MeterStyle=VarDescription | RightPanel
[Value11]
Meter=String
Text=[#MinimumHeight]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText11" "ExecuteBatch All"][!Log "InputText11"]
Hidden=
[InputText11]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value11:X] + [#s_VariableXPadding])
Y=([Value11:Y] + [#s_ValueYPadding])
H=[Value11:H]
W=([RightPanelContainer:W] - ([Value11:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "MinimumHeight" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var2]
Meter=String
Text=Bar width 
MeterStyle=VarTitle | RightPanel
[Var2Description]
Meter=String
Text=Width of a single bar
MeterStyle=VarDescription | RightPanel
[Value2]
Meter=String
Text=[#BarWidth]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText2" "ExecuteBatch All"][!Log "InputText2"]
Hidden=
[InputText2]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value2:X] + [#s_VariableXPadding])
Y=([Value2:Y] + [#s_ValueYPadding])
H=[Value2:H]
W=([RightPanelContainer:W] - ([Value2:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "BarWidth" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var3]
Meter=String
Text=Bar gap 
MeterStyle=VarTitle | RightPanel
[Var3Description]
Meter=String
Text=Gap between each bar
MeterStyle=VarDescription | RightPanel
[Value3]
Meter=String
Text=[#BarGap]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText3" "ExecuteBatch All"][!Log "InputText3"]
Hidden=
[InputText3]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value3:X] + [#s_VariableXPadding])
Y=([Value3:Y] + [#s_ValueYPadding])
H=[Value3:H]
W=([RightPanelContainer:W] - ([Value3:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "BarGap" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var4]
Meter=String
Text=Outline thickness
MeterStyle=VarTitle | RightPanel
[Var4Description]
Meter=String
Text=Controls the stroke width of bar outlines. Set to 0 for no stroke
MeterStyle=VarDescription | RightPanel
[Value4]
Meter=String
Text=[#BarStrokeWidth]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText4" "ExecuteBatch All"][!Log "InputText4"]
Hidden=
[InputText4]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value4:X] + [#s_VariableXPadding])
Y=([Value4:Y] + [#s_ValueYPadding])
H=[Value4:H]
W=([RightPanelContainer:W] - ([Value4:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "BarStrokeWidth" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var5]
Meter=String
Text=Corner rounding 
MeterStyle=VarTitle | RightPanel
[Var5Description]
Meter=String
Text=Set to half of bar width for fully rounded bars.
MeterStyle=VarDescription | RightPanel
[Value5]
Meter=String
Text=[#CornerRounding]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText5" "ExecuteBatch All"][!Log "InputText5"]
Hidden=
[InputText5]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value5:X] + [#s_VariableXPadding])
Y=([Value5:Y] + [#s_ValueYPadding])
H=[Value5:H]
W=([RightPanelContainer:W] - ([Value5:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "CornerRounding" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var6]
Meter=String
Text=Levitation 
MeterStyle=VarTitle | RightPanel
[Var6Description]
Meter=String
Text=The amount bars will float up
MeterStyle=VarDescription | RightPanel
[Value6]
Meter=String
Text=[#Levitate]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText6" "ExecuteBatch All"][!Log "InputText6"]
Hidden=
[InputText6]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value6:X] + [#s_VariableXPadding])
Y=([Value6:Y] + [#s_ValueYPadding])
H=[Value6:H]
W=([RightPanelContainer:W] - ([Value6:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "Levitate" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var9]
Meter=String
Text=Flip
MeterStyle=VarTitle | RightPanel
[Var9Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel

[ToggleOff9]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#flipBool])
Y=([Var9Description:Y] + [Var9Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "flipBool" 1 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "flipBool" 1][!Update][!Redraw][!Log "Toggled Flip on"]
Hidden=

[ToggleOn9]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#flipBool] - 1)
Y=([Var9Description:Y] + [Var9Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "flipBool" 0 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "flipBool" 0][!Update][!Redraw][!Log "Toggled Flip off"]
Hidden=

[ClearFloat9]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
Hidden=
MeterStyle=RightPanel
Y=([Var9Description:Y] + [Var9Description:H])
DynamicVariables=1


[Var10]
Meter=String
Text=Angle 
MeterStyle=VarTitle | RightPanel
[Var10Description]
Meter=String
Text=Rotates the whole visualizer
MeterStyle=VarDescription | RightPanel
[Value10]
Meter=String
Text=[#Angle]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText10" "ExecuteBatch All"][!Log "InputText10"]
Hidden=
[InputText10]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value10:X] + [#s_VariableXPadding])
Y=([Value10:Y] + [#s_ValueYPadding])
H=[Value10:H]
W=([RightPanelContainer:W] - ([Value10:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "Angle" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var12]
Meter=String
Text=Update rate (ms)
MeterStyle=VarTitle | RightPanel
[Var12Description]
Meter=String
Text=Controls the FPS of the visualizer. #CRLF#The minimum Rainmeter can do is 16, 1000 / 16 = 62 fps
MeterStyle=VarDescription | RightPanel
[Value12]
Meter=String
Text=[#UpdateRate]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText12" "ExecuteBatch All"][!Log "InputText12"]
Hidden=
[InputText12]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value12:X] + [#s_VariableXPadding])
Y=([Value12:Y] + [#s_ValueYPadding])
H=[Value12:H]
W=([RightPanelContainer:W] - ([Value12:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "UpdateRate" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

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


