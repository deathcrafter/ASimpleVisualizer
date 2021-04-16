[EqualizerSettings]
Meter=String
Text=Equalizer Settings
X=242
Y=75
FontSize=17
FontFace=Segoe UI
FontColor=fffffe
FontWeight=600
StringAlign=Center
AntiAlias=1
DynamicVariables=1
Group=SuperContainers
Hidden=(1-[#TabState])

[EqualizerContainer]
Meter=Shape
X=45
Y=130
Shape = Rectangle 0,0, 400, 450, 15
MouseScrollDownAction=[!SetVariable OffSetYEqua "(Clamp(#OffSetYEqua#+75,0,470))"][!UpdateMeterGroup Equalizer][!UpdateMeasureGroup Hiders][!Redraw]
MouseScrollUpAction=[!SetVariable OffSetYEqua "(Clamp(#OffSetYEqua#-75,0,470))"][!UpdateMeterGroup Equalizer][!UpdateMeasureGroup Hiders][!Redraw]
Group=SuperContainers | Equalizer
MouseActionCursor=0
DynamicVariables=1
Hidden=(1-[#TabState])

[EqualizerType]
Meter=String
X=30
Y=-[#OffSetYEqua]
Text=Equalizer Type
Group=Equalizer
Container=EqualizerContainer
MeterStyle=ContentStyle

[EqualizerTypeButton]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[#Type[#EquaDis]][!Refresh]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[EqualizerTypeString]
Meter=String
X=311
Y=11r
Text=[#EquaType]
StringAlign=CenterCenter
Group=Equalizer
Container=EqualizerContainer
MeterStyle=ButtonTextStyle

[EqualizerChannel]
Meter=String
X=30
Y=30r
Text=Channel
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[EqualizerChannelButton]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!ShowMeterGroup ChannelWarning][!Redraw]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentValueBoxStyle

[EqualizerChannelInputText]
Measure=Plugin
Plugin=InputText
H=([EqualizerChannelButton:H]-5)
W=([EqualizerChannelButton:W]-5)
X=([EqualizerChannelButton:X]+2)
Y=([EqualizerChannelButton:Y]+2)
DefaultValue=[#Channel]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
Command1=[!WriteKeyValue Variables Channel "$UserInput$" "#@#Variables\GlobalVariables.inc"][!Refresh]
DynamicVariables=1
Group=Equalizer
Container=EqualizerContainer

[EqualizerChannelString]
Meter=String
X=311
Y=11r
Text=[#Channel]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[DeviceIDSub]
Meter=String
X=30
Y=30r
Text=Device Name
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[DeviceIDButton]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!ShowMeterGroup DeviceIDInitiation][!Redraw]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentValueBoxStyle

[DeviceIDString]
Meter=String
X=311
Y=11r
Text=[&MeasureDeviceID]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle


[AudioLevel]
Meter=String
X=200
Y=41r
Text=-AudioLevel Settings-
FontSize=12
InlineSetting=GradientColor | 180 | 30B282;0.0 | 7C5DEC;1.0
InlinePattern=.*
InlinePattern2=#CRLF#(.*)$
InlineSetting2=Size | 9
InlinePattern2=#CRLF#(.*)$
InlineSetting2=Weight | 100
Container=EqualizerContainer
MeterStyle=SubtitleStyle

[Port]
Meter=String
X=30
Y=41r
Text=Port
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[PortButton]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[#E[#PortVar]][!Refresh]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentValueBoxStyle

[PortString]
Meter=String
X=311
Y=11r
Text=[#Port]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[FFTSize]
Meter=String
X=30
Y=30r
Text=FFTSize
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[FFTSizeInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!ShowMeterGroup FFTWarning][!Redraw]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[FFTSizeString]
Meter=String
X=311
Y=11r
Text=[#FFTSize]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[FFTSizeInputText]
Measure=Plugin
Plugin=InputText
H=([FFTSizeInputBackGround:H]-5)
W=([FFTSizeInputBackGround:W]-5)
X=([FFTSizeInputBackGround:X]+2)
Y=([FFTSizeInputBackGround:Y]+2)
DefaultValue=[#FFTSize]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables FFTSize "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer



[FFTAttack]
Meter=String
X=30
Y=30r
Text=FFTAttack
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[FFTAttackInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth  2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure FFTAttackInputText "ExecuteBatch 1"]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[FFTAttackString]
Meter=String
Text=[#FFTAttack]
StringAlign=CenterCenter
Container=EqualizerContainer
MeterStyle=ButtonTextStyle | FFTSizeString

[FFTAttackInputText]
Measure=Plugin
Plugin=InputText
H=([FFTAttackInputBackGround:H]-5)
W=([FFTAttackInputBackGround:W]-5)
X=([FFTAttackInputBackGround:X]+2)
Y=([FFTAttackInputBackGround:Y]+2)
DefaultValue=[#FFTAttack]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables FFTAttack "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[FFTDecay]
Meter=String
X=30
Y=30r
Text=FFTDecay
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[FFTDecayInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure FFTDecayInputText "ExecuteBatch 1"]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[FFTDecayString]
Meter=String
Text=[#FFTDecay]
Container=EqualizerContainer
MeterStyle=ButtonTextStyle | FFTSizeString

[FFTDecayInputText]
Measure=Plugin
Plugin=InputText
H=([FFTDecayInputBackGround:H]-5)
W=([FFTDecayInputBackGround:W]-5)
X=([FFTDecayInputBackGround:X]+2)
Y=([FFTDecayInputBackGround:Y]+2)
DefaultValue=[#FFTDecay]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables FFTDecay "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1

[Sensitivity]
Meter=String
X=30
Y=30r
Text=Sensitivity
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[SensitivityInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure SensitivityInputText "ExecuteBatch 1"]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[SensitivityString]
Meter=String
Text=[#Sensitivity]
Container=EqualizerContainer
MeterStyle=ButtonTextStyle | FFTSizeString

[SensitivityInputText]
Measure=Plugin
Plugin=InputText
H=([SensitivityInputBackGround:H]-5)
W=([SensitivityInputBackGround:W]-5)
X=([SensitivityInputBackGround:X]+2)
Y=([SensitivityInputBackGround:Y]+2)
DefaultValue=[#Sensitivity]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables Sensitivity "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1

[MaxFrequency]
Meter=String
X=30
Y=30r
Text=Max. Frequency
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[MaxFrequencyInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure MaxFrequencyInputText "ExecuteBatch 1"]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[MaxFrequencyString]
Meter=String
Text=[#MaxFrequency]
Container=EqualizerContainer
MeterStyle=ButtonTextStyle | FFTSizeString

[MaxFrequencyInputText]
Measure=Plugin
Plugin=InputText
H=([MaxFrequencyInputBackGround:H]-5)
W=([MaxFrequencyInputBackGround:W]-5)
X=([MaxFrequencyInputBackGround:X]+2)
Y=([MaxFrequencyInputBackGround:Y]+2)
DefaultValue=[#MaxFrequency]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables MaxFrequency "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1

[MinFrequency]
Meter=String
X=30
Y=30r
Text=Min. Frequency
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[MinFrequencyInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure MinFrequencyInputText "ExecuteBatch 1"]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[MinFrequencyString]
Meter=String
Text=[#MinFrequency]
Container=EqualizerContainer
MeterStyle=ButtonTextStyle | FFTSizeString

[MinFrequencyInputText]
Measure=Plugin
Plugin=InputText
H=([MinFrequencyInputBackGround:H]-5)
W=([MinFrequencyInputBackGround:W]-5)
X=([MinFrequencyInputBackGround:X]+2)
Y=([MinFrequencyInputBackGround:Y]+2)
DefaultValue=[#MinFrequency]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables MinFrequency "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

[Scroll]
Meter=String
Text=<scroll down for more settings>
Font=Segoe UI
X=245
Y=575
FontSize=9
FontColor=94a1b2
StringAlign=CenterCenter
AntiAlias=1
DynamicVariables=1


[ScrollHider]
Measure=Calc
Formula=[#OffSetYEqua]
ifCondition=(ScrollHider>0) || ([#TabState]=0) || ([#TabState]=2) || ([#TabState]=3)
ifTrueAction=[!HideMeter Scroll][!Redraw]
ifFalseAction=[!ShowMeter Scroll][!Redraw]
DynamicVariables=1
UpdateDivider=-1
Group=Hiders

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[AudioAnalyzerSettings]
Meter=String
X=200
Y=41r
Text=-AudioAnalyzer Settings-
FontSize=12
InlineSetting=GradientColor | 180 | 30B282;0.0 | 7C5DEC;1.0
InlinePattern=.*
InlinePattern2=#CRLF#(.*)$
InlineSetting2=Size | 9
InlinePattern2=#CRLF#(.*)$
InlineSetting2=Weight | 100
Container=EqualizerContainer
MeterStyle=SubtitleStyle

[AnaPort]
Meter=String
X=30
Y=41r
Text=Port
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[AnaPortButton]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Fill Color ffffff00
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
Group=Equalizer

[AnaPortString]
Meter=String
X=311
Y=11r
Text=[#AnaPortStr[#AnaPortVar]]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[AnaPortLeft]
Meter=Image
X=261
Y=-9r
H=20
ImageName=#@#Images\portleft
Group=Equalizer
Container=EqualizerContainer
Hidden=(1-[#TabState])
LeftMouseUpAction=[!WriteKeyValue Variables AnaPortVar "(Clamp([#AnaPortVar]-1, 1, 3))" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1

[AnaPortRight]
Meter=Image
X=339
Y=r
H=20
ImageName=#@#Images\portright
Group=Equalizer
Container=EqualizerContainer
Hidden=(1-[#TabState])
LeftMouseUpAction=[!WriteKeyValue Variables AnaPortVar "(Clamp([#AnaPortVar]+1, 1, 3))" "#@#Variables\GlobalVariables.inc"]#R2#[!Refresh]
DynamicVariables=1

[Attack]
Meter=String
X=30
Y=41r
Text=Attack
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[AttackInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure AttackInputText "ExecuteBatch 1"][!Redraw]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[AttackString]
Meter=String
X=311
Y=11r
Text=[#Attack]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[AttackInputText]
Measure=Plugin
Plugin=InputText
H=([AttackInputBackGround:H]-5)
W=([AttackInputBackGround:W]-5)
X=([AttackInputBackGround:X]+2)
Y=([AttackInputBackGround:Y]+2)
DefaultValue=[#Attack]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables Attack "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[Decay]
Meter=String
X=30
Y=30r
Text=Decay
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[DecayInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure DecayInputText "ExecuteBatch 1"][!Redraw]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[DecayString]
Meter=String
X=311
Y=11r
Text=[#Decay]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[DecayInputText]
Measure=Plugin
Plugin=InputText
H=([DecayInputBackGround:H]-5)
W=([DecayInputBackGround:W]-5)
X=([DecayInputBackGround:X]+2)
Y=([DecayInputBackGround:Y]+2)
DefaultValue=[#Decay]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables Decay "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[BinWidth]
Meter=String
X=30
Y=30r
Text=BinWidth
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[BinWidthInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure BinWidthInputText "ExecuteBatch 1"]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[BinWidthString]
Meter=String
X=311
Y=11r
Text=[#BinWidth]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[BinWidthInputText]
Measure=Plugin
Plugin=InputText
H=([BinWidthInputBackGround:H]-5)
W=([BinWidthInputBackGround:W]-5)
X=([BinWidthInputBackGround:X]+2)
Y=([BinWidthInputBackGround:Y]+2)
DefaultValue=[#BinWidth]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables BinWidth "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[OverlapBoost]
Meter=String
X=30
Y=30r
Text=Overlap Boost
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[OverlapBoostInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure OverlapBoostInputText "ExecuteBatch 1"]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[OverlapBoostString]
Meter=String
X=311
Y=11r
Text=[#OverlapBoost]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[OverlapBoostInputText]
Measure=Plugin
Plugin=InputText
H=([OverlapBoostInputBackGround:H]-5)
W=([OverlapBoostInputBackGround:W]-5)
X=([OverlapBoostInputBackGround:X]+2)
Y=([OverlapBoostInputBackGround:Y]+2)
DefaultValue=[#OverlapBoost]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables OverlapBoost "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[CascadesCount]
Meter=String
X=30
Y=30r
Text=Cascades Count
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[CascadesCountInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure CascadesCountInputText "ExecuteBatch 1"]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[CascadesCountString]
Meter=String
X=311
Y=11r
Text=[#CascadesCount]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[CascadesCountInputText]
Measure=Plugin
Plugin=InputText
H=([CascadesCountInputBackGround:H]-5)
W=([CascadesCountInputBackGround:W]-5)
X=([CascadesCountInputBackGround:X]+2)
Y=([CascadesCountInputBackGround:Y]+2)
DefaultValue=[#CascadesCount]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables CascadesCount "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[FreqMax]
Meter=String
X=30
Y=30r
Text=Max. Frequency
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[FreqMaxInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure FreqMaxInputText "ExecuteBatch 1"][!Redraw]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentValueBoxStyle

[FreqMaxString]
Meter=String
X=311
Y=11r
Text=[#FreqMax]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[FreqMaxInputText]
Measure=Plugin
Plugin=InputText
H=([FreqMaxInputBackGround:H]-5)
W=([FreqMaxInputBackGround:W]-5)
X=([FreqMaxInputBackGround:X]+2)
Y=([FreqMaxInputBackGround:Y]+2)
DefaultValue=[#FreqMax]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables FreqMax "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[FreqMin]
Meter=String
X=30
Y=30r
Text=Min. Frequency
Group=Equalizer
Container=EqualizerContainer
MeterStyle=ContentStyle

[FreqMinInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure FreqMinInputText "ExecuteBatch 1"][!Redraw]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentValueBoxStyle

[FreqMinString]
Meter=String
X=311
Y=11r
Text=[#FreqMin]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[FreqMinInputText]
Measure=Plugin
Plugin=InputText
H=([FreqMinInputBackGround:H]-5)
W=([FreqMinInputBackGround:W]-5)
X=([FreqMinInputBackGround:X]+2)
Y=([FreqMinInputBackGround:Y]+2)
DefaultValue=[#FreqMin]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables FreqMin "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[MaxSensitivity]
Meter=String
X=30
Y=30r
Text=Max. Sensitivity
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[MaxSensitivityInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure MaxSensitivityInputText "ExecuteBatch 1"][!Redraw]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[MaxSensitivityString]
Meter=String
X=311
Y=11r
Text=[#MaxSensitivity]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[MaxSensitivityInputText]
Measure=Plugin
Plugin=InputText
H=([MaxSensitivityInputBackGround:H]-5)
W=([MaxSensitivityInputBackGround:W]-5)
X=([MaxSensitivityInputBackGround:X]+2)
Y=([MaxSensitivityInputBackGround:Y]+2)
DefaultValue=[#MaxSensitivity]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables MaxSensitivity "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[MinSensitivity]
Meter=String
X=30
Y=30r
Text=Min. Sensitivity
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ContentStyle

[MinSensitivityInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure MinSensitivityInputText "ExecuteBatch 1"][!Redraw]
Hidden=(1-[#TabState])
Group=SuperContainers | Equalizer
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[MinSensitivityString]
Meter=String
X=311
Y=11r
Text=[#MinSensitivity]
StringAlign=CenterCenter
Container=EqualizerContainer
Group=Equalizer
MeterStyle=ButtonTextStyle

[MinSensitivityInputText]
Measure=Plugin
Plugin=InputText
H=([MinSensitivityInputBackGround:H]-5)
W=([MinSensitivityInputBackGround:W]-5)
X=([MinSensitivityInputBackGround:X]+2)
Y=([MinSensitivityInputBackGround:Y]+2)
DefaultValue=[#MinSensitivity]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables MinSensitivity "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer

[BlurRadius]
Meter=String
X=30
Y=30r
Text=Blur Radius
Group=Equalizer
Container=EqualizerContainer
MeterStyle=ContentStyle

[BlurRadiusInputBackGround]
Meter=Shape
X=260
Y=2r
Shape=Rectangle 0,0,100, 25, 5 | StrokeWidth 2 | Stroke Color 72757e | Extend ColorA
LeftMouseUpAction=[!CommandMeasure BlurRadiusInputText "ExecuteBatch 1"][!Redraw]
Hidden=(1-[#TabState])
Group=Group=Equalizer | SuperContainers
Container=EqualizerContainer
MeterStyle=ContentValueBoxStyle

[BlurRadiusString]
Meter=String
X=311
Y=11r
Text=[#BlurRadius]
StringAlign=CenterCenter
Group=Equalizer
Container=EqualizerContainer
MeterStyle=ButtonTextStyle

[BlurRadiusInputText]
Measure=Plugin
Plugin=InputText
H=([BlurRadiusInputBackGround:H]-5)
W=([BlurRadiusInputBackGround:W]-5)
X=([BlurRadiusInputBackGround:X]+2)
Y=([BlurRadiusInputBackGround:Y]+2)
DefaultValue=[#BlurRadius]
SolidColor=16161a
FontFace=Segoe UI
FontSize=12
FontWeight=500
FontColor=fffffe
StringAlign=Center
InputNumber=1
Command1=[!WriteKeyValue Variables BlurRadius "$UserInput$" "#@#Variables\GlobalVariables.inc"]#R2#
DynamicVariables=1
Container=EqualizerContainer