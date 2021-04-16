[EllipseSett]
Meter=Shape
Shape=Ellipse 200,612, 3,3 | Fill Color FFFFFF
LeftMouseUpAction=[!WriteKeyValue Variables TabState "0"][!SetVariable TabState "0"][!UpdateMeterGroup SuperContainers][!Redraw][!UpdateMeasureGroup Hiders]

[EllipseEqua]
Meter=Shape
Shape=Ellipse 230,612, 3,3 | Fill Color FFFFFF
LeftMouseUpAction=[!WriteKeyValue Variables TabState "1"][!SetVariable TabState "1"][!UpdateMeterGroup SuperContainers][!Redraw][!UpdateMeasureGroup Hiders]

[EllipseCol]
Meter=Shape
Shape=Ellipse 260,612, 3,3 | Fill Color FFFFFF
LeftMouseUpAction=[!WriteKeyValue Variables TabState "2"][!SetVariable TabState "2"][!UpdateMeterGroup SuperContainers][!Redraw][!UpdateMeasureGroup Hiders]

[EllipseImg]
Meter=Shape
Shape=Ellipse 290,612, 3,3 | Fill Color FFFFFF
LeftMouseUpAction=[!WriteKeyValue Variables TabState "3"][!SetVariable TabState "3"][!UpdateMeterGroup SuperContainers][!Redraw][!UpdateMeasureGroup Hiders]


[EllipseActive]
Meter=Shape
X=(200+ 30*[#TabState])
Y=612
Shape=Ellipse 0,0, 4,4 | StrokeWidth 0 | Fill Color 2DB47F
MyGrad=135 | 30B282;0.0 | 7C5DEC;1.0
Group=SuperContainers
DynamicVariables=1