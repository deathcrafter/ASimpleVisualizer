[Close]
Meter=Image
ImageName=#@#Images\close
H=40
X=225
Y=625
SolidColor=0,0,0,1
LeftMouseUpAction=[!WriteKeyValue Variables OffSetY "0"][!DeactivateConfig]
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
@includeColorMeasures=#@#MeasuresandBars\ColorMeasures.inc
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[SuperScript]
Measure=Script
ScriptFile=#@#Factories\SuperFactory.lua
UpdateDivider=-1
