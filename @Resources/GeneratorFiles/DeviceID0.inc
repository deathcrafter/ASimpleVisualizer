[DeviceIdInitiationBack]
Meter=Shape
X=(70*[#Scale])
Y=(220*[#Scale])
Shape=Rectangle 0,0,(350*[#Scale]),(200*[#Scale]),(10*[#Scale]) | StrokeWidth (3*[#Scale]) | Fill Color 16161a
Hidden=1
Group=Warnings | DeviceIDInitiation

[DeviceIDInitiationString]
Meter = String
X=(30*[#Scale])r
Y=(20*[#Scale])r
W=(290*[#Scale])
H=(130*[#Scale])
Text = Clicking on install will open up a PowerShell window listing all the audio devices installed to your system. Copy the value to the input field which will appear after clicking the button again.
FontFace=Segoe UI
FontColor=FFFFFF
FontSize=(11*[#Scale])
Group=Warnings | DeviceIDInitiation
AntiAlias=1
ClipString=1
StringAlign=Left
Hidden=1
FontWeight=(500*[#Scale])

[DeviceIDInstall]
Meter=Shape
X=(215*[#Scale])
Y=(10*[#Scale])R
Shape=Rectangle 0,0,(60*[#Scale]),(30*[#Scale]),(3*[#Scale]) | StrokeWidth (1.5*[#Scale]) | Extend ColorA
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Group=Warnings | DeviceIDInitiation
LeftMouseUpAction=[!CommandMeasure SuperScript "GetAudioDevices()"][!Redraw]
Hidden=1

[DeviceIDInstallString]
Meter=String
Text=Install
X=(245*[#Scale])
Y=(13*[#Scale])r
FontSize=(11*[#Scale])
FontFace=Segoe UI
FontWeight=(500*[#Scale])
FontColor=fffffe
AntiAlias=1
StringAlign=CenterCenter
Group=Warnings | DeviceIDInitiation
Hidden=1