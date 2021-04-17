# ASimpleVisualizer
## Description
A Rainmeter visualizer. That's all it is.
## Screenshots
![Screenshot (418)](https://user-images.githubusercontent.com/77834863/115127589-3cc0bc00-9ff5-11eb-92ad-1efde7adb93a.png)
![Screenshot (367)](https://user-images.githubusercontent.com/77834863/115127377-988a4580-9ff3-11eb-9973-86bba49a898e.png)
![Screenshot (402)](https://user-images.githubusercontent.com/77834863/115127440-2403d680-9ff4-11eb-9f2d-1edc96d7f5ec.png)
![Screenshot (448)](https://user-images.githubusercontent.com/77834863/115127678-059eda80-9ff6-11eb-8c5c-70066044ebc0.png)
## Features
1. You get to choose from two audio plugins, one the default [AudioLevel](https://docs.rainmeter.net/manual/plugins/audiolevel/) plugin by d-grace that Rainmeter ships by default and the other [AudioAnalyzer](https://github.com/d-uzlov/Rainmeter-Plugins-by-rxtd]) plugin(external) by rxtd.

2. Options to choose from different configurations of visualizers, like mirrored along X or Y or both. There is also reflection which looks beautiful(at the cost of a little bit more CPU usage depending on your CPU), and more on the way.
 
3. And you get a nice settings menu to change literally everything that is changeable (but I recommend some research on AudioAnalyzer before changing the values randomly. This [link](https://li7xi.github.io/AudioAnalyzerDocs/#/) will take you to the docs.
4. You get an option to make an image your visualizer. Yup, it can be your favourite waifu, it can be your bae. How? We will get to it later.
5. You get a built in gradient generator which creates gradients based on the colors you input manually or using the color picker.
6. I think that is all for now. More updates on way.

## Credits
Well, before I dive into the how to, I would like to thank the people who made this thing possible, whose code I stole and of course the early testers. 
1. First in the list come d-grace and rxtd for thier respective plugins.
2. Then comes [@scantf](https://github.com/sctanf) from whom I stole the transformation matrix(which enables angles in the visualizer), and he too has a awesome visualizer which you can find [here](https://github.com/sctanf/vectorcopy2).
3. Last but not the least, I would like to thank [@EnhancedJax](https://github.com/EnhancedJax) for the ideas and the rigourus beta testing. Make sure to check out his awsome set of utilities named [PowerToys+](https://github.com/EnhancedJax/PowerToysPlus) made for Windows \w Rainmeter.
4. Well not that I stole his code but I learned from his codes. So thanks [@marcopixel](https://github.com/marcopixel).

## MinimumRequirements
1. Rainmeter 4.3 or higher. Get it [here](https://rainmeter.net/)
2. A fully evoloved human brain.

## Installation
1. Install Rainmeter if you haven't yet.
2. Download the rmskin file from releases and install.
3. **If you want to install manually** then download the zip and place it in the Documents\Rainmeter\Skins\ folder and download the plugins used(you can find then in @Resources folder in side the skin) and place them in Documents\Rainmeter\Skins\@Vault\. I don't recommend this way though.

## How to make an Image Visualizer
1. First you have to know the __*aspect ratio*__ of the image you want to make a viualizer of. You can do this by looking at the resolution of the image. E.g. if an image is of 1920x1080 resolution then the aspect ratio is 16:9, for 800x600 it is 4:3 and so on.
2. Then you have to choose what size you want you visualizer to be. But here is the caveat, you can not make it just anything. You have to make the visualizer so that it preserves the aspect ratio of the image which makes sure that that the image doesn't look weirdly misshapen.
3. Then comes the math.
  1. Before starting here is a list of terms used, you can find these settings in Visualizer Settings page of Generator.
   - **barcount** : number of bars to generate
   - **barwidth** : width of individual bars
   - **bargap** : distance between consecutive bars
   - **height** : height of bar
   - **levitation** : the amount your bars go up along with equalizer
   - **mirrordistance** : the distance between top and bottom bars when mirrored along Y or simply put, MirrorY is used
  2. First choose something you want to keep constant. E.g. **barwidth**, or **barcount**(named **Bands** in **Generator**).
  3. Then choose the bar gap(the spacing you want between consecutive bars). I would reccommend to keep it small because you wouldn't want your pictures cut off.
  4. So if you chose to keep the **bar count** constant, formula for **bar width** will be:
> **(_choosenwidth_ + (_bargap_) x (_bandcount - 1_))**/**_bandcount_**
  5. If you chose to keep **bar width** constant, formula for **bar count** will be:
> **(_choosenwidth_ + _bargap_)/(_barwidth_ + _bargap_)**

  6. Note:If you have chosen to mirror along X or in simple terms using type MirrorX then use half the number of bars. 
  7. Now about height, if you are using Normal type without mirroring then formula for **height** would be:
> **(_height_ - _levitation_)**
  8. If you are mirroring along Y then formula for **height** would be:
> **(_height_ - _mirrordistance_ - 2 x _levitation_)**
4. I think this is the gist of it. Read the wiki for more tips and tricks(like the one in the picture:wink:). 
