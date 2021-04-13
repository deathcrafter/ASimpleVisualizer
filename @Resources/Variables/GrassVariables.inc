

[Variables]

Bands=40

Height=200

BarWidth=20

BarGap=7

BarStrokeWidth=2

CornerRounding=5

Levitate=0

Angle=180

FFTSize=2048
FFTAttack=15
FFTDecay=250

BarType=Shape

Reflection=

[ImageCover]
Meter=Image
X=0
Y=0
H=([#Height]+[#Levitate])
W=(([#BarWidth]+[#BarGap])*[#Bands] - [#BarGap])
ImageName=#@#Images\G.jpg
DynamicVariables=1
TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*[ImageCover:W]:0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*[ImageCover:H]:0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*[ImageCover:W]:0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*[ImageCover:H]:0))
Container=MeterShape
