function Initialize()
    local num = SKIN:GetVariable("Bands")

	local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")

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

-- does all the substitution!
function doSub(value, i)
	return value:gsub("%%%%", i):gsub("&&", m):gsub("{.-}", parseFormula)
end

-- sub to remove {the curly braces}, then add (parentheses), then parse it
function parseFormula(formula)
	return SKIN:ParseFormula("(" .. formula:sub(2, -2) .. ")")
end
