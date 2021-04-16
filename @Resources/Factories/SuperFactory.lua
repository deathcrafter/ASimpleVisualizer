function CalculateAudioBands()
	local num = SKIN:GetVariable("Bands")
	local measure = SKIN:GetVariable("measuretype")
	local file = io.open(SKIN:MakePathAbsolute("@Resources\\MeasuresandBars\\Measures.inc"), "w")
	
	local t = {}
	print(measure)
	if measure == '0' then
		for i = 0, num-1 do
			table.insert(t, "[MeasureBand" .. i .. "]".."\n".."Measure=Plugin\nPlugin=AudioLevel\nParent=MeasureAudio\nType=Band\nBandIdx="..i.."")
		end
	else
		for i = 0, num-1 do
			table.insert(t, "[MeasureBand" .. i .. "]\nMeasure=Plugin\nPlugin=AudioAnalyzer\nParent=MeasureAudioAnalyzer\nType=Child\nIndex=" .. i .. "\nChannel=Auto\nHandlerName=MainFinalOutput")
		end
	end
	file:write(table.concat(t, "\n"))
	file:close()
end

function DrawNormal()
	local num = SKIN:GetVariable("Bands")

	local file = io.open(SKIN:MakePathAbsolute("@Resources\\MeasuresandBars\\Visualizer.inc"), "w")

    local bandWidth= SKIN:GetVariable("BarWidth")
	
    local bandGap= SKIN:GetVariable("BarGap")

    local a = bandWidth + bandGap

	local t = {}

    table.insert(t, "[MeterShape]")

    table.insert(t, "Meter=Shape")

    table.insert(t, "W=(Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#)+Abs(Sin(#Angle#%360*Pi/180))*#Height#+#Levitate#)")

    table.insert(t, "H=(Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#)+Abs(Cos(#Angle#%360*Pi/180))*#Height#+#Levitate#)")

    table.insert(t, "Shape= Rectangle 0, (#Height# + #Levitate# - #Levitate#*[MeasureBand0]), #BarWidth#, (-1*(#Height#*[MeasureBand0])), #CornerRounding# | Fill Color #Color0# | StrokeWidth #BarStrokeWidth#" ) 

	for k = 1, num-1 do
        local j= a*k
        
        table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k .. ", (#Height# + #Levitate# - #Levitate#*[MeasureBand"..k.."]), #BarWidth#, (-1*(#Height#*[MeasureBand"..k.."])), #CornerRounding# | Fill Color #Color" ..k.."# | StrokeWidth #BarStrokeWidth#" )  
        
    end
    table.insert(t, "TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#):0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*(#Height# + #Levitate#):0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#):0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(#Height# + #Levitate#):0))")
	table.insert(t, "DynamicVariables = 1")
	file:write(table.concat(t, "\n"))
	file:close()
	SKIN:Bang('!Redraw')
end

