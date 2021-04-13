[Variables]
;Visualizer Variables
Bands=9

Height=170

BarWidth=20

BarGap=7

BarStrokeWidth=1.5

CornerRounding=5

Levitate=0

MirrorDistance=5

Angle=90

;Color Variables
ColorCount=2
GradientCount=(#ColorCount#-1)

DefaultColor=0,0,0

ColorA0=48, 178, 130
ColorA1=123, 94, 235
ColorA2=0, 0, 255
ColorA3=0, 255, 0
ColorA4=255, 255, 0
ColorA5=255, 127, 0
ColorA6=255, 0, 0

;Audio Measure Variables
FFTSize=2048
FFTAttack=15
FFTDecay=650
InvertMeasure=1

;BarType : Normal | Reflection | MirrorY | MirrorX | MirrorXY
BarType=MirrorX

;Dont change below
@includeGradient=#@#Variables\Gradient.inc
@includeColorMeasures=#@#MeasuresandBars\ColorMeasures.inc
@includeColorScript=#@#Scripts\Colors.inc


