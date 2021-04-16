[EllipseSett]
Meter=Shape
Shape=Ellipse (200*[#Scale]),(612*[#Scale]), (3*[#Scale]),(3*[#Scale]) | Fill Color FFFFFF
LeftMouseUpAction=[!WriteKeyValue Variables TabState "0"][!SetVariable TabState "0"][!UpdateMeterGroup SuperContainers][!Redraw][!UpdateMeasureGroup Hiders]

[EllipseEqua]
Meter=Shape
Shape=Ellipse (230*[#Scale]),(612*[#Scale]), (3*[#Scale]),(3*[#Scale]) | Fill Color FFFFFF
LeftMouseUpAction=[!WriteKeyValue Variables TabState "1"][!SetVariable TabState "1"][!UpdateMeterGroup SuperContainers][!Redraw][!UpdateMeasureGroup Hiders]

[EllipseCol]
Meter=Shape
Shape=Ellipse (260*[#Scale]),(612*[#Scale]), (3*[#Scale]),(3*[#Scale]) | Fill Color FFFFFF
LeftMouseUpAction=[!WriteKeyValue Variables TabState "2"][!SetVariable TabState "2"][!UpdateMeterGroup SuperContainers][!Redraw][!UpdateMeasureGroup Hiders]

[EllipseImg]
Meter=Shape
Shape=Ellipse (290*[#Scale]),(612*[#Scale]), (3*[#Scale]),(3*[#Scale]) | Fill Color FFFFFF
LeftMouseUpAction=[!WriteKeyValue Variables TabState "3"][!SetVariable TabState "3"][!UpdateMeterGroup SuperContainers][!Redraw][!UpdateMeasureGroup Hiders]


[EllipseActive]
Meter=Shape
X=(200*[#Scale]+ 30*[#Scale]*[#TabState])
Y=(612*[#Scale])
Shape=Ellipse 0,0, (4*[#Scale]),(4*[#Scale]) | StrokeWidth 0 | Fill Color 2DB47F
MyGrad=135 | 30B282;0.0 | 7C5DEC;1.0
Group=SuperContainers
DynamicVariables=1