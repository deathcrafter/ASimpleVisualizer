function Initialize()
	local num = SKIN:GetVariable("Bands")

	local file = io.open(SKIN:MakePathAbsolute("@Resources\\MeasuresandBars\\Measures.inc"), "w")
	
	local t = {}
	

	for i = 0, num-1 do
		table.insert(t, "[MeasureBand" .. i .. "]".."\n".."Measure=Plugin\nPlugin=AudioLevel\nParent=MeasureAudio\nType=Band\nBandIdx="..i.."")
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
