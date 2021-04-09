function Initialize()
	local num = SELF:GetNumberOption("Number")
	local sectionName = SELF:GetOption("SectionName")

	local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
	
	local t = {}
	

	for i = 0, num-1 do
		table.insert(t, "[" .. doRed(sectionName, i) .. "]")
		local j = 0
		
		while true do
			local opt = SELF:GetOption("Option" .. j)
			if opt == "" then
				break
			end
			if j == 3 then
				table.insert(t, opt .. "=" ..SELF:GetOption("Value" .. j).."1\"")
			else
				table.insert(t, opt .. "=" .. doSub(SELF:GetOption("Value" .. j), i))
			end
			j = j + 1
		end
	end
	for i = 0, num-1 do
		table.insert(t, "[" .. doGreen(sectionName, i) .. "]")
		local j = 0
		
		while true do
			local opt = SELF:GetOption("Option" .. j)
			if opt == "" then
				break
			end
			if j == 3 then
				table.insert(t, opt .. "=" ..SELF:GetOption("Value" .. j).."2\"")
			else
				table.insert(t, opt .. "=" .. doSub(SELF:GetOption("Value" .. j), i))
			end
			j = j + 1
		end
	end
	for i = 0, num-1 do
		table.insert(t, "[" .. doBlue(sectionName, i) .. "]")
		local j = 0
		
		while true do
			local opt = SELF:GetOption("Option" .. j)
			if opt == "" then
				break
			end
			if j == 3 then
				table.insert(t, opt .. "=" ..SELF:GetOption("Value" .. j).."3\"")
			else
				table.insert(t, opt .. "=" .. doSub(SELF:GetOption("Value" .. j), i))
			end
			j = j + 1
		end
	end
	
	file:write(table.concat(t, "\n"))
	file:close()
end

-- does all the substitution!
function doSub(value, i)
	return value:gsub("%%%%", i):gsub("{.-}", parseFormula)
end

function doRed(value,i)
	return value:gsub("%%%%", i):gsub("&&&&", "Red")
end

function doGreen(value,i)
	return value:gsub("%%%%", i):gsub("&&&&", "Green")
end

function doBlue(value,i)
	return value:gsub("%%%%", i):gsub("&&&&", "Blue")
end

-- sub to remove {the curly braces}, then add (parentheses), then parse it
function parseFormula(formula)
	return SKIN:ParseFormula("(" .. formula:sub(2, -2) .. ")")
end
