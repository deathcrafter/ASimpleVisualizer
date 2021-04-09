[ScriptBars]
Measure=Script
ScriptFile=#@#Factories\BarFactory.lua
IncFile=#@#MeasuresandBars\NormalA.inc
Number=#Bands#
SectionName=MeterBand%%
Option0=Meter
Value0=Shape
Option1=X
Value1=3R
Option2=Y
Value2=#Height# + #Levitate# + 5
Option3=MeasureName
Value3=MeasureBand{%%}
Option4=Shape
Value4=Rectangle 0, (100 - #Levitate#*[MeasureBand{%%}]), {&&}, (-1*(#Height#*[MeasureBand{%%}])), 3 | StrokeWidth 0 | Extend MyModifiers
Option5=MyModifiers
Value5=Fill Color #Color{%%}#
Option6=DynamicVariables
Value6=1
UpdateDivider=-1

[ScriptReflections]
Measure=Script
ScriptFile=#@#Factories\ReflectionFactory.lua
IncFile=#@#MeasuresandBars\NormalReflection.inc
Number=#Bands#
SectionName=MeterReflectionBand%%
Option0=Meter
Value0=Shape
Option1=X
Value1=3R
Option2=Y
Value2=#Height# + #Levitate# + 15
Option3=MeasureName
Value3=MeasureBand{%%}
Option4=Shape
Value4=Rectangle 0, (100 + #Levitate#*[MeasureBand{%%}]), [MeterBand{%%}:W], (#Height#*[MeasureBand{%%}]), 3 | StrokeWidth 0 | Fill LinearGradient MyFillGradient#CRLF#MyFillGradient=90 | #Color{%%}#,0;0.0 | #Color{%%}#,0;0.3 | #Color{%%}#,150;1.0
Option5=DynamicVariables
Value5=1
UpdateDivider=-1