[SubtitleStyle]
FontSize=(17*[#Scale])
FontFace=Segoe UI
FontColor=fffffe
FontWeight=600
StringAlign=Center
AntiAlias=1
DynamicVariables=1
Group=Scroll

[ContentStyle]
FontSize=(15*[#Scale])
FontFace=Segoe UI
FontColor=94a1b2
StringAlign=Left
AntiAlias=1
Container=SettingsBackGroundContainer
DynamicVariables=1
Group=Scroll


[ButtonTextStyle]
FontSize=(12*[#Scale])
FontFace=Segoe UI
FontColor=fffffe
FontWeight=500
StringALign=CenterCenter
AntiAlias=1
DynamicVariables=1
Container=SettingsBackGroundContainer
Group=Scroll

[ContentValueBoxStyle]
ColorA= Fill Color 7f5af000
MouseOverAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ColorA "Fill Color 7f5af000"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Container=SettingsBackGroundContainer
Group=Scroll