[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon7]
Meter=String
Text=[\xE95B]
MeterStyle=CategoryIcon | RightPanel

[Title7]
Meter=String
Text=Device 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon7:W])

[CategoryDescription7]
Meter=String
Text=Select an audio device
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator7]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[Var0]
Meter=String
Text=Use Device ID 
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
Hidden=([#DeviceIDbool])
Y=([Var0Description:Y] + [Var0Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "DeviceIDbool" 1 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "DeviceIDbool" 1][!Update][!Redraw][!Log "Toggled Use Device ID  on"]
Hidden=

[ToggleOn0]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#DeviceIDbool] - 1)
Y=([Var0Description:Y] + [Var0Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "DeviceIDbool" 0 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "DeviceIDbool" 0][!Update][!Redraw][!Log "Toggled Use Device ID  off"]
Hidden=

[ClearFloat0]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
Hidden=
MeterStyle=RightPanel
Y=([Var0Description:Y] + [Var0Description:H])
DynamicVariables=1

[DeviceIDString]
Measure=String
String=[#DeviceID]
Substitute="":"None"

[DeviceNameString]
Measure=String
String=[#DeviceName]
Substitute="":"None"

[PRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#DeviceID\GetAudioDevices.ps1

[Var2]
Meter=String
Text=Device Name 
MeterStyle=VarTitle | RightPanel
[Var2Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value2]
Meter=String
Text=[&DeviceNameString]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!UpdateMeasureGroup Mouse][!ToggleMeterGroup Devices][!UpdateMeterGroup Devices][!Redraw]

[Var1]
Meter=String
Text=DeviceID
MeterStyle=VarTitle | RightPanel

[Var1Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value1]
Meter=String
Text=[&DeviceIDString]
MouseOverAction=[]
MeterStyle=VarStringValue | RightPanel

[Var3]
Meter=String
Text=Use input
MeterStyle=VarTitle | RightPanel
[Var3Description]
Meter=String
Text=Changes to input monitoring instead of output monitoring
MeterStyle=VarDescription | RightPanel

[ToggleOff3]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#IObool])
Y=([Var3Description:Y] + [Var3Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "IObool" 1 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "IObool" 1][!Update][!Redraw][!Log "Toggled Use Input  on"]
Hidden=

[ToggleOn3]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#IObool] - 1)
Y=([Var3Description:Y] + [Var3Description:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "IObool" 0 "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!SetVariable "IObool" 0][!Update][!Redraw][!Log "Toggled Use Input  off"]
Hidden=

[ClearFloat3]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
Hidden=
MeterStyle=RightPanel
Y=([Var3Description:Y] + [Var3Description:H])
DynamicVariables=1

[Var4]
Meter=String
Text=Channel 
MeterStyle=VarTitle | RightPanel
[Var4Description]
Meter=String
Text=Values: Auto :: FL :: FR :: C :: SL :: SR :: BL :: BR :: BC#CRLF#F = Front :: S = Side :: B = Back :: L = Left :: R = Right :: C = Center 
MeterStyle=VarDescription | RightPanel
[Value4]
Meter=String
Text=[#Channel]
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
Command1=[!WriteKeyValue "Variables" "Channel" "$UserInput$" "#SKINSPATH#ASimpleVisualizer\@Resources\Variables\[#s_PresetFile]"][!Refresh]


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


[GetID]
Meter=Shape
Shape=Rectangle 0,0,100, 20,4 | Fill Color 200,200,200,230
X=450
Y=188
MeterStyle=RightPanel
LeftMouseUpAction=[!CommandMeasure SuperScript() "GetAudioDevices()"][!Delay 2000][!CommandMeasure SuperScript "changePS1()"]
[GetIDStr]
Measure=String
String=[#s_DeviceInstalled]
Substitute= "0":"Install","1":"Refresh"

[GetIDString]
Meter=String
Text=[&GetIDStr]
X=50r
Y=10r
StringAlign=CenterCenter
Antialias=1
FontFace=Segoe UI
FontWeight=400
FontSize=10
MeterStyle=RightPanel

@includeDevices=Devices.inc