function DrawReflection()
    local num = SKIN:GetVariable("Bands")

	local file = io.open(SKIN:MakePathAbsolute("@Resources\\MeasuresandBars\\Visualizer.inc"), "w")

    local bandWidth= SKIN:GetVariable("BarWidth")
	
    local bandGap= SKIN:GetVariable("BarGap")

    local a = bandWidth + bandGap

	local t = {}

    print(r)

    table.insert(t, "[MeterShape]")

    table.insert(t, "Meter=Shape")

    table.insert(t, "W=(Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#)+Abs(Sin(#Angle#%360*Pi/180))*2*#Height#+#MirrorDistance#+#Levitate#)")

    table.insert(t, "H=(Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#)+Abs(Cos(#Angle#%360*Pi/180))*2*#Height#+#MirrorDistance#+#Levitate#)")

    table.insert(t, "Shape= Rectangle 0, (#Height# + #Levitate# - #Levitate#*[MeasureBand0]), #BarWidth#, (-1*(#Height#*[MeasureBand0])), #CornerRounding# | Fill Color #Color0# | StrokeWidth #BarStrokeWidth#" ) 

	for k = 1, num-1 do
        table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k .. ", (#Height# + #Levitate# - #Levitate#*[MeasureBand"..k.."]), #BarWidth#, (-1*(#Height#*[MeasureBand"..k.."])), #CornerRounding# | Fill Color #Color" ..k.."# | StrokeWidth #BarStrokeWidth#" )
    end
    for j = num+1, 2*num do
        table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-num-1).. ",(#Height# + #MirrorDistance# + #Levitate#*[MeasureBand"..(j-num-1).."]), #BarWidth#, (#Height#*[MeasureBand"..(j-num-1).."]), #CornerRounding# | StrokeWidth #BarStrokeWidth# | Fill LinearGradient MyGradient"..(j-num-1).. "\n" .. "MyGradient"..(j-num-1).." = 90 | #Color"..(j-num-1).."#,0;0.0 | #Color"..(j-num-1).."#,0;0.3 | #Color"..(j-num-1).."#, 150;1.0")
    end
    
    table.insert(t, "TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#):0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*(2*#Height#+ #MirrorDistance# + #Levitate#):0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#):0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(2*#Height#+#MirrorDistance# + #Levitate#):0))")
	table.insert(t, "DynamicVariables = 1")

	file:write(table.concat(t, "\n"))
	file:close()
end

function DrawMirrorY()
	local num = SKIN:GetVariable("Bands")

	local file = io.open(SKIN:MakePathAbsolute("@Resources\\MeasuresandBars\\Visualizer.inc"), "w")

    local bandWidth= SKIN:GetVariable("BarWidth")
	
    local bandGap= SKIN:GetVariable("BarGap")

    local r = SKIN:GetVariable("Reflection")

    local a = bandWidth + bandGap

	local t = {}

    table.insert(t, "[MeterShape]")

    table.insert(t, "Meter=Shape")

    table.insert(t, "W=(Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#)+Abs(Sin(#Angle#%360*Pi/180))*2*#Height#+#MirrorDistance#+#Levitate#)")

    table.insert(t, "H=(Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#)+Abs(Cos(#Angle#%360*Pi/180))*2*#Height#+#MirrorDistance#+#Levitate#)")

    table.insert(t, "Shape= Rectangle 2, (#Height# + #Levitate# - #Levitate#*[MeasureBand0]), #BarWidth#, (-1*(#Height#*[MeasureBand0])), #CornerRounding# | Fill Color #Color0# | StrokeWidth #BarStrokeWidth#" ) 

	for k = 1, num-1 do
        table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k .. ", (#Height# + #Levitate# - #Levitate#*[MeasureBand"..k.."]), #BarWidth#, (-1*(#Height#*[MeasureBand"..k.."])), #CornerRounding# | Fill Color #Color" ..k.."# | StrokeWidth #BarStrokeWidth#" )
    end
    for j = num+1, 2*num do
        table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-num-1).. ",(#Height# +#Levitate#+ #MirrorDistance# + #Levitate#*[MeasureBand"..(j-num-1).."]), #BarWidth#, (#Height#*[MeasureBand"..(j-num-1).."]), #CornerRounding# | StrokeWidth #BarStrokeWidth# | Fill Color #Color"..(j-num-1).."#")
    end
    
    table.insert(t, "TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#):0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*(2*#Height# + #MirrorDistance# + #Levitate#):0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#):0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(2*#Height# + #MirrorDistance# + #Levitate#):0))")
	table.insert(t, "DynamicVariables = 1")

	file:write(table.concat(t, "\n"))
	file:close()
end

