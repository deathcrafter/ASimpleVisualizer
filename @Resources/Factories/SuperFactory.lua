function CalculateAudioBands()
	local num = SKIN:GetVariable("Bands")
	local measure = SKIN:GetVariable('EquaTypeBool')
	local file = io.open(SKIN:GetVariable('@').."MeasuresandBars\\Measures.inc", "w")
	
	local t = {}
	print("x"..measure)
	if measure == '0' then
		for i = 1, num do
			table.insert(t, "[MeasureBand" .. i-1 .. "]".."\n".."Measure=Plugin\nPlugin=AudioLevel\nParent=MeasureAudio\nType=Band\nBandIdx="..i.."")
		end
	else
		for i = 1, num do
			table.insert(t, "[MeasureBand" .. i-1 .. "]\nMeasure=Plugin\nPlugin=AudioAnalyzer\nParent=MeasureAudioAnalyzer\nType=Child\nIndex=" .. i .. "\nChannel=Auto\nHandlerName=MainFinalOutput")
		end
	end
	file:write(table.concat(t, "\n"))
	file:close()
end

--Here we declare a function that we will call using the script measure if the user wants to use Normal variant of visualizer.
function DrawNormal()
    
	--The following line opens the inc file where we will create the visualizer shape. Here we use the io library of lua.
	
	local file = io.open(SKIN:GetVariable('@').."MeasuresandBars\\Visualizer.inc", "w")
    
	--;____________________________________________________________________________________________

    --This section gets the variables from the skin file 'GlobalVariables.inc' where we store our variables
    
	local bands = SKIN:GetVariable("Bands")

    local barWidth= SKIN:GetVariable("BarWidth")
	
    local barGap= SKIN:GetVariable("BarGap")

	local flip = SKIN:GetVariable("flipBool")

    local barStrokeWidth= SKIN:GetVariable("BarStrokeWidth")

    local height= SKIN:GetVariable("Height")

    local levitate= SKIN:GetVariable("Levitate")

    local angle= SKIN:GetVariable("Angle")

	local cornerRadius= SKIN:GetVariable("CornerRounding")

	local minimumHeight= SKIN:GetVariable("MinimumHeight")
    --;____________________________________________________________________________________________

    --In this section we calculate the position of individual bars, height and width of total shape 
    
	local a = barWidth + barGap

    local width1= (barWidth+barGap)*bands+2*barStrokeWidth-barGap

    local height1= height+levitate+minimumHeight+2*barStrokeWidth

    --;____________________________________________________________________________________________

    --Here we create a table named t where we will store the lines we are going to write in the file that we opened earlier. 
	
	local t = {}

	--;____________________________________________________________________________________________

    --Here we insert data into table, i.e. what we want to print(notice the structure and special characters carefully)
    --The '..' characters you see are called concating operators in Lua, in layman terms they join two strings.
    --E.g. print('hello' .. 'world'..'!') will print 'helloworld!' without quotes in log.
    --If you want a space in between you have to put it inside the quotes. 
    
    table.insert(t, "[MeterShape]\nMeter=Shape")
    --After this there are a lot of Maths which you will have to figure out yourself. :(
    
    table.insert(t, "W="..math.abs(math.cos(angle%360*math.pi/180))*width1 + math.abs(math.sin(angle%360*math.pi/180))*height1)
    table.insert(t, "H="..math.abs(math.sin(angle%360*math.pi/180))*width1 + math.abs(math.cos(angle%360*math.pi/180))*height1)
    
    --The if loop is used to see if we want to use flip. Shapes are drawn according to that.

    if flip == '0' then
        table.insert(t, "Shape= Rectangle "..barStrokeWidth..", ("..height + levitate+minimumHeight + barStrokeWidth.." - #Levitate#*[MeasureBand0]),"..barWidth..", ("..(-1*height).."*[MeasureBand0] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color0# | StrokeWidth "..barStrokeWidth.." | Stroke Color #StrokeColor#,#StrokeAlpha#" )
        
        --This for loop draws all the bars we want. Notice that I have kept one bar outside the loop.
        --It is because in Rainmeter Shape meters are declared as Shape, Shape2, Shape3 and so on. The 'Shape1' is skipped.
        --So 'Shape' is inserted the loop and the loop inserts the shapes from Shape2 to the last one.
		
        for k = 1, bands-1 do
    	    table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k + barStrokeWidth .. ", ("..height + levitate+minimumHeight + barStrokeWidth.." - #Levitate#*[MeasureBand"..k.."]), "..barWidth..", ("..(-1*height).."*[MeasureBand"..k.."] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color" ..k.."# | StrokeWidth "..barStrokeWidth.." | Stroke Color #StrokeColor#,#StrokeAlpha#" )	
		end
	else
        table.insert(t, "Shape= Rectangle 0, ("..barStrokeWidth.."+"..levitate.."*[MeasureBand0]), "..barWidth..", ("..height.."*[MeasureBand0] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color0# | StrokeWidth "..barStrokeWidth.." | Stroke Color #StrokeColor#,#StrokeAlpha#" ) 
		for k = 1, bands-1 do
    	    table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k + barStrokeWidth.. ", ("..barStrokeWidth.."+"..levitate.."*[MeasureBand"..k.."]), "..barWidth..", ("..height.."*[MeasureBand"..k.."] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color" ..k.."# | StrokeWidth "..barStrokeWidth.." | Stroke Color #StrokeColor#,#StrokeAlpha#" )		
    	end
	end
    
    --I can't really explain the transformation matrix. Visit here (https://docs.rainmeter.net/tips/transformation-matrix-guide/) to learn more.
    
    table.insert(t, "TransformationMatrix="..math.cos((-angle%360)*math.pi/180)..";"..(-math.sin((-angle%360*math.pi)/180))..";"..math.sin((-angle%360)*math.pi/180)..";"..math.cos((-angle%360)*math.pi/180)..";(((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos(angle%360*math.pi/180))*width1..":0)+((0<#Angle#%360)&(#Angle#%360<180)?"..math.abs(math.sin((angle%360)*math.pi/180))*height1..":0));(((180<#Angle#%360)&(#Angle#%360<360)?"..math.abs(math.sin(angle%360*math.pi/180))*width1..":0)+((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos((angle%360)*math.pi/180))*height1..":0))")
	table.insert(t, "DynamicVariables = 1")
	--;____________________________________________________________________________________________
    
    --We use file:write() function to write the contents of the table to the file.
    --Inside the paranthesis we concat the contents of table 't' with '\n' or new line. 

    file:write(table.concat(t, "\n"))

    --We close the file.

	file:close()
    --;____________________________________________________________________________________________
    
    --Here we set the Height and Width of ImageUnderlay.

	SKIN: Bang('!WriteKeyValue', 'ImageCover', 'W', width1 , '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
	SKIN: Bang('!WriteKeyValue', 'ImageCover', 'H', height1, '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
end
--From here on you are on your on. I will put a comment here and there for reference but don't expect too much. :)

function DrawReflection()
    local file = io.open(SKIN:GetVariable('@').."MeasuresandBars\\Visualizer.inc", "w")

    --;____________________________________________________________________________________________

	local bands = SKIN:GetVariable("Bands")

	local barWidth= SKIN:GetVariable("BarWidth")
	
    local barGap= SKIN:GetVariable("BarGap")

    local barStrokeWidth= SKIN:GetVariable("BarStrokeWidth")

    local height= SKIN:GetVariable("Height")

    local levitate= SKIN:GetVariable("Levitate")

    local angle= SKIN:GetVariable("Angle")

	local cornerRadius= SKIN:GetVariable("CornerRounding")

	local minimumHeight= SKIN:GetVariable("MinimumHeight")

    local reflectionDistance= SKIN:GetVariable("ReflectionDistance")

    local reflectionPercentage= 1- SKIN:GetVariable("ReflectionPercentage")/100

	local g1xoff= SKIN:GetVariable("Reflection_G1XOffset")

	local g2xoff=SKIN:GetVariable("Reflection_G2XOffset")

    --;____________________________________________________________________________________________

    local a = barWidth + barGap

	local w1= g1xoff>g2xoff and g1xoff or g2xoff

    local width1= (barWidth+barGap)*bands+w1+2*barStrokeWidth-barGap

    local height1= 2*height+2*levitate+2*minimumHeight+reflectionDistance

    --;____________________________________________________________________________________________
	local t = {}

    table.insert(t, "[MeterShape]\nMeter=Shape")

    table.insert(t, "W="..math.abs(math.cos(angle%360*math.pi/180))*width1 + math.abs(math.sin(angle%360*math.pi/180))*height1)
    table.insert(t, "H="..math.abs(math.sin(angle%360*math.pi/180))*width1 + math.abs(math.cos(angle%360*math.pi/180))*height1)

	table.insert(t, "Shape= Rectangle ".. g1xoff + barStrokeWidth..", ("..height + levitate+minimumHeight - barStrokeWidth.." - #Levitate#*[MeasureBand0]), "..barWidth..", ("..(-1*height).."*[MeasureBand0] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color0# | StrokeWidth " ..barStrokeWidth.." | Stroke Color #StrokeColor#,#StrokeAlpha#" )
	for k = 1, bands-1 do
        table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k +g1xoff+ barStrokeWidth .. ", ("..height + levitate+minimumHeight.." - #Levitate#*[MeasureBand"..k.."]), "..barWidth..", ("..(-1*height).."*[MeasureBand"..k.."] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color" ..k.."# | StrokeWidth" ..barStrokeWidth.." | Stroke Color #StrokeColor#,#StrokeAlpha#" )
    end
    for j = bands+1, 2*bands do
        table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-bands-1)+ g2xoff + barStrokeWidth.. ",("..height + reflectionDistance+minimumHeight.." + #Levitate#*[MeasureBand"..(j-bands-1).."]), "..barWidth..", ("..height.."*[MeasureBand"..(j-bands-1).."] + #MinimumHeight#), "..cornerRadius.." | StrokeWidth " ..barStrokeWidth.." | Fill LinearGradient MyGradient"..(j-bands-1).. " | Stroke LinearGradient MyStrokeGradient\n" .. "MyGradient"..(j-bands-1).." = 90 | #Color"..(j-bands-1).."#,0;0.0 | #Color"..(j-bands-1).."#,0;"..reflectionPercentage.." | #Color"..(j-bands-1).."#, 150;1.0")
    end
    table.insert(t, "MyStrokeGradient= 90 | #StrokeColor#,0;0.0 | #StrokeColor#,0;"..reflectionPercentage.." | #StrokeColor#,150;1.0")
    table.insert(t, "TransformationMatrix="..math.cos((-angle%360)*math.pi/180)..";"..(-math.sin((-angle%360*math.pi)/180))..";"..math.sin((-angle%360)*math.pi/180)..";"..math.cos((-angle%360)*math.pi/180)..";(((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos(angle%360*math.pi/180))*width1..":0)+((0<#Angle#%360)&(#Angle#%360<180)?"..math.abs(math.sin((angle%360)*math.pi/180))*height1..":0));(((180<#Angle#%360)&(#Angle#%360<360)?"..math.abs(math.sin(angle%360*math.pi/180))*width1..":0)+((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos((angle%360)*math.pi/180))*height1..":0))")
	table.insert(t, "DynamicVariables = 1")

    --;____________________________________________________________________________________________

	file:write(table.concat(t, "\n"))
	file:close()
	SKIN: Bang('!WriteKeyValue', 'ImageCover', 'W', width1, '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
	SKIN: Bang('!WriteKeyValue', 'ImageCover', 'H', height1, '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
end

function DrawMirrorY()
    local file = io.open(SKIN:GetVariable('@').."MeasuresandBars\\Visualizer.inc", "w")

    --;____________________________________________________________________________________________

	local bands = SKIN:GetVariable("Bands")

	local barWidth= SKIN:GetVariable("BarWidth")
	
    local barGap= SKIN:GetVariable("BarGap")

	local flip = SKIN:GetVariable("flipBool")

    local barStrokeWidth= SKIN:GetVariable("BarStrokeWidth")

    local height= SKIN:GetVariable("Height")

    local levitate= SKIN:GetVariable("Levitate")

    local angle= SKIN:GetVariable("Angle")

	local cornerRadius= SKIN:GetVariable("CornerRounding")

	local minimumHeight= SKIN:GetVariable("MinimumHeight")

    local gr1xoff= SKIN:GetVariable("MirrorY_G1XOffset")

    local gr2xoff= SKIN:GetVariable("MirrorY_G2XOffset")

    local gr1yoff= SKIN:GetVariable("MirrorY_G1YOffset")

    local gr2yoff= SKIN:GetVariable("MirrorY_G2YOffset")

    --;____________________________________________________________________________________________

    local a = barWidth + barGap

    local groupWidth= gr1xoff>gr2xoff and gr1xoff or gr2xoff

    local width1= (barWidth+barGap)*bands+2*barStrokeWidth+groupWidth-barGap

    local height1= 2*height+2*levitate+4*barStrokeWidth+2*minimumHeight+gr2yoff

	print(height1)

    --;____________________________________________________________________________________________
	local t = {}

    table.insert(t, "[MeterShape]\nMeter=Shape")

    table.insert(t, "W="..math.abs(math.cos(angle%360*math.pi/180))*width1 + math.abs(math.sin(angle%360*math.pi/180))*height1)
    table.insert(t, "H="..math.abs(math.sin(angle%360*math.pi/180))*width1 + math.abs(math.cos(angle%360*math.pi/180))*height1)

	if flip == '0' then
		table.insert(t, "Shape= Rectangle "..barStrokeWidth+gr1xoff..", ("..height + levitate+minimumHeight + gr1yoff + 2*barStrokeWidth.." - #Levitate#*[MeasureBand0]), "..barWidth..", ("..(-1*height).."*[MeasureBand0] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color0# | StrokeWidth" ..barStrokeWidth ) 
	   	for k = 1, bands-1 do
			table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k +barStrokeWidth+ gr1xoff .. ", ("..height + levitate+minimumHeight + gr1yoff + 2*barStrokeWidth.." - #Levitate#*[MeasureBand"..k.."]), "..barWidth..", ("..(-1*height).."*[MeasureBand"..k.."] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color" ..k.."# | StrokeWidth" ..barStrokeWidth )
    	end
    	for j = bands+1, 2*bands do
    	    table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-bands-1)+barStrokeWidth + gr2xoff .. ",("..height + levitate+minimumHeight +2*barStrokeWidth+ gr2yoff.. "+ #Levitate#*[MeasureBand"..(j-bands-1).."]), "..barWidth..", ("..height.."*[MeasureBand"..(j-bands-1).."] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color"..(j-bands-1).."# | StrokeWidth" ..barStrokeWidth)
    	end
    else
		table.insert(t, "Shape= Rectangle "..gr1xoff+barStrokeWidth..", ("..gr1yoff +barStrokeWidth.."+#Levitate#*[MeasureBand0]), "..barWidth..", (#Height#*[MeasureBand0] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color0# | StrokeWidth" ..barStrokeWidth ) 
		for k = 1, bands-1 do
			table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k +barStrokeWidth+ gr1xoff .. ", ("..gr1yoff+barStrokeWidth.."+#Levitate#*[MeasureBand"..k.."]), "..barWidth..", ("..height.."*[MeasureBand"..k.."] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color" ..k.."# | StrokeWidth" ..barStrokeWidth )
    	end
    	for j = bands+1, 2*bands do
    	    table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-bands-1)+barStrokeWidth + gr2xoff.. ",("..2*(height + levitate+minimumHeight) + gr2yoff-barStrokeWidth.." - #Levitate#*[MeasureBand"..(j-bands-1).."]), "..barWidth..", ("..(-1*height).."*[MeasureBand"..(j-bands-1).."] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color"..(j-bands-1).."# | StrokeWidth" ..barStrokeWidth)
    	end
	end
    
    table.insert(t, "TransformationMatrix="..math.cos((-angle%360)*math.pi/180)..";"..(-math.sin((-angle%360*math.pi)/180))..";"..math.sin((-angle%360)*math.pi/180)..";"..math.cos((-angle%360)*math.pi/180)..";(((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos(angle%360*math.pi/180))*width1..":0)+((0<#Angle#%360)&(#Angle#%360<180)?"..math.abs(math.sin((angle%360)*math.pi/180))*height1..":0));(((180<#Angle#%360)&(#Angle#%360<360)?"..math.abs(math.sin(angle%360*math.pi/180))*width1..":0)+((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos((angle%360)*math.pi/180))*height1..":0))")
	table.insert(t, "DynamicVariables = 1")

    --;____________________________________________________________________________________________

	file:write(table.concat(t, "\n"))
	file:close()
	SKIN: Bang('!WriteKeyValue', 'ImageCover', 'W', width1, '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
	SKIN: Bang('!WriteKeyValue', 'ImageCover', 'H', height1, '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
end

function DrawMirrorX()
    local file = io.open(SKIN:GetVariable('@').."MeasuresandBars\\Visualizer.inc", "w")
    
    local bands = SKIN:GetVariable("Bands")

    local barWidth= SKIN:GetVariable("BarWidth")
	
    local barGap= SKIN:GetVariable("BarGap")

	local flip = SKIN:GetVariable("flipBool")

    local barStrokeWidth= SKIN:GetVariable("BarStrokeWidth")

    local height= SKIN:GetVariable("Height")

    local levitate= SKIN:GetVariable("Levitate")

    local angle= SKIN:GetVariable("Angle")

	local cornerRadius= SKIN:GetVariable("CornerRounding")

	local minimumHeight= SKIN:GetVariable("MinimumHeight")

    --;____________________________________________________________________________________________

    local gr1xoff= SKIN:GetVariable("MirrorX_G1XOffset")

    local gr2xoff= SKIN:GetVariable("MirrorX_G2XOffset")

    local gr1yoff= SKIN:GetVariable("MirrorX_G1YOffset")

    local gr2yoff= SKIN:GetVariable("MirrorX_G2YOffset")
    --;____________________________________________________________________________________________

    local a = barWidth + barGap

    local width1= (2*(barWidth+barGap)*bands+4*barStrokeWidth+gr2xoff-barGap)

    local height1= (height+levitate+2*barStrokeWidth+minimumHeight+(gr1yoff>gr2yoff and gr1yoff or gr2yoff))
    --;____________________________________________________________________________________________

    local t = {}
	table.insert(t, "[MeterShape]\nMeter=Shape")
    table.insert(t, "W="..math.abs(math.cos(angle%360*math.pi/180))*width1 + math.abs(math.sin(angle%360*math.pi/180))*height1)
    table.insert(t, "H="..math.abs(math.sin(angle%360*math.pi/180))*width1 + math.abs(math.cos(angle%360*math.pi/180))*height1)
    
    table.insert(t, "Shape= Rectangle "..gr1xoff+barStrokeWidth..", ("..height + levitate+minimumHeight + gr1yoff +barStrokeWidth.." - #Levitate#*[MeasureBand0]), "..barWidth..", ("..(-1*height).."*[MeasureBand0] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color0# | StrokeWidth " ..barStrokeWidth ) 
    for k = 1, bands-1 do
		table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k + gr1xoff+barStrokeWidth .. ", ("..height + levitate+minimumHeight + gr1yoff+barStrokeWidth.." - #Levitate#*[MeasureBand"..k.."]), "..barWidth..", ("..(-1*height).."*[MeasureBand"..k.."] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color" ..k.."# | StrokeWidth " ..barStrokeWidth )
	end
	for j = bands+1, 2*bands do
		table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-1) + gr2xoff +barStrokeWidth.. ",("..height + levitate+minimumHeight + gr2yoff+barStrokeWidth.." - #Levitate#*[MeasureBand"..(bands*2 - j).."]), "..barWidth..", ("..(-1*height).."*[MeasureBand"..(bands*2 - j).."] - #MinimumHeight#), "..cornerRadius.."| Fill Color #Color"..(bands*2 - j).."# | StrokeWidth " ..barStrokeWidth)
	end
    
    table.insert(t, "TransformationMatrix="..math.cos((-angle%360)*math.pi/180)..";"..(-math.sin((-angle%360*math.pi)/180))..";"..math.sin((-angle%360)*math.pi/180)..";"..math.cos((-angle%360)*math.pi/180)..";(((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos(angle%360*math.pi/180))*width1..":0)+((0<#Angle#%360)&(#Angle#%360<180)?"..math.abs(math.sin((angle%360)*math.pi/180))*height1..":0));(((180<#Angle#%360)&(#Angle#%360<360)?"..math.abs(math.sin(angle%360*math.pi/180))*width1..":0)+((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos((angle%360)*math.pi/180))*height1..":0))")
	table.insert(t, "DynamicVariables = 1")
	--;____________________________________________________________________________________________
    
    file:write(table.concat(t, "\n"))
    file:close()
    --;____________________________________________________________________________________________
    
    SKIN: Bang('!WriteKeyValue', 'ImageCover', 'W', width1 , '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
	SKIN: Bang('!WriteKeyValue', 'ImageCover', 'H', height1, '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
end

function DrawMirrorXY()
    local num = SKIN:GetVariable("Bands")

	local file = io.open(SKIN:GetVariable('@').."MeasuresandBars\\Visualizer.inc", "w")

    local barWidth= SKIN:GetVariable("BarWidth")
	
    local barGap= SKIN:GetVariable("BarGap")
    
    local barStrokeWidth= SKIN:GetVariable("BarStrokeWidth")

    local height= SKIN:GetVariable("Height")

    local levitate= SKIN:GetVariable("Levitate")

    local angle= SKIN:GetVariable("Angle")

	local cornerRadius= SKIN:GetVariable("CornerRounding")

	local minimumHeight= SKIN:GetVariable("MinimumHeight")

    local gr1xoff = SKIN:GetVariable("MirrorXY_G1XOffset")

    local gr2xoff = SKIN:GetVariable("MirrorXY_G2XOffset")

    local gr3xoff = SKIN:GetVariable("MirrorXY_G3XOffset")

	local gr4xoff = SKIN:GetVariable("MirrorXY_G4XOffset")

    local gr1yoff = SKIN:GetVariable("MirrorXY_G1YOffset")

    local gr2yoff = SKIN:GetVariable("MirrorXY_G2YOffset")

    local gr3yoff = SKIN:GetVariable("MirrorXY_G3YOffset")

	local gr4yoff = SKIN:GetVariable("MirrorXY_G4YOffset")

	local flip=SKIN:GetVariable("flipBool")

    local a = barWidth + barGap

	local groupWidth= (gr1xoff+gr2xoff > gr3xoff+gr4xoff) and gr1xoff+gr2xoff or gr3xoff+gr4xoff 

    local width1=(2*(barWidth+barGap)*num+groupWidth+4*barStrokeWidth+2*barStrokeWidth-barGap)

	local groupHeight= (gr1yoff>gr2yoff and gr1yoff or gr2yoff) + (gr3yoff>gr4yoff and gr3yoff or gr4yoff)

    local height1=(2*height+2*levitate+4*barStrokeWidth+2*minimumHeight+groupHeight)

	local t = {}

    table.insert(t, "[MeterShape]\nMeter=Shape")

    table.insert(t, "W=" .. math.abs(math.cos(angle%360*math.pi/180))*width1 + math.abs(math.sin(angle%360*math.pi/180))*height1)

    table.insert(t, "H=" .. math.abs(math.sin(angle%360*math.pi/180))*width1 + math.abs(math.cos(angle%360*math.pi/180))*height1)

	if flip == '0' then
    	table.insert(t, "Shape= Rectangle "..gr1xoff+barStrokeWidth..",(" .. height + levitate+ gr1yoff+minimumHeight +barStrokeWidth .. "-".. levitate .."*[MeasureBand0])," .. barWidth .. ",(".. -1*height .. "*[MeasureBand0] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color0# | StrokeWidth ".. barStrokeWidth ) 

		for k = 1, num-1 do
    	    table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k + gr1xoff+barStrokeWidth .. ",(" .. height + levitate + gr1yoff+minimumHeight+barStrokeWidth .. "-".. levitate .."*[MeasureBand"..k.."]),".. barWidth ..",(".. -1*height .."*[MeasureBand"..k.."] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color" ..k.."# | StrokeWidth "..barStrokeWidth )
    	end
    	for j = num+1, 2*num do
    	    table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-1) + gr2xoff+barStrokeWidth .. ",(" .. height + levitate + gr2yoff +minimumHeight+barStrokeWidth.. " -".. levitate .."*[MeasureBand"..(num*2 - j).."]),".. barWidth..",(".. -1*height .."*[MeasureBand"..(num*2 - j).."] - #MinimumHeight#), "..cornerRadius.." | Fill Color #Color"..(num*2 - j).."# | StrokeWidth "..barStrokeWidth)
    	end
		for i = 2*num+1, 3*num do
    	    table.insert(t, "Shape" .. i .. "=Rectangle " .. a*(i-2*num-1) + gr3xoff+barStrokeWidth .. ",(".. height + levitate + gr3yoff+minimumHeight+barStrokeWidth .."+".. levitate .."*[MeasureBand"..(i-2*num-1).."]),".. barWidth..", ("..height.."*[MeasureBand"..(i-2*num-1).."] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color"..(i-2*num-1).."# | StrokeWidth "..barStrokeWidth)
    	end
    	for h = 3*num+1, 4*num do
    	    table.insert(t, "Shape" .. h .. "=Rectangle " .. a*(h-2*num-1) + gr4xoff+barStrokeWidth .. ",(".. height + levitate + gr4yoff+minimumHeight+barStrokeWidth .."+".. levitate .."*[MeasureBand"..(num*4 - h).."]),"..barWidth..", ("..height.."*[MeasureBand"..(num*4 - h).."] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color"..(num*4 - h).."# | StrokeWidth "..barStrokeWidth)
    	end
	else
    	table.insert(t, "Shape= Rectangle "..gr1xoff..", ("..gr1yoff.." +#Levitate#*[MeasureBand0]), "..barWidth..", ("..height.."*[MeasureBand0] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color0# | StrokeWidth" ..barStrokeWidth) 

		for k = 1, num-1 do
    	    table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k+gr1xoff .. ", ("..gr1yoff.."+#Levitate#*[MeasureBand"..k.."]), "..barWidth..", ("..height.."*[MeasureBand"..k.."] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color" ..k.."# | StrokeWidth" ..barStrokeWidth)
    	end
    	for j = num+1, 2*num do
    	    table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-1)+gr1xoff.. ",("..gr2yoff.."+#Levitate#*[MeasureBand"..(num*2 - j).."]), "..barWidth..", ("..height.."*[MeasureBand"..(num*2 - j).."] + #MinimumHeight#), "..cornerRadius.." | Fill Color #Color"..(num*2 - j).."# | StrokeWidth" ..barStrokeWidth)
    	end
		for i = 2*num+1, 3*num do
    	    table.insert(t, "Shape" .. i .. "=Rectangle " .. a*(i-2*num-1)+gr2xoff.. ",("..2*(height+levitate+minimumHeight) + gr3yoff.." -".. levitate .."*[MeasureBand"..(i-2*num-1).."]), "..barWidth..", ("..(-1*height).."*[MeasureBand"..(i-2*num-1).."] - #MinimumHeight#), "..cornerRadius.."| Fill Color #Color"..(i-2*num-1).."# | StrokeWidth" ..barStrokeWidth)
    	end
    	for h = 3*num+1, 4*num do
    	    table.insert(t, "Shape" .. h .. "=Rectangle " .. a*(h-2*num-1)+gr2xoff.. ",("..2*(height+levitate+minimumHeight) + gr4yoff.." -".. levitate .."*[MeasureBand"..(num*4 - h).."]), "..barWidth..", ("..(-1*height).."*[MeasureBand"..(num*4 - h).."] - #MinimumHeight#), "..cornerRadius.."| Fill Color #Color"..(num*4 - h).."# | StrokeWidth" ..barStrokeWidth)
    	end
	end

    table.insert(t, "TransformationMatrix="..math.cos((-angle%360)*math.pi/180)..";"..(-math.sin((-angle%360*math.pi)/180))..";"..math.sin((-angle%360)*math.pi/180)..";"..math.cos((-angle%360)*math.pi/180)..";(((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos(angle%360*math.pi/180))*width1..":0)+((0<#Angle#%360)&(#Angle#%360<180)?"..math.abs(math.sin((angle%360)*math.pi/180))*height1..":0));(((180<#Angle#%360)&(#Angle#%360<360)?"..math.abs(math.sin(angle%360*math.pi/180))*width1..":0)+((90<#Angle#%360)&(#Angle#%360<270)?"..math.abs(math.cos((angle%360)*math.pi/180))*height1..":0))")
	table.insert(t, "DynamicVariables = 1")

	file:write(table.concat(t, "\n"))
	file:close()
	SKIN: Bang('!WriteKeyValue', 'ImageCover', 'W', width1, '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
	SKIN: Bang('!WriteKeyValue', 'ImageCover', 'H', height1, '#SKINSPATH#ASimpleVisualizer\\Visualizer\\ASimpleVisualizer.ini')
end

function CreateColors()
    local num = SKIN:GetVariable("ColorCount")
	local colornum = num-1
	local barCount = SKIN:GetVariable("Bands")
	local defaultColor= SKIN:GetVariable("ColorA1")
	local bartype = SKIN:GetVariable("BarType")
	local liveAlphaBool=SKIN:GetVariable("LiveAlphaBool")
	
    local fileColors = io.open(SKIN:GetVariable('@').."Variables\\Gradient.inc", "w")

    local calc={}
	for i = 1, 10 do
		table.insert(calc, i, ( i~=colornum ) and (barCount - barCount%colornum)*i/colornum or barCount)
	end
	local red={}
	for i = 0, colornum do
    	table.insert(red,i,substituteRed(SKIN:GetVariable("ColorA" .. i)))
	end

	local green={}
	for i = 0, colornum do
    	table.insert(green,i,substituteGreen(SKIN:GetVariable("ColorA" .. i)))
	end

	local blue={}
	for i = 0, colornum do
    	table.insert(blue,i,substituteBlue(SKIN:GetVariable("ColorA" .. i)))
	end

	local alpha= {}
	if liveAlphaBool=='1' then
		for i= 0, barCount-1 do
			table.insert(alpha, i, ",([#MinAlpha] + ([#MaxAlpha] - [#MinAlpha])*[MeasureBand"..i.."])")
		end
	else
		for i= 0,barCount-1 do
			table.insert(alpha, i, ",[#MaxAlpha]")
		end
	end

	print(alpha[0])
    local c = {}

    table.insert(c, "[Variables]")
	if 	bartype ~= 'Reflection' then
		if colornum>=1 then
			for i = 0, calc[1]-1 do	
				table.insert(c, "Color" ..i.. "=" ..red[0] + (red[1] - red[0])*i/calc[1] .. "," ..green[0] + (green[1] - green[0])*i/calc[1] .. "," ..blue[0] + (blue[1] - blue[0])*i/calc[1] .. alpha[i] )
			end
			for i = calc[1], calc[2]-1 do
				if colornum<2 then
					break
				end
				table.insert(c, "Color" ..i.. "=" ..red[1] + (red[2] - red[1])*(i-calc[1])/(calc[2]-calc[1]) .. "," ..green[1] + (green[2] - green[1])*(i-calc[1])/(calc[2]-calc[1]) .. "," ..blue[1] + (blue[2] - blue[1])*(i-calc[1])/(calc[2]-calc[1]) .. alpha[i] )
			end
			for i = calc[2], calc[3]-1 do
				if colornum<3 then
					break
				end
				table.insert(c, "Color" ..i.. "=" ..red[2] + (red[3] - red[2])*(i-calc[2])/(calc[3]-calc[2]) .. "," ..green[2] + (green[3] - green[2])*(i-calc[2])/(calc[3]-calc[2]) .. "," ..blue[2] + (blue[3] - blue[2])*(i-calc[2])/(calc[3]-calc[2]) .. alpha[i] )
			end
			for i = calc[3], calc[4]-1 do
				if colornum<4 then
					break
				end
				table.insert(c, "Color" ..i.. "=" ..red[3] + (red[4] - red[3])*(i-calc[3])/(calc[4]-calc[3]) .. "," ..green[3] + (green[4] - green[3])*(i-calc[3])/(calc[4]-calc[3]) .. "," ..blue[3] + (blue[4] - blue[3])*(i-calc[3])/(calc[4]-calc[3]) .. alpha[i] )
			end
			for i = calc[4], calc[5]-1 do
				if colornum<5 then
					break
				end
				table.insert(c, "Color" ..i.. "=" ..red[4] + (red[5] - red[4])*(i-calc[4])/(calc[5]-calc[4]) .. "," ..green[4] + (green[5] - green[4])*(i-calc[4])/(calc[5]-calc[4]) .. "," ..blue[4] + (blue[5] - blue[4])*(i-calc[4])/(calc[5]-calc[4]) .. alpha[i] )
			end
			for i = calc[5], calc[6]-1 do
				if colornum<6 then
					break
				end
				table.insert(c, "Color" ..i.. "=" ..red[5] + (red[6] - red[5])*(i-calc[5])/(calc[6]-calc[5]) .. "," ..green[5] + (green[6] - green[5])*(i-calc[5])/(calc[6]-calc[5]) .. "," ..blue[5] + (blue[6] - blue[5])*(i-calc[5])/(calc[6]-calc[5]) .. alpha[i] )
			end
		else
			for i = 0, barCount-1 do
				table.insert(c, "Color" ..i.. "=" ..defaultColor .. alpha[i])
			end
		end
	else
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
				table.insert(c, "Color" ..i.. "=" ..red[2] + (red[3] - red[2])*(i-calc[2])/(calc[3]-calc[2]) .. "," ..green[2] + (green[3] - green[2])*(i-calc[2])/(calc[3]-calc[2]) .. "," ..blue[2] + (blue[3] - blue[2])*(i-calc[2])/(calc[3]-calc[2]))
			end
			for i = calc[3], calc[4]-1 do
				if colornum<4 then
					break
				end
				table.insert(c, "Color" ..i.. "=" ..red[3] + (red[4] - red[3])*(i-calc[3])/(calc[4]-calc[3]) .. "," ..green[3] + (green[4] - green[3])*(i-calc[3])/(calc[4]-calc[3]) .. "," ..blue[3] + (blue[4] - blue[3])*(i-calc[3])/(calc[4]-calc[3]))
			end
			for i = calc[4], calc[5]-1 do
				if colornum<5 then
					break
				end
				table.insert(c, "Color" ..i.. "=" ..red[4] + (red[5] - red[4])*(i-calc[4])/(calc[5]-calc[4]) .. "," ..green[4] + (green[5] - green[4])*(i-calc[4])/(calc[5]-calc[4]) .. "," ..blue[4] + (blue[5] - blue[4])*(i-calc[4])/(calc[5]-calc[4]))
			end
			for i = calc[5], calc[6]-1 do
				if colornum<6 then
					break
				end
				table.insert(c, "Color" ..i.. "=" ..red[5] + (red[6] - red[5])*(i-calc[5])/(calc[6]-calc[5]) .. "," ..green[5] + (green[6] - green[5])*(i-calc[5])/(calc[6]-calc[5]) .. "," ..blue[5] + (blue[6] - blue[5])*(i-calc[5])/(calc[6]-calc[5]))
			end
		else
			for i = 0, barCount-1 do
				table.insert(c, "Color" ..i.. "=" ..defaultColor)
			end
		end
	end		
	
	fileColors:write(table.concat(c, "\n"))
	fileColors:close()
end

function substituteRed(value)
    return (string.gsub(value, "^(%d*),%s?(%d+),%s?(%d+)$" , "%1"))
end
function substituteGreen(value)
    return (string.gsub(value, "^(%d*),%s?(%d+),%s?(%d+)$" , "%2"))
end
function substituteBlue(value)
    return (string.gsub(value, "^(%d*),%s?(%d+),%s?(%d+)$" , "%3"))
end

function GetAudioDevices()
    local file = io.open(SKIN:GetVariable('@').."DeviceID\\DeviceID.ps1", "w")
    local t={}
    
    table.insert(t,1, 'New-Item "$($profile | split-path)\\Modules\\AudioDeviceCmdlets" -Type directory -Force\nCopy-Item "'..SKIN:GetVariable('@')..'DeviceID\\AudioDeviceCmdlets.dll" "$($profile | split-path)\\Modules\\AudioDeviceCmdlets\\AudioDeviceCmdlets.dll"\nSet-Location "$($profile | Split-Path)\\Modules\\AudioDeviceCmdlets"\nGet-ChildItem | Unblock-File\nImport-Module AudioDeviceCmdlets\nGet-AudioDevice -List')

    file:write(t[1])
    file:close()
    SKIN:Bang("powershell.exe -ExecutionPolicy ByPass -NoExit #@#DeviceID\\DeviceID.ps1")
end
function changePS1()
    local filenew = io.open(SKIN:GetVariable('@').."DeviceID\\DeviceID.ps1", "w")
    local t = {}
    table.insert(t,1, "Get-AudioDevice -List")

    filenew:write(t[1])
    filenew:close()
	SKIN:Bang('!WriteKeyValue', 'GetIDString', 'Text', 'GetIDs', '#SKINSPATH#ASimpleVisualizer\\settings\\categories\\7.inc')
	SKIN:Bang('!WriteKeyValue', 'GetID', 'LeftMouseUpAction', '[powershell.exe -ExecutionPolicy ByPass -NoExit #@#DeviceID\\DeviceID.ps1]', '#SKINSPATH#ASimpleVisualizer\\settings\\categories\\7.inc' )
	SKIN:Bang('!Refresh')
end