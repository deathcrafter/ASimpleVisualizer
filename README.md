# ASimpleVisualizer

A Rainmeter visualizer.

## Screenshots

## Features

1. Two audio plugins, [AudioLevel](https://docs.rainmeter.net/manual/plugins/audiolevel/) plugin by d-grace (Rainmeter default) and the third-party [AudioAnalyzer](https://github.com/d-uzlov/Rainmeter-Plugins-by-rxtd]) plugin by rxtd.
2. Mirroring and reflections.
3. Image underlay.
4. Gradient generator + colour picker.

More coming!

## Dependencies

* Rainmeter 4.3 [https://rainmeter.net/](https://rainmeter.net/)

## Installation

1. Install [Rainmeter](https://rainmeter.net/)
2. Download the newest .rmskin from [releases](https://github.com/deathcrafter/ASimpleVisualizer/releases)

## How to make an Image Visualizer
1. Calculate the __*aspect ratio*__ of the image you want to use as underlay. E.g. if resolution of an image is 1920x1080 then the aspect ratio is 16:9, for 800x600 it is 4:3 and so on.
2. Now you have to choose the visualizer width and height **such that it preserves the aspect ratio of the image** and the image doesn't look weirdly misshapen.
3. The calculation part:
   1. _Before starting here is a list of terms used, you can find these settings in Visualizer Settings page of Generator._
   - > **choosenwidth** : width you chose for the visualizer
   - > **choosenheight** : height you chose for visualizer **with respect to width while preserving the image's aspect ratio**
   - > **barcount** : number of bars to generate(named bands in settings)
   - > **barwidth** : width of individual bars
   - > **bargap** : distance between consecutive bars
   - > **height** : height of bar
   - > **levitation** : the amount your bars go up along with equalizer
   - > **mirrordistanceY** : the distance between top and bottom bars when mirrored along Y or simply put, MirrorY is used
   - > **mirrordistanceX** : the distance between mirrored bars whie using MirrorX
   2. _First choose something you want to keep constant. E.g. **barwidth**, or **barcount**._
   3. _Then choose the **bargap**.(I would reccommend to keep it small because you wouldn't want your pictures half empty.)_
   4. _So if you chose to keep the **barcount** constant, formula for **barwidth** will be:_
   - > **(_choosenwidth_ - (_bargap_) x (_barcount - 1_))**/**_barcount_**
   5. _If you chose to keep **barwidth** constant, formula for **barcount** will be:_
   - > **(_choosenwidth_ + _bargap_)/(_barwidth_ + _bargap_)**
   6. _If you have chosen to mirror along X or in simple terms using type MirrorX, you have to use half the number of bars you intend to have or get using the formulas and formula would be,_ 
   - > **(_choosenwidth_ - _mirrorrdistanceX_...)**
   7. _Now about height, if you are using Normal type without mirroring then formula for **height** would be:_
   - > **(_choosenheight_ - _levitation_)**
   8. _If you are mirroring along Y then formula for **height** would be:_
   - > **(_choosenheight_ - _mirrordistanceY_ - 2 x _levitation_)**
4. _The output may not be completely accurate as you can not be pixel perfect._
5. _Read the [wiki](https://github.com/deathcrafter/ASimpleVisualizer/wiki) for more tips and tricks._

## Credits

Thank you to: 

* [@sctanf](https://github.com/sctanf) for his TransformationMatrix code.
* [@EnhancedJax](https://github.com/EnhancedJax) for the ideas and testing.
* [AudioAnalyzer](https://github.com/d-uzlov/Rainmeter-Plugins-by-rxtd]) plugin by rxtd.
* [@sceleri](https://github.com/sceleri) for his contribution to this repo and the [settings menu](https://github.com/sceleri/settings). 
