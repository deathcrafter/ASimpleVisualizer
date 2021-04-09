[MeterBand0]
Meter=Shape
X=5
Y=15
Shape=Rectangle 0, (100 - 10*[MeasureBand0]), 7, (-1*(100*[MeasureBand0])), 1.8 | StrokeWidth 0
DynamicVariables=1

[MeterBand1]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand1]) , 15, (-1*(100*[MeasureBand1])), 3 | StrokeWidth 0
DynamicVariables=1

[MeterBand2]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand2]), 10, (-1*(100*[MeasureBand2])), 2 | StrokeWidth 0
DynamicVariables=1

[MeterBand3]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand3]), 25, (-1*(100*[MeasureBand3])), 3.5 | StrokeWidth 0
DynamicVariables=1

[MeterBand4]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand4]), 12, (-1*(100*[MeasureBand4])), 2.5 | StrokeWidth 0
DynamicVariables=1

[MeterBand5]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand5]), 6, (-1*(100*[MeasureBand5])), 1.7 | StrokeWidth 0
DynamicVariables=1

[MeterBand6]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand6]), 20, (-1*(100*[MeasureBand6])), 3.2 | StrokeWidth 0
DynamicVariables=1

[MeterBand7]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand7]), 13, (-1*(100*[MeasureBand7])), 2.7 | StrokeWidth 0
DynamicVariables=1

[MeterBand8]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand8]), 10, (-1*(100*[MeasureBand8])), 2 | StrokeWidth 0
DynamicVariables=1

[MeterBand9]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand9]), 14, (-1*(100*[MeasureBand9])), 2.8 | StrokeWidth 0
DynamicVariables=1

[MeterBand10]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand10]), 7, (-1*(100*[MeasureBand10])), 1.8 | StrokeWidth 0
DynamicVariables=1

[MeterBand11]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand11]), 11, (-1*(100*[MeasureBand11])), 2.4 | StrokeWidth 0
DynamicVariables=1

[MeterBand12]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand12]), 18, (-1*(100*[MeasureBand12])), 3.1 | StrokeWidth 0
DynamicVariables=1

[MeterBand13]
Meter=Shape
X=3R
Y=0r
Shape=Rectangle 0, (100 - 10*[MeasureBand13]), 6, (-1*(100*[MeasureBand13])), 1.7 | StrokeWidth 0
DynamicVariables=1


[Red1]
Measure=String
String=#ColorA#
RegExpSubstitute=1
Substitute="^(\d+)\,\s*?(\d+)\,\s*?(\d+)$" : "\1"
UpdateDivider=-1

[Green1]
Measure=String
String=#ColorA#
RegExpSubstitute=1
Substitute="^(\d+)\,\s*?(\d+)\,\s*?(\d+)$" : "\2"
UpdateDivider=-1

[Blue1]
Measure=String
String=#ColorA#
RegExpSubstitute=1
Substitute="^(\d+)\,\s*?(\d+)\,\s*?(\d+)$" : "\3"
UpdateDivider=-1

[Red2]
Measure=String
String=#ColorB#
RegExpSubstitute=1
Substitute="^(\d+)\,\s*?(\d+)\,\s*?(\d+)$" : "\1"
UpdateDivider=-1

[Green2]
Measure=String
String=#ColorB#
RegExpSubstitute=1
Substitute="^(\d+)\,\s*?(\d+)\,\s*?(\d+)$" : "\2"
UpdateDivider=-1

[Blue2]
Measure=String
String=#ColorB#
RegExpSubstitute=1
Substitute="^(\d+)\,\s*?(\d+)\,\s*?(\d+)$" : "\3"
UpdateDivider=-1

