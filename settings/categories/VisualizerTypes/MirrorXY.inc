[Var]
Meter=String
Text=First X-Offset
MeterStyle=VarTitle | RightPanel
[VarDescription]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value0]
Meter=String
Text=[#MirrorXY_G1XOffset]
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
Command1=[!WriteKeyValue "Variables" "MirrorXY_G1XOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]

[Var1]
Meter=String
Text=Second X-Offset
MeterStyle=VarTitle | RightPanel
[Var1Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value1]
Meter=String
Text=[#MirrorXY_G2XOffset]
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
Command1=[!WriteKeyValue "Variables" "MirrorXY_G2XOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]

[Var2]
Meter=String
Text=Third X-Offset
MeterStyle=VarTitle | RightPanel
[Var2Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value2]
Meter=String
Text=[#MirrorXY_G3XOffset]
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
Command1=[!WriteKeyValue "Variables" "MirrorXY_G3XOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]

[Var3]
Meter=String
Text=Fourth X-Offset
MeterStyle=VarTitle | RightPanel
[Var3Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value3]
Meter=String
Text=[#MirrorXY_G4XOffset]
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
Command1=[!WriteKeyValue "Variables" "MirrorXY_G4XOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]

[Var4]
Meter=String
Text=First Y-Offset
MeterStyle=VarTitle | RightPanel
[Var4Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value4]
Meter=String
Text=[#MirrorXY_G1YOffset]
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
Command1=[!WriteKeyValue "Variables" "MirrorXY_G1YOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]

[Var5]
Meter=String
Text=Second Y-Offset
MeterStyle=VarTitle | RightPanel
[Var5Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value5]
Meter=String
Text=[#MirrorXY_G2YOffset]
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
Command1=[!WriteKeyValue "Variables" "MirrorXY_G2YOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]

[Var6]
Meter=String
Text=Third Y-Offset
MeterStyle=VarTitle | RightPanel
[Var6Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value6]
Meter=String
Text=[#MirrorXY_G3YOffset]
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
Command1=[!WriteKeyValue "Variables" "MirrorXY_G3YOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]

[Var7]
Meter=String
Text=Fourth Y-Offset
MeterStyle=VarTitle | RightPanel
[Var7Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value7]
Meter=String
Text=[#MirrorXY_G4YOffset]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText7" "ExecuteBatch All"][!Log "InputText7"]
Hidden=
[InputText7]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value7:X] + [#s_VariableXPadding])
Y=([Value7:Y] + [#s_ValueYPadding])
H=[Value7:H]
W=([RightPanelContainer:W] - ([Value7:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "MirrorXY_G4YOffset" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
