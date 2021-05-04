function Update {

}
function ListAudioDevices {
    $a=Get-AudioDevice -List
    $b=$a.Name
    $c=$a.ID
    $m=($b.Count+1)*20
    $index=0
    $device=@"
[DeviceListContainer]
Meter=Image
W=250
H=$m
X=([&MouseX]-#CURRENTCONFIGX#)
Y=([&MouseY]-#CURRENTCONFIGY#)
SolidColor=0,0,0
DynamicVariables=1
Hidden=1
Group=Devices
[DeviceBackGround]
Meter=Shape
Shape=Rectangle 0,0,250, [DeviceListContainer:H] | Fill Color 30,30,30,170
DynamicVariables=1
Container=DeviceListContainer
Hidden=1
Group=Devices
[DeviceStringStyle]
X=5
W=240
H=22
FontSize=12
SolidColor=0,0,0,1
FontFace=Segoe UI
FontColor=FFFFFE
Container=DeviceListContainer
AntiAlias=1
Hidden=1
ClipString=1
Group=Devices
"@
    $b | ForEach-Object{
        if ($index -eq 0) {$device+=@"

[DeviceName$index]
Meter=String
Text=$_
Y=8
MeterStyle=DeviceStringStyle
LeftMouseUpAction=[!WriteKeyValue Variables DeviceName `"$_`" `"#@#Variables\[#s_PresetFile]`"][!WriteKeyValue Variables DeviceID $($c[$index]) `"#@#Variables\[#s_PresetFile]`"][!Refresh]
"@
        }
        if ($index -gt 0) {$device+=@"

[DeviceName$index]
Meter=String
Text=$_
Y=R
MeterStyle=DeviceStringStyle
LeftMouseUpAction=[!WriteKeyValue Variables DeviceName `"$_`" `"#@#Variables\[#s_PresetFile]`"][!WriteKeyValue Variables DeviceID $($c[$index]) `"#@#Variables\[#s_PresetFile]`"][!Refresh]
"@
        }
        $index++
    }
    $device | Out-File -FilePath $($RmAPI.VariableStr('ROOTCONFIGPATH') + 'settings\categories\Devices.inc')
    $RmAPI.Bang('!Refresh')
}