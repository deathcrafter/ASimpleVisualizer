function Initialize()
	local num = SELF:GetNumberOption("Number")
	local sectionName = SELF:GetOption("SectionName")

	local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
	
	local t = {}

    m=math.random(6, 13)

    n=math.random(8,14)

    o=math.random(15,18)

	p=math.random(23,25)

	for i = 0, num-1 do
		table.insert(t, "[" .. doSub(sectionName, i) .. "]")
		local j = 0
		
		while true do
			local opt = SELF:GetOption("Option" .. j)
            
			if opt == "" then
				break
			end
			if i%7 == 0 and i ~= 0 then
				table.insert(t, opt .. "=" .. doSub4(SELF:GetOption("Value" .. j), i))
			elseif i%5 == 0 and i ~= 0 then
            	table.insert(t, opt .. "=" .. doSub3(SELF:GetOption("Value" .. j), i))
            elseif i%2 == 0 and i ~= 0 then
			    table.insert(t, opt .. "=" .. doSub2(SELF:GetOption("Value" .. j), i))
            else
                table.insert(t, opt .. "=" .. doSub(SELF:GetOption("Value" .. j), i))
            end
			j = j + 1
		end
	end
	
	file:write(table.concat(t, "\n"))
	file:close()
	SKIN:Bang('!Redraw')
end

-- does all the substitution!
function doSub(value, i)
	return value:gsub("%%%%", i):gsub("&&", m):gsub("{.-}", parseFormula)
end

function doSub2(value, i)
	return value:gsub("%%%%", i):gsub("&&", n):gsub("{.-}", parseFormula)
end

function doSub3(value, i)
	return value:gsub("%%%%", i):gsub("&&", o):gsub("{.-}", parseFormula)
end

function doSub4(value, i)
	return value:gsub("%%%%", i):gsub("&&", p):gsub("{.-}", parseFormula)
end

-- sub to remove {the curly braces}, then add (parentheses), then parse it
function parseFormula(formula)
	return SKIN:ParseFormula("(" .. formula:sub(2, -2) .. ")")
end
