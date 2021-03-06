[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon6]
Meter=String
Text=[\xE9A6]
MeterStyle=CategoryIcon | RightPanel

[MouseX]
Measure=Plugin
Plugin=MouseXY
Dimension=X
MaxValue=#SCREENAREAWIDTH#
Group=Mouse

[MouseY]
Measure=Plugin
Plugin=MouseXY
Dimension=Y
MaxValue=#SCREENAREAHEIGHT#
Group=Mouse

[Title6]
Meter=String
Text=Presets
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon6:W])

[CategoryDescription6]
Meter=String
Text=Install community presets or choose from pre-loaded ones 
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator6]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[PresetDrag&DropParent]
Measure=Plugin
Plugin=Drag&Drop

[PresetDragandDropChild]
Measure=Plugin
Plugin=Drag&Drop
Parent=PresetDrag&DropParent
Bounds=PresetImage
Silent=1
Action=Path
ReplaceIfExists=1
OnDropAction=[!SetVariable PresetPath "$File$"][!SetVariable PresetName "$Name$"][!CommandMeasure PresetPSRM MovePresets]

[PresetPSRM]
Measure=Plugin
Plugin=PowershellRM
ExecutionPolicy=bypass
ScriptFile=#@#DeviceID\Preset.ps1

[PresetImage]
Meter=Image
ImageName=[#PresetImage]
X=[#s_VariableXPadding]
Y=R
W=480
H=270
PreserveAspectRatio=1
DynamicVariables=1
SolidColor=0,0,0,60
MeterStyle=RightPanel
LeftMouseUpAction=[!UpdateMeasureGroup Mouse][!ToggleMeterGroup Preset][!UpdateMeterGroup Preset][!Redraw]

[spacerdescription]
Meter=String
Text=Click on the image to select a preset
MeterStyle=VarDescription | RightPanel
Y=10R

[Var0]
Meter=String
Text=Preset: [#PresetName] 
MeterStyle=VarTitle | RightPanel
[Var0Description]
Meter=String
Text=Author: [#AuthorName]
MeterStyle=VarDescription | RightPanel
[Value0]
Meter=String
Text=
MeterStyle=VarStringValue | Link0  | RightPanel
Hidden=
LeftMouseUpAction=[""]

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

@include=Presets.inc
