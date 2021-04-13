[Variables]

Bands=12

Height=600

BarWidth=20

BarGap=7

BarStrokeWidth=2

CornerRounding=5

Levitate=20

Angle=0

FFTSize=2048
FFTAttack=15
FFTDecay=650

BarType=Shape

Reflection=

[ImageCover]
Meter=Image
X=0
Y=0
H=([#Height]+[#Levitate])
W=(([#BarWidth]+[#BarGap])*[#Bands] - [#BarGap])
ImageName=#@#Images\F.jpg
TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*[ImageCover:W]:0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*[ImageCover:H]:0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*[ImageCover:W]:0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*[ImageCover:H]:0))
DynamicVariables=1
Container=MeterShape