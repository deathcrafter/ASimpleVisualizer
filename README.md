# ASimpleVisualizer

A Rainmeter visualizer.

## Screenshots

![Screenshot (367)](https://user-images.githubusercontent.com/77834863/115127377-988a4580-9ff3-11eb-9973-86bba49a898e.png)
![Screenshot (402)](https://user-images.githubusercontent.com/77834863/115127440-2403d680-9ff4-11eb-9f2d-1edc96d7f5ec.png)
![Screenshot (448)](https://user-images.githubusercontent.com/77834863/115127678-059eda80-9ff6-11eb-8c5c-70066044ebc0.png)

## Features

1. Two audio plugins, [AudioLevel](https://docs.rainmeter.net/manual/plugins/audiolevel/) plugin by d-grace (Rainmeter default) and the third-party [AudioAnalyzer](https://github.com/d-uzlov/Rainmeter-Plugins-by-rxtd]) plugin by rxtd.
2. Mirroring and reflections (CPU heavy).
3. Image underlay.
4. Gradient generator + colour picker.

More coming!

## Dependencies

* Rainmeter 4.3 [https://rainmeter.net/](https://rainmeter.net/)

## Installation

1. Install [Rainmeter](https://rainmeter.net/)
2. Download the newest .rmskin from [releases](https://github.com/deathcrafter/ASimpleVisualizer/releases)

## How to make an Image Visualizer
1. First you have to know the __*aspect ratio*__ of the image you want to make a viualizer of. You can do this by looking at the resolution of the image. E.g. if an image is of 1920x1080 resolution then the aspect ratio is 16:9, for 800x600 it is 4:3 and so on.
2. Then you have to choose what size you want you visualizer to be. But here is the caveat, you can not make it just anything. You have to make the visualizer so that it preserves the aspect ratio of the image which makes sure that that the image doesn't look weirdly misshapen.
3. Then comes the math.
   1. Before starting here is a list of terms used, you can find these settings in Visualizer Settings page of Generator.
   - **choosenwidth** : width you chose for displaying the image visualizer
   - **choosenheight** : height you choose according to width while preserving the image's aspect ratio
   - **barcount** : number of bars to generate
   - **barwidth** : width of individual bars
   - **bargap** : distance between consecutive bars
   - **height** : height of bar
   - **levitation** : the amount your bars go up along with equalizer
   - **mirrordistance** : the distance between top and bottom bars when mirrored along Y or simply put, MirrorY is used
   2. First choose something you want to keep constant. E.g. **barwidth**, or **barcount**(named **Bands** in **Generator**).
   3. Then choose the bar gap(the spacing you want between consecutive bars). I would reccommend to keep it small because you wouldn't want your pictures cut off.
   4. So if you chose to keep the **bar count** constant, formula for **bar width** will be:
   - > **(_choosenwidth_ + (_bargap_) x (_bandcount - 1_))**/**_bandcount_**
   5. If you chose to keep **bar width** constant, formula for **bar count** will be:
   - > **(_choosenwidth_ + _bargap_)/(_barwidth_ + _bargap_)**
   6. Note:If you have chosen to mirror along X or in simple terms using type MirrorX then use half the number of bars. 
   7. Now about height, if you are using Normal type without mirroring then formula for **height** would be:
   - > **(_choosenheight_ - _levitation_)**
   8. If you are mirroring along Y then formula for **height** would be:
   - > **(_choosenheight_ - _mirrordistance_ - 2 x _levitation_)**
4. I think this is the gist of it. Read the [wiki](https://github.com/deathcrafter/ASimpleVisualizer/wiki) for more tips and tricks(like the one in the picture :wink: ). 

## Credits

Thank you to: 

* [@sctanf](https://github.com/sctanf) for their TransformationMatrix code.
* [@EnhancedJax](https://github.com/EnhancedJax) for the ideas and testing.
* [AudioAnalyzer](https://github.com/d-uzlov/Rainmeter-Plugins-by-rxtd]) plugin by rxtd.
