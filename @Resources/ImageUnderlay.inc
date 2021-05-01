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
OnDropAction=[!WriteKeyValue ImageCover ImageName "#SKINSPATH#ASimpleVisualizer\@Resources\CustomImages\$Name$.$Type$" "#SKINSPATH#ASimpleVisualizer\Visualizer\ASimpleVisualizer.ini"][!WriteKeyValue DragImage ImageName "#SKINSPATH#ASimpleVisualizer\@Resources\CustomImages\$Name$.$Type$" "#SKINSPATH#ASimpleVisualizer\@Resources\ImageUnderlay.inc"][!Refresh]

[DragImage]
Meter=Image
ImageName=C:\Users\Sceleri\Documents\Rainmeter\Skins\ASimpleVisualizer\@Resources\CustomImages\hacjikuchi smile.jpg
W=480
H=270
PreserveAspectRatio=1
DynamicVariables=1
SolidColor=30,30,30
Container=DragandDropImageContainer
Group=Images
