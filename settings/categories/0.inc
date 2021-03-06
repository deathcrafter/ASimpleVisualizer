[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon0]
Meter=String
Text=
MeterStyle=CategoryIcon | RightPanel

[Title0]
Meter=String
Text=About ASimpleVisualizer
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon0:W])

[CategoryDescription0]
Meter=String
Text=A simple visualizer that allows you to configure almost everything
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator0]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[Var1]
Meter=String
Text=Credits 
MeterStyle=VarTitle | RightPanel
[Var1Description]
Meter=String
Text=" Special thanks to: #CRLF# d-grace for the AudioLevel plugin#CRLF# rxtd for the AudioAnalyzer plugin#CRLF# TheAzack9 for the FrostedGlass and Drag & Drop plugins#CRLF# Fawxy for the MouseXY plugin#CRLF# frgnca for the AudioDeviceCmdlets#CRLF# Sceleri for the Settings generator, presets and a lot of help#CRLF# Jax for design ideas and beta testing"
MeterStyle=VarDescription | RightPanel
InlinePattern=d-grace
InlineSetting=Weight | 500
InlinePattern2=rxtd
InlineSetting2=Weight | 500
InlinePattern3=TheAzack9
InlineSetting3=Weight | 500
InlinePattern4=frgnca
InlineSetting4=Weight | 500
InlinePattern5=Sceleri
InlineSetting5=Weight | 500
InlinePattern6=Jax
InlineSetting6=Weight | 500
InlinePattern7=Fawxy
InlineSetting7=Weight | 500
[Value1]
Meter=String
Text=
MeterStyle=VarStringValue | Link | RightPanel
Hidden=
LeftMouseUpAction=[""]

[Var2]
Meter=String
Text=Disclaimers
MeterStyle=VarTitle | RightPanel
[Var2Description]
Meter=String
Text=1. To get the list of audio devices, this skin installs a PowerShell cmdlet called AudioDeviceCmdlets. It is safe but if you don't want to install the cmdlet then refrain from using the install button in the Device page.#CRLF#2. If you are using Image Overlay then it's strongly recommended you turn on hardware acceleration from Rainmeter settings.
MeterStyle=VarDescription | RightPanel
InlinePattern=AudioDeviceCmdlets
InlineSetting=Weight | 500
InlinePattern2=strongly recommended
InlineSetting2=Weight | 500
[Value2]
Meter=String
Text= 
MeterStyle=VarStringValue | Link | RightPanel
Hidden=
LeftMouseUpAction=[" "]

[Var4]
Meter=String
Text=Github 
MeterStyle=VarTitle | RightPanel
[Var4Description]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
[Value4]
Meter=String
Text=https://github.com/deathcrafter/ASimpleVisualizer
MeterStyle=VarStringValue | Link1 | RightPanel
Hidden=
LeftMouseUpAction=["https://github.com/deathcrafter/ASimpleVisualizer"]

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