function DrawMirrorX()
	local num = SKIN:GetVariable("Bands")

	local file = io.open(SKIN:MakePathAbsolute("@Resources\\MeasuresandBars\\Visualizer.inc"), "w")

    local bandWidth= SKIN:GetVariable("BarWidth")
	
    local bandGap= SKIN:GetVariable("BarGap")

    local r = SKIN:GetVariable("Reflection")

    local a = bandWidth + bandGap

	local t = {}

    print(r)

    table.insert(t, "[MeterShape]")

    table.insert(t, "Meter=Shape")

    table.insert(t, "W=(Abs(Cos(#Angle#%360*Pi/180))*(2*(#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#)+Abs(Sin(#Angle#%360*Pi/180))*#Height#+#Levitate#)")

    table.insert(t, "H=(Abs(Sin(#Angle#%360*Pi/180))*(2*(#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#)+Abs(Cos(#Angle#%360*Pi/180))*#Height#+#Levitate#)")

    table.insert(t, "Shape= Rectangle 0, (#Height# + #Levitate# - #Levitate#*[MeasureBand0]), #BarWidth#, (-1*(#Height#*[MeasureBand0])), #CornerRounding# | Fill Color #Color0# | StrokeWidth #BarStrokeWidth#" ) 

	for k = 1, num-1 do
        table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k .. ", (#Height# + #Levitate# - #Levitate#*[MeasureBand"..k.."]), #BarWidth#, (-1*(#Height#*[MeasureBand"..k.."])), #CornerRounding# | Fill Color #Color" ..k.."# | StrokeWidth #BarStrokeWidth#" )
    end
    for j = num+1, 2*num do
        table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-1).. ",(#Height# + #Levitate# - #Levitate#*[MeasureBand"..(num*2 - j).."]), #BarWidth#, (-1*(#Height#*[MeasureBand"..(num*2 - j).."])), #CornerRounding# | StrokeWidth #BarStrokeWidth# | Fill Color #Color"..(num*2 - j).."#")
    end
    
    table.insert(t, "TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(2*(#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#):0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*(#Height# + #Levitate#):0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*2*#Bands#+2*#BarStrokeWidth#-#BarGap#):0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(#Height# + #Levitate#):0))")
	table.insert(t, "DynamicVariables = 1")

	file:write(table.concat(t, "\n"))
	file:close()
end

function DrawMirrorXY()
    local num = SKIN:GetVariable("Bands")

	local file = io.open(SKIN:MakePathAbsolute("@Resources\\MeasuresandBars\\Visualizer.inc"), "w")

    local bandWidth= SKIN:GetVariable("BarWidth")
	
    local bandGap= SKIN:GetVariable("BarGap")

    local a = bandWidth + bandGap

	local t = {}

    print(r)

    table.insert(t, "[MeterShape]")

    table.insert(t, "Meter=Shape")

    table.insert(t, "W=(Abs(Cos(#Angle#%360*Pi/180))*(2*(#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#)+Abs(Sin(#Angle#%360*Pi/180))*2*#Height#+#MirrorDistance#+#Levitate#)")

    table.insert(t, "H=(Abs(Sin(#Angle#%360*Pi/180))*(2*(#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#)+Abs(Cos(#Angle#%360*Pi/180))*2*#Height#+#MirrorDistance#+#Levitate#)")

    table.insert(t, "Shape= Rectangle #BarStrokeWidth#, (#Height# + #Levitate# - #Levitate#*[MeasureBand0]), #BarWidth#, (-1*(#Height#*[MeasureBand0])), #CornerRounding# | Fill Color #Color0# | StrokeWidth #BarStrokeWidth#" ) 

	for k = 1, num-1 do
        table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k .. ", (#Height# + #Levitate# - #Levitate#*[MeasureBand"..k.."]), #BarWidth#, (-1*(#Height#*[MeasureBand"..k.."])), #CornerRounding# | Fill Color #Color" ..k.."# | StrokeWidth #BarStrokeWidth#" )
    end
    for j = num+1, 2*num do
        table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-1).. ",(#Height# + #Levitate# - #Levitate#*[MeasureBand"..(num*2 - j).."]), #BarWidth#, (-1*(#Height#*[MeasureBand"..(num*2 - j).."])), #CornerRounding# | StrokeWidth #BarStrokeWidth# | Fill Color #Color"..(num*2 - j).."#")
    end
    for i = 2*num+1, 2*num+1 do
        table.insert(t, "Shape" .. i .. "=Rectangle (" .. a*(i-2*num-1).. "+#BarStrokeWidth#),(#Height# + #MirrorDistance# + #Levitate#*[MeasureBand"..(i-2*num-1).."]), #BarWidth#, (#Height#*[MeasureBand"..(i-2*num-1).."]), #CornerRounding# | StrokeWidth #BarStrokeWidth# | Fill Color #Color"..(i-2*num-1).."#")
    end
    for i = 2*num+2, 3*num do
        table.insert(t, "Shape" .. i .. "=Rectangle " .. a*(i-2*num-1).. ",(#Height# + #MirrorDistance# + #Levitate#*[MeasureBand"..(i-2*num-1).."]), #BarWidth#, (#Height#*[MeasureBand"..(i-2*num-1).."]), #CornerRounding# | StrokeWidth #BarStrokeWidth# | Fill Color #Color"..(i-2*num-1).."#")
    end
    for h = 3*num+1, 4*num do
        table.insert(t, "Shape" .. h .. "=Rectangle " .. a*(h-2*num-1).. ",(#Height# + #MirrorDistance# + #Levitate#*[MeasureBand"..(num*4 - h).."]), #BarWidth#, (#Height#*[MeasureBand"..(num*4 - h).."]), #CornerRounding# | StrokeWidth #BarStrokeWidth# | Fill Color #Color"..(num*4 - h).."#")
    end

    
    table.insert(t, "TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(2*(#BarWidth#+#BarGap#)*#Bands#+2*#BarStrokeWidth#-#BarGap#):0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*(2*#Height#+#MirrorDistance# + #Levitate#):0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*2*#Bands#+2*#BarStrokeWidth#-#BarGap#):0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(2*#Height#+#MirrorDistance# + #Levitate#):0))")
	table.insert(t, "DynamicVariables = 1")

	file:write(table.concat(t, "\n"))
	file:close()
