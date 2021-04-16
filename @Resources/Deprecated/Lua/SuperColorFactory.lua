function CreateColors()
	local num = SKIN:GetVariable("ColorCount")
	local colornum = num-1
    print(colornum)
	local barCount = SKIN:GetVariable("Bands")
	local defaultColor= SKIN:GetVariable("ColorA1")
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


