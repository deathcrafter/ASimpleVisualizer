[Var]
Meter=String
Text=Reflection Percentage 
MeterStyle=VarTitle | RightPanel
[Var Description]
Meter=String
Text=Reflection length (% of main vis height)
MeterStyle=VarDescription | RightPanel
[Value0]
Meter=String
Text=[#ReflectionPercentage]
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
Command1=[!WriteKeyValue "Variables" "ReflectionPercentage" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var1]
Meter=String
Text=Reflection Distance
MeterStyle=VarTitle | RightPanel
[Var1Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value1]
Meter=String
Text=[#ReflectionDistance]
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
Command1=[!WriteKeyValue "Variables" "ReflectionDistance" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]

[Var2]
Meter=String
Text=Visualizer X-Offset
MeterStyle=VarTitle | RightPanel
[Var2Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value2]
Meter=String
Text=[#Reflection_G1XOffset]
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
Command1=[!WriteKeyValue "Variables" "Reflection_G1XOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var3]
Meter=String
Text=Reflection X-Offset
MeterStyle=VarTitle | RightPanel
[Var3Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value3]
Meter=String
Text=[#Reflection_G2XOffset]
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
Command1=[!WriteKeyValue "Variables" "Reflection_G2XOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1
