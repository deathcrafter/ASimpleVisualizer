[DragandDropImageContainer]
Meter=Shape
X=([#s_LeftPanelW] + [#s_VariableXPadding] )
Y=(110+[#s_ScrollRightPanel])
Shape=Rectangle 0,0, 480,270,7 | Fill Color 30,30,

[Drag&DropParent]
Measure=Plugin
Plugin=Drag&Drop

[Drag&DropCopy]
Measure=Plugin
Plugin=Drag&Drop
Parent=Drag&DropParent
Bounds=DragImage
Action=Copy
FilePath=#SKINSPATH#ASimpleVisualizer\@Resources\CustomImages
Silent=1
ReplaceIfExists=1
OnDropAction=[!WriteKeyValue Variables ImageUnderlayName $Name$.$Type$ "#@#Variables\[#s_PresetFile]"][!Refresh]

[DragImage]
Meter=Image
ImageName=#@#CustomImages\[#ImageUnderlayName]
W=480
H=270
PreserveAspectRatio=1
DynamicVariables=1
SolidColor=30,30,30
Container=DragandDropImageContainer
Group=Images