end
function CreateColorMeasures()
	local num = SKIN:GetVariable("ColorCount")
	local fileMeasure = io.open(SKIN:MakePathAbsolute("@Resources\\MeasuresandBars\\ColorMeasures.inc"), "w")
    
	local t = {}
	

	for i = 0, num-1 do
        table.insert(t, "[ColorRed" .. i .. "]\nMeasure=String\nString=#ColorA"..i.."#\nRegExpSubstitute=1\nSubstitute=\"^(\\d+)\\s*?\\,\\s*?(\\d+)\\s*?\\,\\s*?(\\d+)$\" : \"\\1\"\nUpdateDivider=-1" )
	end
	for i = 0, num-1 do
		table.insert(t, "[ColorGreen" .. i .. "]\nMeasure=String\nString=#ColorA"..i.."#\nRegExpSubstitute=1\nSubstitute=\"^(\\d+)\\s*?\\,\\s*?(\\d+)\\s*?\\,\\s*?(\\d+)$\" : \"\\2\"\nUpdateDivider=-1" )
	end
	for i = 0, num-1 do
		table.insert(t, "[ColorBlue" .. i .. "]\nMeasure=String\nString=#ColorA"..i.."#\nRegExpSubstitute=1\nSubstitute=\"^(\\d+)\\s*?\\,\\s*?(\\d+)\\s*?\\,\\s*?(\\d+)$\" : \"\\3\"\nUpdateDivider=-1" )
	end
	
	fileMeasure:write(table.concat(t, "\n"))
	fileMeasure:close()
end

