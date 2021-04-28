function Update {

}
function MovePresets {
    param(
        [Parameter(Mandatory=$true, Position=0 )]
        $PresetPath,
        [Parameter(Mandatory=$true, Position=1)]
        $PresetName
    )
    $VarDest=$RmAPI.VariableStr('@') + "Variables"
    $ImageDest=$RmAPI.VariableStr('@') + "CustomImages"
    Expand-Archive -LiteralPath "$($PresetPath)\$($PresetName).zip" -Destination $VarDest -Force -ErrorAction $RmAPI.Log('Zip extraction error. Please check the file.')
    Move-Item -Path "$($VarDest)\$($PresetName).png" -Destination $ImageDest -Force -ErrorAction $RmAPI.Log('No Image available for this preset!')
}