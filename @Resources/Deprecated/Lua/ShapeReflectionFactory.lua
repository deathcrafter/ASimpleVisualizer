function Initialize()
	local num = SELF:GetNumberOption("Number")

	local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")

    local bandWidth= SKIN:GetVariable("BarWidth")
	
    local bandGap= SKIN:GetVariable("BarGap")

    local r = SKIN:GetVariable("Reflection")

    local a = bandWidth + bandGap

	local t = {}

    print(r)

    table.insert(t, "[MeterShape]")

    table.insert(t, "Meter=Shape")

    table.insert(t, "W=(Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#)+Abs(Sin(#Angle#%360*Pi/180))*#Height#+#Levitate#)")

    table.insert(t, "H=(Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#)+Abs(Cos(#Angle#%360*Pi/180))*2*#Height#+#ReflectionDistance#+#Levitate#)")

    table.insert(t, "Shape= Rectangle 0, (#Height# + #Levitate# - #Levitate#*[MeasureBand0]), #BarWidth#, (-1*(#Height#*[MeasureBand0])), #CornerRounding# | Fill Color #Color0# | StrokeWidth #BarStrokeWidth#" ) 

	for k = 1, num-1 do
        table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k .. ", (#Height# + #Levitate# - #Levitate#*[MeasureBand"..k.."]), #BarWidth#, (-1*(#Height#*[MeasureBand"..k.."])), #CornerRounding# | Fill Color #Color" ..k.."# | StrokeWidth #BarStrokeWidth#" )
    end
    for j = num+1, 2*num do
        table.insert(t, "Shape" .. j .. "=Rectangle " .. a*(j-num-1).. ",(#Height# + #ReflectionDistance# + #Levitate#*[MeasureBand"..(j-num-1).."]), #BarWidth#, (#Height#*[MeasureBand"..(j-num-1).."]), #CornerRounding# | StrokeWidth #BarStrokeWidth# | Fill LinearGradient MyGradient"..(j-num-1).. "\n" .. "MyGradient"..(j-num-1).." = 90 | #Color"..(j-num-1).."#,0;0.0 | #Color"..(j-num-1).."#,0;0.3 | #Color"..(j-num-1).."#, 150;1.0")
    end
    
    table.insert(t, "TransformationMatrix=(Cos(-#Angle#%360*Pi/180));(-Sin(-#Angle#%360*Pi/180));(Sin(-#Angle#%360*Pi/180));(Cos(-#Angle#%360*Pi/180));(((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#):0)+((0<#Angle#%360)&(#Angle#%360<180)?Abs(Sin(#Angle#%360*Pi/180))*(#Height# + #Levitate#):0));(((180<#Angle#%360)&(#Angle#%360<360)?Abs(Sin(#Angle#%360*Pi/180))*((#BarWidth#+#BarGap#)*#Bands#-#BarGap#):0)+((90<#Angle#%360)&(#Angle#%360<270)?Abs(Cos(#Angle#%360*Pi/180))*(#Height# + #Levitate#):0))")
	table.insert(t, "DynamicVariables = 1")

	file:write(table.concat(t, "\n"))
	file:close()
	SKIN:Bang('!Redraw')
end

-- does all the substitution!
function doSub(value, i)
	return value:gsub("%%%%", i):gsub("&&", m):gsub("{.-}", parseFormula)
end

-- sub to remove {the curly braces}, then add (parentheses), then parse it
function parseFormula(formula)
	return SKIN:ParseFormula("(" .. formula:sub(2, -2) .. ")")
end
