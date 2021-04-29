[Variables]
Channel=Auto
;BarType : Normal | Reflection | MirrorY | MirrorX | MirrorXY

BarType=MirrorXY

;------------------------------------------------------------------------

;@About | Name Settings | Description Control how your visualizer is rendered here.

;?Info | Name About | Description A simple visualiser that lets you choose from a variety of types e.g. Mirrored, Image Underlay. And you get a plethora of options to customize the visuaizer to your liking.
 =

;?Info | Name Credits | Description 1. d-grace for AudioLevel plugin#CRLF#2. rxtd for AudioAnalyzer plugin#CRLF#3. TheAzack9 for FrostedGlass and Drag&Drop plugins#CRLF#4. frgnca for AudioDeviceCmdlets#CRLF#5. Sceleri for the Settings generator and a lot of help#CRLF#6. Jax for design ideas and betatesting 
 =

;?Info | Name Warnings | Description 1. To get information about audio devices installed on your computer this skin installs a PowerShell cmdlet called AudioDeviceCmdlets by frgnca. It is safe to use but if you don't want to install the cmdlet then refrain from using the install button in Devices page.#CRLF#2. If you are using Image Overlay then you must turn on hardware acceleration from Rainmeter settings.
 = 

;?Info | Name Rock your desktop! | Description with <3, from death.crafter
 = 

;?Info | Name Github | Link 1
https://github.com/deathcrafter/ASimpleVisualizer=https://github.com/deathcrafter/ASimpleVisualizer

;------------------------------------------------------------------------

;@Topic | Name Personalization | Icon [\xE771]

;________________________________________________________________________

;@Default | Name Visualizer Settings | Icon [\xF61F]

;?Integer | Name BarCount | Description Number of Bars
Bands=500

;?Integer | Name Height | Description Height of Bars
Height=150

;?Integer | Name Bar Width | Description Width of individual Bars
BarWidth=4

;?Integer | Name Bar Gap | Description Gap between consecutive Bars
BarGap=-2

;?Integer | Name StrokeWidth | Description Stroke width of Bars
BarStrokeWidth=0

;?Integer | Name Corner Rounding | Description How rounded the bars are
CornerRounding=2

;?Integer | Name Levitation | Description The amount bars go up while visualizing
Levitate=250

;?Toggle | Name Flip
flipBool=0

;?Integer | Name Angle | Description Angle of visualizer
Angle=0

;?Integer | Name Minimum Height | Description Minimun height of Bars
MinimumHeight=0

;?Integer | Name Update Rate | Description Update Rate of visualizer(Value between 16 to 25 recommended)
UpdateRate=16

;________________________________________________________________________

;@Default | Name Visualizer Types | Icon [\xE74C]

;?Info | Name Visualizer Type
 =

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
ColorCount=3
;?Color | Name Color 1 | Description Default color or first color of gradient
ColorA0=0,56,224

;?Color | Name Color 2
ColorA1=19,162,194

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

;?Toggle | Name Live Alpha
LiveAlphaBool=0

;?Integer | Name Max Alpha
MaxAlpha=400

;?Integer | Name Min Alpha
MinAlpha=100

;?Color | Name Stroke Color
StrokeColor=0,0,0

;?Integer | Name Stroke Alpha
StrokeAlpha=170

;------------------------------------------------------------------------

;@Topic | Name Equalizer Settings | Icon [\xF4C3]

;________________________________________________________________________

;@ | Name Device | Description Select a specific device(for advanced users) | Icon [\xE95B]

;?Toggle | Name Use Device ID | Description Turn on to use a specific device
DeviceIDbool=0

;?String | Name DeviceID |
DeviceID=

;?String | Name Device Name | Desciption Automatically fetched, changes won't be saved
DeviceName=

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

;?String | Name Window Function | Description None :: Hann :: Hamming :: Kaiser :: Chebyshev :: Exponential
WindowFunction=Kaiser

;?Integer | Name Maximum Sensititvity
MaxSensitivity=35

;?Integer | Name Minimum Sensitivity
MinSensitivity=6

;?Integer | Name Rising Delay | Description in milliseconds
Attack=0

;?Integer | Name Falling Delay | Description in milliseconds
Decay=0

;?Integer | Name Resolution | Description see audioanalyzer docs for more info
BinWidth=15

;?Integer | Name Smoothing Level | Description How smooth your visuallizer is
BlurRadius=50

;?Integer | Name Minimum Frequency | Description !Note: Please don't change for the time being
FreqMin=20

;?Integer | Name Maximum Frequency | Description !Note: Please don't change for the time being
FreqMax=16000

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

;--------------------------------------------------------------------------------------------------------------------------------------------

;@Topic | Name Experimental | Icon [\xEA86]

;@ | Name Reflection

;?Integer | Name Reflection Percentage | Description Reflection length in terms of percentage of height
ReflectionPercentage=70

;?String | Name Reflection Distance
ReflectionDistance=30

;?Integer | Name First X-Offset
Reflection_G1XOffset=0

;?Integer | Name Second X-Offset
Reflection_G2XOffset=0

;@ | Name MirrorY Settings

;?String | Name First X-Offset
MirrorY_G1XOffset=0

;?String | Name Second X-Offset
MirrorY_G2XOffset=0

;?String | Name First Y-Offset
MirrorY_G1YOffset=100

;?String | Name Second Y-Offset 
MirrorY_G2YOffset=0

;@ | Name MirrorX Settings

;?String | Name First X-Offset
MirrorX_G1XOffset=0

;?String | Name Second X-Offset
MirrorX_G2XOffset=-590

;?String | Name First Y-Offset
MirrorX_G1YOffset=0

;?String | Name Second Y-Offset
MirrorX_G2YOffset=0

;@ | Name MirrorXY Settings


;?String | Name First X-Offset
MirrorXY_G1XOffset=0

;?String | Name Second X-Offset
MirrorXY_G2XOffset=-1000

;?String | Name Third X-Offset
MirrorXY_G3XOffset=0

;?String | Name Fourth X-Offset
MirrorXY_G4XOffset=-1000

;?String | Name First Y-Offset
MirrorXY_G1YOffset=100

;?String | Name Second Y-Offset
MirrorXY_G2YOffset=100

;?String | Name Third Y-Offset
MirrorXY_G3YOffset=0

;?String | Name Fourth Y-Offset
MirrorXY_G4YOffset=0