function CreateColors()
    local num = SKIN:GetVariable("ColorCount")
	local colornum = num-1
	local barCount = SKIN:GetVariable("Bands")
	local defaultColor= SKIN:GetVariable("ColorA1")
	
    local fileColors = io.open(SKIN:MakePathAbsolute("@Resources\\Variables\\Gradient.inc"), "w")

    local calc={}
	for i = 1, 10 do
		table.insert(calc, i, ( i~=colornum ) and (barCount - barCount%colornum)*i/colornum or barCount)
	end
	local red={}
	for i = 0, colornum do
		local color={}
		table.insert(color,i,SKIN:GetMeasure("ColorRed" .. i))
    	table.insert(red,i,color[i]:GetStringValue())
	end

	local green={}
	for i = 0, colornum do
		local color={}
		table.insert(color,i,SKIN:GetMeasure("ColorGreen" .. i))
    	table.insert(green,i,color[i]:GetStringValue())
	end

	local blue={}
	for i = 0, colornum do
		local color={}
		table.insert(color,i,SKIN:GetMeasure("ColorBlue" .. i))
    	table.insert(blue,i,color[i]:GetStringValue())
	end

    local c = {}

    table.insert(c, "[Variables]")	
	if colornum>=1 then
		for i = 0, calc[1]-1 do	
			table.insert(c, "Color" ..i.. "=" ..red[0] + (red[1] - red[0])*i/calc[1] .. "," ..green[0] + (green[1] - green[0])*i/calc[1] .. "," ..blue[0] + (blue[1] - blue[0])*i/calc[1] )
		end
		for i = calc[1], calc[2]-1 do
			if colornum<2 then
				break
			end
			table.insert(c, "Color" ..i.. "=" ..red[1] + (red[2] - red[1])*(i-calc[1])/(calc[2]-calc[1]) .. "," ..green[1] + (green[2] - green[1])*(i-calc[1])/(calc[2]-calc[1]) .. "," ..blue[1] + (blue[2] - blue[1])*(i-calc[1])/(calc[2]-calc[1]) )
		end
		for i = calc[2], calc[3]-1 do
			if colornum<3 then
				break
			end
			table.insert(c, "Color" ..i.. "=" ..red[2] + (red[3] - red[2])*(i-calc[2])/(calc[3]-calc[2]) .. "," ..green[2] + (green[3] - green[2])*(i-calc[2])/(calc[3]-calc[2]) .. "," ..blue[2] + (blue[3] - blue[2])*(i-calc[2])/(calc[3]-calc[2]) )
		end
		for i = calc[3], calc[4]-1 do
			if colornum<4 then
				break
			end
			table.insert(c, "Color" ..i.. "=" ..red[3] + (red[4] - red[3])*(i-calc[3])/(calc[4]-calc[3]) .. "," ..green[3] + (green[4] - green[3])*(i-calc[3])/(calc[4]-calc[3]) .. "," ..blue[3] + (blue[4] - blue[3])*(i-calc[3])/(calc[4]-calc[3]) )
		end
		for i = calc[4], calc[5]-1 do
			if colornum<5 then
				break
			end
			table.insert(c, "Color" ..i.. "=" ..red[4] + (red[5] - red[4])*(i-calc[4])/(calc[5]-calc[4]) .. "," ..green[4] + (green[5] - green[4])*(i-calc[4])/(calc[5]-calc[4]) .. "," ..blue[4] + (blue[5] - blue[4])*(i-calc[4])/(calc[5]-calc[4]) )
		end
		for i = calc[5], calc[6]-1 do
			if colornum<6 then
				break
			end
			table.insert(c, "Color" ..i.. "=" ..red[5] + (red[6] - red[5])*(i-calc[5])/(calc[6]-calc[5]) .. "," ..green[5] + (green[6] - green[5])*(i-calc[5])/(calc[6]-calc[5]) .. "," ..blue[5] + (blue[6] - blue[5])*(i-calc[5])/(calc[6]-calc[5]) )
		end
	else
		for i = 0, barCount-1 do
			table.insert(c, "Color" ..i.. "=" ..defaultColor)
		end
	end

	
	fileColors:write(table.concat(c, "\n"))
	fileColors:close()
end
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
    SKIN:Bang('!WriteKeyValue', 'DeviceIDString', 'Text', '[&MeasureDeviceID]', '#@#GeneratorFiles\\Equalizer.inc')
    SKIN:Bang('!Refresh')
end