[ScriptColorMeasure]
Measure=Script
ScriptFile=#@#Factories\ColorMeasureFactory.lua
IncFile=#@#MeasuresandBars\ColorMeasures.inc
Number=#ColorCount#
SectionName=Color&&&&%%
Option0=Measure
Value0=String
Option1=String
Value1=#ColorA{%%}#
Option2=RegExpSubstitute
Value2=1
Option3=Substitute
Value3="^(\d+)\s*?\,\s*?(\d+)\s*?\,\s*?(\d+)$" : "\
Option4=UpdateDivider
Value4=-1
UpdateDivider=-1
 
[GradientScript]
Measure=Script
ScriptFile=#@#Factories\ColorFactory.lua
IncFile=#@#Variables\Gradient.inc
Number=#GradientCount#
SectionName=Variables
Option0=Color
UpdateDivider=-1