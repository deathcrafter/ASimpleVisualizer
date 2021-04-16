[MeasureAudioAnalyzer]
Measure=Plugin
Plugin=AudioAnalyzer
Type=Parent
MagicNumber=104
Source=[#AnalyzerPort]
ProcessingUnits=Main
Unit-Main=Channels [#Channel] | Handlers MainFFT, MainBR(MainFFT), MainBCT(MainBR), MainTR(MainBCT), MainFinalOutput(MainTR) | TargetRate 8000 | Filter none
Handler-MainFFT=Type FFT | BinWidth [#BinWidth] | OverlapBoost [#OverlapBoost] | CascadesCount [#CascadesCount] | WindowFunction Exponential
Handler-MainBR=Type BandResampler | Bands Log(Count #Bands#, FreqMin [#FreqMin], FreqMax [#FreqMax]) | CubicInterpolation true
Handler-MainBCT=Type BandCascadeTransformer | MixFunction Average | MinWeight 0.01 | TargetWeight 2 | ZeroLevelMultiplier 1
Handler-MainTR=Type TimeResampler | Attack [#Attack] | Decay [#Decay] | Granularity ([#UpdateRate]*2) | Transform dB, Map(From -[#MaxSensitivity] : -[#MinSensitivity], to 0 : 1), Clamp(Min 0, Max 1)
Handler-MainFinalOutput=Type UniformBlur | Radius [#BlurRadius] | RadiusAdaptation 1