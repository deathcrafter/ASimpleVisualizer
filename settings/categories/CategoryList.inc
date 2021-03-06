[FirstLeftPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | LeftPanel
Y=[#s_ScrollLeftPanel]
[ListIcon0]
Meter=String
Text=
Y=[#s_ListAboutTopPadding]R
MeterStyle=ListIcon | ListAboutIcon | LeftPanel
[ListItem0]
Meter=String
Text=About 
MeterStyle=ListItem | ListAboutItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon0:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 0) ? [#s_SelectedFontWeight] : [#s_VariableTitleFontWeight]
FontColor=#s_FontColor#
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 0 "includes\Variables.inc"][!Refresh]
ToolTipTitle=Settings 
ToolTipText=

[ListIcon1]
Meter=String
Text=[\xE771]
MeterStyle=ListIcon | ListTopicIcon | LeftPanel
[ListItem1]
Meter=String
Text=Personalization
MeterStyle=ListItem | ListTopicItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon1:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 1) ? [#s_SelectedFontWeight] : [#s_FontWeight]
ToolTipTitle=Personalization
ToolTipText=

[ListIcon2]
Meter=String
Text=[\xF61F]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
[ListItem2]
Meter=String
Text=Visualizer Settings 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon2:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 2) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 2 "includes\Variables.inc"][!Refresh]
ToolTipTitle=Visualizer Settings 
ToolTipText=


[ListIcon3]
Meter=String
Text=[\xE74C]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
[ListItem3]
Meter=String
Text=Visualizer Types 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon3:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 3) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 3 "includes\Variables.inc"][!Refresh]
ToolTipTitle=Visualizer Types 
ToolTipText=


[ListIcon4]
Meter=String
Text=[\xE81E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
[ListItem4]
Meter=String
Text=Image Underlay 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon4:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 4) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 4 "includes\Variables.inc"][!Refresh]
ToolTipTitle=Image Underlay 
ToolTipText=


[ListIcon5]
Meter=String
Text=[\xE790]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
[ListItem5]
Meter=String
Text=Colors 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon5:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 5) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 5 "includes\Variables.inc"][!Refresh]
ToolTipTitle=Colors 
ToolTipText=

[ListIcon60]
Meter=String
Text=[\xE9A6]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
[ListItem60]
Meter=String
Text=Presets 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon6:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 6) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 60 "includes\Variables.inc"][!Refresh]
ToolTipTitle=Presets 
ToolTipText=

[ListIcon6]
Meter=String
Text=[\xF4C3]
MeterStyle=ListIcon | ListTopicIcon | LeftPanel
[ListItem6]
Meter=String
Text=Equalizer Settings 
MeterStyle=ListItem | ListTopicItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon6:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 6) ? [#s_SelectedFontWeight] : [#s_FontWeight]
ToolTipTitle=Equalizer Settings 
ToolTipText=


[ListIcon7]
Meter=String
Text=[\xE95B]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
[ListItem7]
Meter=String
Text=Device 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon7:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 7) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 7 "includes\Variables.inc"][!Refresh]
ToolTipTitle=Device 
ToolTipText=


[ListIcon8]
Meter=String
Text=[\xF0ED]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
[ListItem8]
Meter=String
Text=AudioAnalyzer 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon8:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 8) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 8 "includes\Variables.inc"][!Refresh]
ToolTipTitle=AudioAnalyzer 
ToolTipText=


[ListIcon9]
Meter=String
Text=[\xE994]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
[ListItem9]
Meter=String
Text=AudioLevel 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon9:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 9) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 9 "includes\Variables.inc"][!Refresh]
ToolTipTitle=AudioLevel 
ToolTipText=


[LastLeftPanel]
Meter=String
Text=Last
FontColor=0,0,0,0
MeterStyle=LastItem | LeftPanel

[ScrollDownLeftPanel]
Measure=Calc
Formula=[#s_ScrollLeftPanel] - [#s_ScrollSpeed]
IfCondition=([LastLeftPanel:Y] > [#s_ScrollTreshold])
IfTrueAction=[!SetVariable "s_ScrollLeftPanel" "[&ScrollDownLeftPanel]"][!DisableMeasure "ScrollDownLeftPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollDownLeftPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[ScrollUpLeftPanel]
Measure=Calc
Formula=[#s_ScrollLeftPanel] + [#s_ScrollSpeed]
IfCondition=([FirstLeftPanel:Y] < 0)
IfTrueAction=[!SetVariable "s_ScrollLeftPanel" "[&ScrollUpLeftPanel]"][!DisableMeasure "ScrollUpLeftPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollUpLeftPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[CreditIcon]
Meter=String
Text=[\xF259]
MeterStyle=ListIcon | ListTopicIcon
X=760
Y=([#s_PanelH] - [CreditItem:H] + 15)
Angle=(Rad(270))
DynamicVariables=1
[CreditItem]
Meter=String
Text=Generated by Settings
X=9r
Y=-25r
SolidColor=0,0,0,0
MeterStyle=ListItem | ListTopicItem | Link
W=([#s_LeftPanelW] - ([CreditIcon:W] + [#s_ListRightPadding]))
FontWeight=[#s_FontWeight]
Angle=(Rad(270))
ToolTipTitle=Generated by Settings
ToolTipText=https://github.com/sceleri/settings
LeftMouseUpAction=["https://github.com/sceleri/settings"]
DynamicVariables=1
SolidColor=[#s_LeftPanelBackgroundColor]


