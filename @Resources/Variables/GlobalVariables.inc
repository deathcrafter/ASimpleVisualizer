[Variables]
Bands=32

Height=200

BarWidth=20

Levitate=20

ColorCount=7
GradientCount=(#ColorCount#-1)

DefaultColor=0,0,0

ColorA0=148, 0, 211
ColorA1=75, 0, 130
ColorA2=0, 0, 255
ColorA3=0, 255, 0
ColorA4=255, 255, 0
ColorA5=255, 127, 0
ColorA6=255, 0, 0

Angle=0
FFTSize=2048
FFTAttack=15
FFTDecay=250

;BarType: Normal | Random | Image
BarType=Normal
;Reflection : Reflection | A if don't want reflection // Image type doesn't have reflections
Reflection=

;Dont change below
@includeGradient=#@#Variables\Gradient.inc