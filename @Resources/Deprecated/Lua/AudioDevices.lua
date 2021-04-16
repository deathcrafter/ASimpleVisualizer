function GetAudioDevices()
    local file = io.open(SKIN:MakePathAbsolute("@Resources\\DeviceID\\DeviceID.ps1"), "w")
    local t={}
    
    table.insert(t,1, 'New-Item "$($profile | split-path)\\Modules\\AudioDeviceCmdlets" -Type directory -Force\nCopy-Item "'..SKIN:GetVariable('@')..'DeviceID\\AudioDeviceCmdlets.dll" "$($profile | split-path)\\Modules\\AudioDeviceCmdlets\\AudioDeviceCmdlets.dll"\nSet-Location "$($profile | Split-Path)\\Modules\\AudioDeviceCmdlets"\nGet-ChildItem | Unblock-File\nImport-Module AudioDeviceCmdlets\nGet-AudioDevice -List')

    file:write(t[1])
    file:close()
    SKIN:Bang("powershell.exe -NoExit #@#DeviceID\\DeviceID.ps1")
    table.remove(t,1)
    local filenew = io.open(SKIN:MakePathAbsolute("@Resources\\DeviceID\\DeviceID.ps1"), "w")
    
    table.insert(t,1, "Get-AudioDevice -List")

    filenew:write(t[1])
    filenew:close()
    SKIN:Bang('!WriteKeyValue', 'Variables', 'Initiated', '1')
    SKIN:Bang('!WriteKeyValue', 'DeviceIDString', 'Text', '[#DeviceName]', '#@#GeneratorFiles\\Equalizer.inc')
    SKIN:Bang('!Refresh')
end

