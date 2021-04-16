[Close]
Meter=Image
ImageName=#@#Images\close
H=(40*[#Scale])
X=(225*[#Scale])
Y=(625*[#Scale])
SolidColor=0,0,0,1
LeftMouseUpAction=[!WriteKeyValue Variables OffSetYEqua "0"][!DeactivateConfig]
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
@includeColorMeasures=#@#MeasuresandBars\ColorMeasures.inc
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[SuperScript]
Measure=Script
ScriptFile=#@#Factories\SuperFactory.lua
UpdateDivider=-1
