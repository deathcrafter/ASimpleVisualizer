[Variables]
Channel=Auto
;BarType : Normal | Reflection | MirrorY | MirrorX | MirrorXY

BarType=Normal

;------------------------------------------------------------------------

;@About | Name Settings | Description Control how your visualizer is rendered here.
;Visualizer Variables

;------------------------------------------------------------------------

;@Topic | Name Personalization | Icon [\xE771]

;________________________________________________________________________

;@Default | Name Visualizer Settings | Icon [\xF61F]

;?Integer | Name BarCount | Description Number of Bars
Bands=80

;?Integer | Name Height | Description Height of Bars
Height=300

;?Integer | Name Bar Width | Description Width of individual Bars
BarWidth=12

;?Integer | Name Bar Gap | Description Gap between consecutive Bars
BarGap=5

;?Integer | Name StrokeWidth | Description Stroke width of Bars
BarStrokeWidth=0

;?Integer | Name Corner Rounding | Description How rounded the bars are
CornerRounding=3

;?Integer | Name Levitation | Description The amount bars go up while visualizing
Levitate=0

;?Integer | Name Mirror Distance X | Description The distance between mirrored bars along X
MirrorDistanceX=0

;?Integer | Name Mirror Distance Y | Description The distance between mirrored bars along Y
MirrorDistanceY=40

;?Toggle | Name Flip
flipBool =0

;?Integer | Name Angle | Description Angle of visualizer
Angle=0

;?Integer | Name Minimum Height | Description Minimun height of Bars
MinimumHeight=5

;?Integer | Name Update Rate | Description Update Rate of visualizer(Value between 16 to 25 recommended)
UpdateRate=20

;________________________________________________________________________

;@Default | Name Visualizer Types | Icon [\xE74C]

;________________________________________________________________________

;@Default | Name Image Underlay | Description Add an image underlay to your visualizer | Icon [\xE81E]

;?Toggle | Name Image Underlay | Decription Turn Image underlay on or off
ImageVisBool=0

;?Info | Name How to make an Image Underlay | Description Follow the link below for detailed instructions | Link 1
imghowto=https://github.com/deathcrafter/ASimpleVisualizer#how-to-make-an-image-visualizer

ImgVis0=[!WriteKeyValue ImageCover Meter "Image" "#SKINSPATH#ASimpleVisualizer\Visualizer\ASimpleVisualizer.ini"]
ImgVis1=[!WriteKeyValue ImageCover Meter "" "#SKINSPATH#ASimpleVisualizer\Visualizer\ASimpleVisualizer.ini"]

;________________________________________________________________________

;@Default | Name Colors | Description Define color of your visualizer or use a gradient of up to 7 colors | Icon [\xE790]

;?Integer | Name Color Count | Description Number of colors you want in gradient.(for no gradient 1)
ColorCount=1
;?Color | Name Color 1 | Description Default color or first color of gradient
ColorA0=194,20,24

;?Color | Name Color 2
ColorA1=194,20,24

;?Color | Name Color 3
ColorA2=51,245,29

;?Color | Name Color 4
ColorA3=238,255,0

;?Color | Name Color 5
ColorA4=255,145,0

;?Color | Name Color 6
ColorA5=255, 127, 0

;?Color | Name Color 7
ColorA6=255, 0, 0

;?Integer | Name Max Alpha
MaxAlpha=300

;?Integer | Name Min Alpha
MinAlpha=50

;------------------------------------------------------------------------

;@Topic | Name Equalizer Settings | Icon [\xF4C3]

;________________________________________________________________________

;@ | Name Device | Description Select a specific device(for advanced users) | Icon [\xE95B]

;?Toggle | Name Use Device ID | Description Turn on to use a specific device
DeviceIDbool=0

;?String | Name DeviceID |
DeviceID={0.0.0.00000000}.{29a27073-00b5-4dc6-96fc-23e1d9511f7c}

;?String | Name Device Name | Desciption Automatically fetched, changes won't be saved
DeviceName=Microphone (High Definition Audio Device)

;?Toggle | Name Use Input | Description Use Input as source(AudioAnalyzer recommended, DeviceID overrides this setting)
IObool=0

;AudioAnalyzer
Default1=DefaultInput
Default0=DefaultOutput
AnalyzerPort=[#Analyzer[#DeviceIDbool]]
Analyzer0=[#Default[#IObool]]
Analyzer1="ID: [#DeviceID]"

;AudioLevel
Port=[#LevelSource[#IObool]]
LevelSource0=Output
LevelSource1=Input

;________________________________________________________________________

;@ | Name AudioAnalyzer | Description Read the AudioAnalyzer Docs a little before changing these settings | Icon [\xF0ED]

;?Toggle | Name Use AudioAnalyzer
EquaTypeBool=1

;?Integer | Name Minimum Frequency
FreqMin=20

;?Integer | Name Maximum Frequency
FreqMax=16000

;?Integer | Name Maximum Sensititvity
MaxSensitivity=35

;?Integer | Name Minimum Sensitivity
MinSensitivity=6

;?Integer | Name Rising Delay | Description in milliseconds
Attack=30

;?Integer | Name Falling Delay | Description in milliseconds
Decay=100

;?Integer | Name Resolution | Description see audioanalyzer docs for more info
BinWidth=15

;?Integer | Name Smoothing Level | Description How smooth your visuallizer is
BlurRadius=2

;________________________________________________________________________

;@ | Name AudioLevel | Description Settings for AudioLevel | Icon [\xE994]

;?Toggle | Name Use AudioLevel
EquaBoolAud=(1-[#EquaTypeBool])

;?Integer | Name Minimum Frequency
MinFrequency=20

;?Integer | Name Maximum Frequency 
MaxFrequency=20000

;?Integer | Name Resolution | Description Usually an even number, preferrably a power of 2
FFTSize=2048

;?Integer | Name Rising Delay | Description in milliseconds
FFTAttack=15

;?Integer | Name Falling Delay | Description in milliseconds
FFTDecay=100

;?Integer | Name Sensitivity | Description Less values respond to low level audio and high values only to high level audio
Sensitivity=35
