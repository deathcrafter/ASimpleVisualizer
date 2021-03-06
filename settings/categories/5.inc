[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon5]
Meter=String
Text=[\xE790]
MeterStyle=CategoryIcon | RightPanel

[Title5]
Meter=String
Text=Colors 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon5:W])

[CategoryDescription5]
Meter=String
Text=The colors of your visualizer 
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator5]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[Var0]
Meter=String
Text=Color count 
MeterStyle=VarTitle | RightPanel
[Var0Description]
Meter=String
Text=Numbers of colors to use in the gradient. Set to 1 for no gradient
MeterStyle=VarDescription | RightPanel
[Value0]
Meter=String
Text=[#ColorCount]
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
Command1=[!WriteKeyValue "Variables" "ColorCount" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var1Title]
Meter=String
Text=Color 1 
MeterStyle=VarTitle | RightPanel
[Var1Description]
Meter=String
Text=Default color or first color in gradients
MeterStyle=VarDescription | RightPanel
[ColorValue1]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA0] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB1" "Run"][!Log "Picking colour ColorA0"]
Hidden=
[StringValue1]
Meter=String
Text=[#ColorA0]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB1" "Run"][!Log "Picking colour ColorA0"]
Hidden=
[RainRGB1]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=ColorA0" "FileName=#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh]

[Var2Title]
Meter=String
Text=Color 2
MeterStyle=VarTitle | RightPanel
[Var2Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[ColorValue2]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA1] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB2" "Run"][!Log "Picking colour ColorA1"]
Hidden=
[StringValue2]
Meter=String
Text=[#ColorA1]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB2" "Run"][!Log "Picking colour ColorA1"]
Hidden=
[RainRGB2]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=ColorA1" "FileName=#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh]

[Var3Title]
Meter=String
Text=Color 3
MeterStyle=VarTitle | RightPanel
[Var3Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[ColorValue3]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA2] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB3" "Run"][!Log "Picking colour ColorA2"]
Hidden=
[StringValue3]
Meter=String
Text=[#ColorA2]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB3" "Run"][!Log "Picking colour ColorA2"]
Hidden=
[RainRGB3]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=ColorA2" "FileName=#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh]

[Var4Title]
Meter=String
Text=Color 4
MeterStyle=VarTitle | RightPanel
[Var4Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[ColorValue4]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA3] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB4" "Run"][!Log "Picking colour ColorA3"]
Hidden=
[StringValue4]
Meter=String
Text=[#ColorA3]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB4" "Run"][!Log "Picking colour ColorA3"]
Hidden=
[RainRGB4]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=ColorA3" "FileName=#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh]

[Var5Title]
Meter=String
Text=Color 5
MeterStyle=VarTitle | RightPanel
[Var5Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[ColorValue5]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA4] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB5" "Run"][!Log "Picking colour ColorA4"]
Hidden=
[StringValue5]
Meter=String
Text=[#ColorA4]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB5" "Run"][!Log "Picking colour ColorA4"]
Hidden=
[RainRGB5]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=ColorA4" "FileName=#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh]

[Var6Title]
Meter=String
Text=Color 6
MeterStyle=VarTitle | RightPanel
[Var6Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[ColorValue6]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA5] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB6" "Run"][!Log "Picking colour ColorA5"]
Hidden=
[StringValue6]
Meter=String
Text=[#ColorA5]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB6" "Run"][!Log "Picking colour ColorA5"]
Hidden=
[RainRGB6]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=ColorA5" "FileName=#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh]

[Var7Title]
Meter=String
Text=Color 7
MeterStyle=VarTitle | RightPanel
[Var7Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[ColorValue7]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA6] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB7" "Run"][!Log "Picking colour ColorA6"]
Hidden=
[StringValue7]
Meter=String
Text=[#ColorA6]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB7" "Run"][!Log "Picking colour ColorA6"]
Hidden=
[RainRGB7]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=ColorA6" "FileName=#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh]

[Var8]
Meter=String
Text=Live alpha
MeterStyle=VarTitle | RightPanel
[Var8Description]
Meter=String
Text=Makes bars fade in and out according to audio level
MeterStyle=VarDescription | RightPanel

[ToggleOff8]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#LiveAlphaBool])
Y=([Var8Description:Y] + [Var8Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "LiveAlphaBool" 1 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "LiveAlphaBool" 1][!Update][!Redraw][!Log "Toggled Live Alpha on"]
Hidden=

[ToggleOn8]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#LiveAlphaBool] - 1)
Y=([Var8Description:Y] + [Var8Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "LiveAlphaBool" 0 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "LiveAlphaBool" 0][!Update][!Redraw][!Log "Toggled Live Alpha off"]
Hidden=

[ClearFloat8]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
Hidden=
MeterStyle=RightPanel
Y=([Var8Description:Y] + [Var8Description:H])
DynamicVariables=1


[Var9]
Meter=String
Text=Max alpha
MeterStyle=VarTitle | RightPanel
[Var9Description]
Meter=String
Text=Default alpha level of the visualizer#CRLF#Tip for live alpha: set this above 255 to make the bars fade out at a lower level
MeterStyle=VarDescription | RightPanel
[Value9]
Meter=String
Text=[#MaxAlpha]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText8" "ExecuteBatch All"][!Log "InputText8"]
Hidden=
[InputText8]
Measure=Plugin
Plugin=InputText
SolidColor=#s_RightPanelBackgroundColor#
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([Value9:X] + [#s_VariableXPadding])
Y=([Value9:Y] + [#s_ValueYPadding])
H=[Value9:H]
W=([RightPanelContainer:W] - ([Value9:X] * 2))
DynamicVariables=1
DefaultValue="Give new value"
Command1=[!WriteKeyValue "Variables" "MaxAlpha" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var10]
Meter=String
Text=Min alpha
MeterStyle=VarTitle | RightPanel
[Var10Description]
Meter=String
Text=Minimum alpha level for live alpha
MeterStyle=VarDescription | RightPanel
[Value10]
Meter=String
Text=[#MinAlpha]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText9" "ExecuteBatch All"][!Log "InputText9"]
Hidden=
[InputText9]
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
Command1=[!WriteKeyValue "Variables" "MinAlpha" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
InputNumber=1

[Var11Title]
Meter=String
Text=Stroke color
MeterStyle=VarTitle | RightPanel
[Var11Description]
Meter=String
Text=Color level of the bar outlines
MeterStyle=VarDescription | RightPanel
[ColorValue11]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#StrokeColor] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB11" "Run"][!Log "Picking colour StrokeColor"]
Hidden=
[StringValue11]
Meter=String
Text=[#StrokeColor]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB11" "Run"][!Log "Picking colour StrokeColor"]
Hidden=
[RainRGB11]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=StrokeColor" "FileName=#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh]

[Var12]
Meter=String
Text=Stroke alpha
MeterStyle=VarTitle | RightPanel
[Var12Description]
Meter=String
Text=Alpha level of the bar outlines
MeterStyle=VarDescription | RightPanel
[Value12]
Meter=String
Text=[#StrokeAlpha]
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
Command1=[!WriteKeyValue "Variables" "StrokeAlpha" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]
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


