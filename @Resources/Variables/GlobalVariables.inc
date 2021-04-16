[Variables]
;Visualizer Variables
Bands=62

Height=200

BarWidth=15

BarGap=7

BarStrokeWidth=0

CornerRounding=7

Levitate=0

MirrorDistance=4

Angle=0

;Color Variables
ColorCount=2

DefaultColor=0,0,0

ColorA0=17,186,181
ColorA1=123, 94, 235
ColorA2=245,29,112
ColorA3=0, 255, 0
ColorA4=255, 255, 0
ColorA5=255, 127, 0
ColorA6=255, 0, 0


EquaType=Analyzer
EquaDis=1
Type0=[!WriteKeyValue Variables EquaType "Analyzer" "#@#Variables\GlobalVariables.inc"][!WriteKeyValue Variables EquaDis "1" "#@#Variables\GlobalVariables.inc"]
Type1=[!WriteKeyValue Variables EquaType "Level" "#@#Variables\GlobalVariables.inc"][!WriteKeyValue Variables EquaDis "0" "#@#Variables\GlobalVariables.inc"]

Port=Input
Channel=Auto
AnaPort
;AudioLevel Measure Variables

FFTSize=2048
FFTAttack=15
FFTDecay=100
Sensitivity=37
MinFrequency=20
MaxFrequency=20000
InvertMeasure=1


ID={0.0.0.00000000}.{51146494-97ef-4f3f-a95a-2b9dec1ae019}
DeviceName=
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
AnaPortVar=1
AnaPort1=DefaultOutput
Anaport2=DefaultInput
AnaPort3= ID: [#ID]
AnaPortStr1=Output
AnaPortStr2=Input
AnaPortStr3=DevID
AnalyzerPort=[#AnaPort[#AnaPortVar]]
; ------------
FreqMin=20
FreqMax=2000
; ------------
MaxSensitivity=35
MinSensitivity=9
Attack=30
Decay=150
; ------------
BinWidth=15
OverlapBoost=5
CascadesCount=2
; ------------
BlurRadius=0.5





;BarType : Normal | Reflection | MirrorY | MirrorX | MirrorXY
BarType=Normal

;Dont change below
CustomBands=15
CustomBarWidth=20
ImageWidth=460
ImageHeight=300

@includeGradient=#@#Variables\Gradient.inc

[MeasureDeviceID]
Measure=String
String=[#DeviceName]
Substitute="":"None"
UpdateDivider=-1



