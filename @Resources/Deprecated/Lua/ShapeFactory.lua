function DrawVis()
    local num = SKIN:GetVariable("VisualizerBands")

	local file = io.open(SKIN:GetVariable(@).."DashboardVisualizer\\Visualizer.inc", "w")

    local bandWidth= SKIN:GetVariable("VisualizerBarWidth")
	
    local bandGap= SKIN:GetVariable("VisualizerBarGap")

    local a = bandWidth + bandGap

	local t = {}

    for i= 0, num-1 do
        table.insert(t, "[MeasureBand" .. i .. "]".."\n".."Measure=Plugin\nPlugin=AudioLevel\nParent=MeasureAudio\nType=Band\nBandIdx="..i.."\nUpdateRate=40\n")    
    end

    table.insert(t, "[MeterShape]")

    table.insert(t, "Meter=Shape")

    table.insert(t, "Shape= Rectangle #VisualizerBarStrokeWidth#, #Height#, #VisualizerBarWidth#, (-1*(#VisualizerHeight#*[MeasureBand0])), #VisualizerCornerRounding# | Fill Color #accent# | StrokeWidth #VisualizerStrokeWidth#" ) 

	for k = 1, num-1 do
        table.insert(t, "Shape" .. k+1 .. "=Rectangle " .. a*k .. ", #Height#, #VisualizerBarWidth#, (-1*(#VisualizerHeight#*[MeasureBand"..k.."])), #VisualizerCornerRounding# | Fill Color #accent# | StrokeWidth #VisualizerStrokeWidth#" )
    end
    
    table.insert(t, "DynamicVariables = 1")
    table.insert(UpdateRate=40)

	file:write(table.concat(t, "\n"))
	file:close()
end

