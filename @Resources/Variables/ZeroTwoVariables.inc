[Variables]
Bands=10

Height=170

BarWidth=20

BarGap=7

BarStrokeWidth=1.5

CornerRounding=3

Levitate=0

ReflectionDistance=30

MirrorDistance=5

ColorCount=2
GradientCount=(#ColorCount#-1)

DefaultColor=0,0,0

ColorA0=30, 30, 30
ColorA1=200, 200, 200
ColorA2=0, 0, 255
ColorA3=0, 255, 0
ColorA4=255, 255, 0
ColorA5=255, 127, 0
ColorA6=255, 0, 0

Angle=90

FFTSize=2048
FFTAttack=15
FFTDecay=650
InvertMeasure=1

[ZeroTwo]
Meter=Image
ImageName=#@#Images\Z
H=(2*[#Height]+[#MirrorDistance]+[#Levitate])
W=(2*([#BarWidth]+[#BarGap])*[#Bands] - [#BarGap])
DynamicVariables=1
TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(2*(#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#):0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*(2*#Height#+#MirrorDistance# + #Levitate#):0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*2*#Bands#+2*#BarStrokeWidth#-#BarGap#):0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(2*#Height#+#MirrorDistance# + #Levitate#):0))
Container=MeterShape