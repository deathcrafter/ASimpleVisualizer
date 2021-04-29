function Update {

}
function MovePresets {
    $PresetPath=$RmAPI.VariableStr('PresetPath')
    $PresetName=$RmAPI.VariableStr('PresetName')
    $VarDest=$RmAPI.VariableStr('@') + "Variables"
    $ImageDest=$RmAPI.VariableStr('@') + "CustomImages"
    Expand-Archive -LiteralPath $PresetPath -Destination $VarDest -Force 
    Move-Item -Path "$($VarDest)\$($PresetName).png" -Destination $ImageDest -Force
    MakePresetPop
    $RmAPI.Bang("[!WriteKeyValue Variables s_PresetFile $PresetName.inc includes\Variables.inc]")
    $RmAPI.Bang('!Refresh')
}

function DeletePreset {
    $VarDest=$RmAPI.VariableStr('@') + "Variables"
    $ImageDest=$RmAPI.VariableStr('@') + "CustomImages"
    $DeleteItem=$RmAPI.VariableStr('DeleteItem')
    $CurrentPreset=$RmAPI.VariableStr('s_PresetFile')
    $RmAPI.Log($CurrentPreset)
    if (($CurrentPreset -notlike "$DeleteItem.inc") -and ($DeleteItem -notlike 'Original')) {
        Remove-Item -Path "$VarDest\$DeleteItem.inc" -Exclude "GlobalVariables.inc" -Force
        Remove-Item -Path "$ImageDest\$DeleteItem.*" -Force
        MakePresetPop
        $RmAPI.Log("Deleted preset: $DeleteItem successfully!")
        $RmAPI.Bang('!Refresh')
    } else {
        $RmAPI.LogError("Current preset cannot be deleted!")
    }
}
function MakePresetPop {
    param(

    )
    $VarDest=$RmAPI.VariableStr('@') + "Variables"
    $presets= @(Get-ChildItem -Path $VarDest -Include *.inc -Name -Exclude Gradient.inc)
    $presetCount= (Get-ChildItem $VarDest | Measure-Object).Count
    
    $Content+=@"
[PresetContainer]
Meter=Image
X=[&MouseX]
Y=[&MouseY]
W=200
H=$(($presetCount)*20)
SolidColor=0,0,0
DynamicVariables=1
Hidden=1
Group=Preset
[PresetBackGround]
Meter=Shape
Shape=Rectangle 0,0,200, [PresetContainer:H] | Fill Color 30,30,30,170
DynamicVariables=1
Container=PresetContainer
Hidden=1
Group=Preset
[PresetStringStyle]
X=5
W=190
H=20
FontSize=12
SolidColor=0,0,0,1
FontFace=Segoe UI
FontColor=FFFFFE
Container=PresetContainer
AntiAlias=1
Hidden=1
Group=Preset
"@
    $index=0    
    $presets | ForEach-Object{
        if ($index -eq 0) {$Content+=@"        

[Preset$index]
Meter=String
Text="$($_ -replace '(.+)\.inc', '$1')"
Y=10
MeterStyle=PresetStringStyle
MouseOverAction=[!SetVariable DeleteItem "$($_ -replace '(.+)\.inc', '$1')"][!SetOption Rainmeter ContextTitle Delete]
MouseLeaveAction=[!SetOption Rainmeter ContextTitle `"`"]
LeftMouseUpAction=[!WriteKeyValue Variables s_PresetFile $_ `"#ROOTCONFIGPATH#settings\includes\Variables.inc`"][!Refresh]
"@
        }
        if ($index -gt 0) {$Content+=@"        

[Preset$index]
Meter=String
Text="$($_ -replace '(.+)\.inc', '$1')"
Y=%R
MeterStyle=PresetStringStyle
MouseOverAction=[!SetVariable DeleteItem "$($_ -replace '(.+)\.inc', '$1')"][!SetOption Rainmeter ContextTitle Delete]
MouseLeaveAction=[!SetOption Rainmeter ContextTitle `"`"]
LeftMouseUpAction=[!WriteKeyValue Variables s_PresetFile $_ `"#ROOTCONFIGPATH#settings\includes\Variables.inc`"][!Refresh]
"@
    
        }
        $index++
    }
    $Content | Out-File -FilePath $($RmAPI.VariableStr('ROOTCONFIGPATH') + 'settings\categories\Presets.inc')
}