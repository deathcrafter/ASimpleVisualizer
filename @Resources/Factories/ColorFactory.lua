function Initialize()
	local num = SELF:GetNumberOption("Number")
	local barCount = SKIN:GetVariable("Bands")
	local sectionName = SELF:GetOption("SectionName")
	local defaultColor= SKIN:GetVariable("DefaultColor")
	
	a=(barCount - barCount%num)*1/num
	b=(barCount - barCount%num)*2/num
	c=(barCount - barCount%num)*3/num
	d=(barCount - barCount%num)*4/num
	local calc={}
	for i = 1, 10 do
		table.insert(calc, i, ( i~=num ) and (barCount - barCount%num)*i/num or barCount)
	end
	local red={}
	for i = 0, num do
		local color={}
		table.insert(color,i,SKIN:GetMeasure("ColorRed" .. i))
    	table.insert(red,i,color[i]:GetStringValue())
	end

	local green={}
	for i = 0, num do
		local color={}
		table.insert(color,i,SKIN:GetMeasure("ColorGreen" .. i))
    	table.insert(green,i,color[i]:GetStringValue())
	end

	local blue={}
	for i = 0, num do
		local color={}
		table.insert(color,i,SKIN:GetMeasure("ColorBlue" .. i))
    	table.insert(blue,i,color[i]:GetStringValue())
	end

	local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
	
	local t = {}

    table.insert(t, "[" ..sectionName.. "]")	
	if num>=1 then
		for i = 0, calc[1]-1 do	
			table.insert(t, "Color" ..i.. "=" ..red[0] + (red[1] - red[0])*i/calc[1] .. "," ..green[0] + (green[1] - green[0])*i/calc[1] .. "," ..blue[0] + (blue[1] - blue[0])*i/calc[1] )
		end
		for i = calc[1], calc[2]-1 do
			if num<2 then
				break
			end
			table.insert(t, "Color" ..i.. "=" ..red[1] + (red[2] - red[1])*(i-calc[1])/(calc[2]-calc[1]) .. "," ..green[1] + (green[2] - green[1])*(i-calc[1])/(calc[2]-calc[1]) .. "," ..blue[1] + (blue[2] - blue[1])*(i-calc[1])/(calc[2]-calc[1]) )
		end
		for i = calc[2], calc[3]-1 do
			if num<3 then
				break
			end
			table.insert(t, "Color" ..i.. "=" ..red[2] + (red[3] - red[2])*(i-calc[2])/(calc[3]-calc[2]) .. "," ..green[2] + (green[3] - green[2])*(i-calc[2])/(calc[3]-calc[2]) .. "," ..blue[2] + (blue[3] - blue[2])*(i-calc[2])/(calc[3]-calc[2]) )
		end
		for i = calc[3], calc[4]-1 do
			if num<4 then
				break
			end
			table.insert(t, "Color" ..i.. "=" ..red[3] + (red[4] - red[3])*(i-calc[3])/(calc[4]-calc[3]) .. "," ..green[3] + (green[4] - green[3])*(i-calc[3])/(calc[4]-calc[3]) .. "," ..blue[3] + (blue[4] - blue[3])*(i-calc[3])/(calc[4]-calc[3]) )
		end
		for i = calc[4], calc[5]-1 do
			if num<5 then
				break
			end
			table.insert(t, "Color" ..i.. "=" ..red[4] + (red[5] - red[4])*(i-calc[4])/(calc[5]-calc[4]) .. "," ..green[4] + (green[5] - green[4])*(i-calc[4])/(calc[5]-calc[4]) .. "," ..blue[4] + (blue[5] - blue[4])*(i-calc[4])/(calc[5]-calc[4]) )
		end
		for i = calc[5], calc[6]-1 do
			if num<6 then
				break
			end
			table.insert(t, "Color" ..i.. "=" ..red[5] + (red[6] - red[5])*(i-calc[5])/(calc[6]-calc[5]) .. "," ..green[5] + (green[6] - green[5])*(i-calc[5])/(calc[6]-calc[5]) .. "," ..blue[5] + (blue[6] - blue[5])*(i-calc[5])/(calc[6]-calc[5]) )
		end
	else
		for i = 0, barCount-1 do
			table.insert(t, "Color" ..i.. "=" ..defaultColor)
		end
	end

	
	file:write(table.concat(t, "\n"))
	file:close()
    
end

function doSub(value, i)
	return value:gsub("%%%%", i):gsub("{.-}", parseFormula)
end