[CustomImageSettings]
Meter=String
Text=Image Settings
X=242
Y=75
Group=Images | SuperContainers
Hidden=(3-[#TabState])
MeterStyle=SubtitleStyle

[ImageContainer]
Meter=Shape
Shape=Rectangle 0,0,360,202,13
X=65
Y=20R
Group=SuperContainers
Hidden=(3-[#TabState])
DynamicVariables=1

[Drag&DropParent]
Measure=Plugin
Plugin=Drag&Drop


[Drag&DropCopy]
Measure=Plugin
Plugin=Drag&Drop
Parent=Drag&DropParent
Bounds=DragImage
Action=Copy
FilePath=#@#CustomImages
Silent=1
ReplaceIfExists=1
OnDropAction=[!WriteKeyValue Variables DefaultImage "#@#CustomImages\$Name$.$Type$"][!WriteKeyValue ImageCover ImageName "#@#CustomImages\$Name$.$Type$" "#SKINSPATH#ASimpleVisualizer\Visualizer\ASimpleVisualizer.ini"][!WriteKeyValue DragImage ImageName "#@#CustomImages\$Name$.$Type$" "#@#GeneratorFiles\ImageWindow.inc"][!Refresh]


[DragImage]
Meter=Image
ImageName=[#DefaultImage]
W=360
H=202
PreserveAspectRatio=1
DynamicVariables=1
SolidColor=30,30,30
Container=ImageContainer
Group=Images

[ImageMenuContainer]
Meter=Shape
X=65
Y=10R
Shape=Rectangle 0,0,360,250,13
MouseScrollDownAction=[!SetVariable OffSetImgY "(Clamp(#OffSetImgY#+60,0,550))"][!UpdateMeterGroup Images][!UpdateMeasureGroup Hiders][!Redraw]
MouseScrollUpAction=[!SetVariable OffSetImgY "(Clamp(#OffSetImgY#-60,0,550))"][!UpdateMeterGroup Images][!UpdateMeasureGroup Hiders][!Redraw]
MouseActionCursor=0
Group=SuperContainers | Images
Hidden=(3-[#TabState])
DynamicVariables=1

[ImageVisualizer]
Meter=String
Text=Image Visualizer
X=10
Y=(10-[#OffSetImgY])
Group=Images
Container=ImageMenuContainer
MeterStyle=ContentStyle

[ImgVisToggleButton]
Meter=Shape
X=240
Y=5r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Fill LinearGradient ColorA
ColorA=180 | 255,0,0,255;0.0 | 0,0,0,0;1.0 
Container=ImageMenuContainer
Group=SuperContainers | Images
Hidden=(3-[#TabState])
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue ImageCover Meter "Image" "#SKINSPATH#ASimpleVisualizer\Visualizer\ASimpleVisualizer.ini"][!WriteKeyValue ImgVisToggleButton ColorA "180 | 0,0,0,0;0.0 | 0,255,0,255;1.0" "#@#GeneratorFiles\ImageWindow.inc"][!Refresh]
RightMouseUpAction=[!WriteKeyValue ImageCover Meter "" "#SKINSPATH#ASimpleVisualizer\Visualizer\ASimpleVisualizer.ini"][!WriteKeyValue ImgVisToggleButton ColorA "180 | 255,0,0,255;0.0 | 0,0,0,0;1.0" "#@#GeneratorFiles\ImageWindow.inc"][!Refresh]


[Howto]
Meter=String
X=10
Y=42r
Text=How to:
Group=Images
Container=ImageMenuContainer
MeterStyle=ContentStyle

[HowtoDesc]
Meter=String
X=10
Y=10R
W=330
H=700
FontFace=Segoe UI
FontColor=FFFFFF
FontSize=12
Group=Images
AntiAlias=1
ClipString=1
Text = "   Drag and drop your image file in the box above.#CRLF#   First take a look at the aspect ratio of your image. Then choose a height and width with same aspect ratio(This step is necessary so that your image doesn't look weirdly misshapen). I would henceforth use your choosen width and height as "imagewidth" and "imageheight". Then comes the math part.#CRLF#Bars#CRLF#   Basically what you have to do is divide the "imagewidth + bargap" by "barwidth + bargap". That would give you the number of bands.#CRLF#Notes: If you choose to mirror along X use half the number of bars.#CRLF#BarWidth#CRLF#   Calculating bar width is pretty much the same. If you choose to keep number of bands constant then divide "imagewidth - bargap*(bands-1)" by "bands". Use half if mirrored along X.#CRLF#Height#CRLF#   If you choose to levitate then height would be "imageheight - levitation". If mirrored along Y then "imageheight - 2*levitation - mirrordistance".#CRLF#   I think this covers the gist of it. Rest you can figure out your self."
Container=ImageMenuContainer
InlinePattern=.*
InlineSetting=Weight | 500
InlinePattern2=#CRLF#Bars#CRLF#
InlineSetting2= GradientColor | 180 | 30B282;0.0 | 7C5DEC;1.0
InlinePattern3=#CRLF#Bars#CRLF#
InlineSetting3= Size | 15
InlinePattern4=#CRLF#BarWidth#CRLF#
InlineSetting4= GradientColor | 180 | 30B282;0.0 | 7C5DEC;1.0
InlinePattern5=#CRLF#BarWidth#CRLF#
InlineSetting5= Size | 15
InlinePattern6=#CRLF#Height#CRLF#
InlineSetting6= GradientColor | 180 | 30B282;0.0 | 7C5DEC;1.0
InlinePattern7=#CRLF#Height#CRLF#
InlineSetting7= Size | 15
InlinePattern8=\"imagewidth\"
InlineSetting8=GradientColor | 180 | DC501C;0.0 | E91C32;1.0
InlinePattern9=\"imageheight\"
InlineSetting9=GradientColor | 180 | DC501C;0.0 | E91C32;1.0
InlinePattern10=\"imagewidth \+ bargap\"
InlineSetting10=GradientColor | 180 | DC501C;0.0 | E91C32;1.0
InlinePattern11=\"barwidth \+ bargap\"
InlineSetting11=GradientColor | 180 | DC501C;0.0 | E91C32;1.0
InlinePattern12=\"imagewidth \- bargap\*\(bands\-1\)\"
InlineSetting12=GradientColor | 180 | DC501C;0.0 | E91C32;1.0
InlinePattern13=\"bands\"
InlineSetting13=GradientColor | 180 | DC501C;0.0 | E91C32;1.0
InlinePattern14=\"imageheight \- levitation\"
InlineSetting14=GradientColor | 180 | DC501C;0.0 | E91C32;1.0
InlinePattern15=\"imageheight \- 2\*levitation \- mirrordistance\"
InlineSetting15=GradientColor | 180 | DC501C;0.0 | E91C32;1.0