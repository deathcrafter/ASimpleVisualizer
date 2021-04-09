function Initialize()
	local num = SELF:GetNumberOption("Number")
	local sectionName = SELF:GetOption("SectionName")

	local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
	
	local t = {}
	

	for i = 0, num-1 do
		table.insert(t, "[" .. doSub(sectionName, i) .. "]")
		local j = 0
		
		while true do
			local opt = SELF:GetOption("Option" .. j)
			if opt == "" then
				break
			end
			table.insert(t, opt .. "=" .. doSub(SELF:GetOption("Value" .. j), i))
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

-- sub to remove {the curly braces}, then add (parentheses), then parse it
function parseFormula(formula)
	return SKIN:ParseFormula("(" .. formula:sub(2, -2) .. ")")
end
