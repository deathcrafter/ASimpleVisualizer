[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon9]
Meter=String
Text=[\xE994]
MeterStyle=CategoryIcon | RightPanel

[Title9]
Meter=String
Text=AudioLevel 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon9:W])

[CategoryDescription9]
Meter=String
Text=Settings for AudioLevel 
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator9]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[Var0]
Meter=String
Text=Use AudioLevel
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
Hidden=([#EquaBoolAud])
Y=([Var0Description:Y] + [Var0Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "EquaTypeBool" 0 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "EquaTypeBool" 0][!SetVariable "EquaBoolAud" 1][!Update][!Redraw][!Log "Toggled Use AudioLevel on"]
Hidden=

[ToggleOn0]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#EquaBoolAud] - 1)
Y=([Var0Description:Y] + [Var0Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "EquaTypeBool" 1 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "EquaTypeBool" 1][!SetVariable "EquaBoolAud" 0][!Update][!Redraw][!Log "Toggled Use AudioLevel off"]
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
Text=Minimum Frequency
MeterStyle=VarTitle | RightPanel
[Var1Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value1]
Meter=String
Text=[#MinFrequency]
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
Command1=[!WriteKeyValue "Variables" "MinFrequency" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var2]
Meter=String
Text=Maximum Frequency 
MeterStyle=VarTitle | RightPanel
[Var2Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value2]
Meter=String
Text=[#MaxFrequency]
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
Command1=[!WriteKeyValue "Variables" "MaxFrequency" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var3]
Meter=String
Text=Resolution 
MeterStyle=VarTitle | RightPanel
[Var3Description]
Meter=String
Text=Usually an even number, preferrably a power of 2
MeterStyle=VarDescription | RightPanel
[Value3]
Meter=String
Text=[#FFTSize]
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
Command1=[!WriteKeyValue "Variables" "FFTSize" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var4]
Meter=String
Text=Attack
MeterStyle=VarTitle | RightPanel
[Var4Description]
Meter=String
Text=The rise speed
MeterStyle=VarDescription | RightPanel
[Value4]
Meter=String
Text=[#FFTAttack]
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
Command1=[!WriteKeyValue "Variables" "FFTAttack" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var5]
Meter=String
Text=Decay
MeterStyle=VarTitle | RightPanel
[Var5Description]
Meter=String
Text=The fall speed
MeterStyle=VarDescription | RightPanel
[Value5]
Meter=String
Text=[#FFTDecay]
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
Command1=[!WriteKeyValue "Variables" "FFTDecay" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var6]
Meter=String
Text=Sensitivity 
MeterStyle=VarTitle | RightPanel
[Var6Description]
Meter=String
Text=Higher value = reacts to quieter sounds
MeterStyle=VarDescription | RightPanel
[Value6]
Meter=String
Text=[#Sensitivity]
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
Command1=[!WriteKeyValue "Variables" "Sensitivity" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
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


