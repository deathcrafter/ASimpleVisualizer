[PresetContainer]
Meter=Image
X=([&MouseX] - [#CURRENTCONFIGX])
Y=([&MouseY] - [#CURRENTCONFIGY])
W=200
H=80
SolidColor=0,0,0
DynamicVariables=1
Hidden=1
Group=Preset
[PresetBackGround]
Meter=Shape
Shape=Rectangle 0,0,200, [PresetContainer:H] | Fill Color 30,30,30,170
DynamicVariables=1
Container=PresetContainer
Hidden=1
Group=Preset
[PresetStringStyle]
X=5
W=190
H=20
FontSize=12
SolidColor=0,0,0,1
FontFace=Segoe UI
FontColor=FFFFFE
Container=PresetContainer
AntiAlias=1
Hidden=1
Group=Preset
[Preset0]
Meter=String
Text="Boxes"
Y=10
MeterStyle=PresetStringStyle
MouseOverAction=[!SetVariable DeleteItem "Boxes"][!SetOption Rainmeter ContextTitle Delete]
MouseLeaveAction=[!SetOption Rainmeter ContextTitle ""]
LeftMouseUpAction=[!WriteKeyValue Variables s_PresetFile Boxes.inc "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[Preset1]
Meter=String
Text="Mouthalizer"
Y=%R
MeterStyle=PresetStringStyle
MouseOverAction=[!SetVariable DeleteItem "Mouthalizer"][!SetOption Rainmeter ContextTitle Delete]
MouseLeaveAction=[!SetOption Rainmeter ContextTitle ""]
LeftMouseUpAction=[!WriteKeyValue Variables s_PresetFile Mouthalizer.inc "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[Preset2]
Meter=String
Text="Original"
Y=%R
MeterStyle=PresetStringStyle
MouseOverAction=[!SetVariable DeleteItem "Original"][!SetOption Rainmeter ContextTitle Delete]
MouseLeaveAction=[!SetOption Rainmeter ContextTitle ""]
LeftMouseUpAction=[!WriteKeyValue Variables s_PresetFile Original.inc "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
