#GX2_GUI_Template#
This a (hopefully clean) template for GX2 (gui) project. [...]

#Usage#
This example with render a white screen and return to the Homewbrew Launcher by pressing the Home button.<br />
At menu/MainWindowTV.cpp the magic of drawing the white screen is happening.

There are also commented out examples of how to quickly add a GuiImage or GuiText.

#Building#
In order to build this application, you need the custom liboGC and portlibs modified/created by dimok. You can find them on the loadiine_gx2 repo (https://github.com/dimok789/loadiine_gx2/releases/tag/v0.2). Simply put the files in your devkit folder and run the Makefile. 

You will also need the submodule from this repo in the folder "src/dynamic_libs", which you can get via:
```
git clone --recursive https://github.com/Maschell/GX2_GUI_Template.git
```

#Credits#
A big thanks goes out to <b>dimok</b> for creating the HBL, the dynamic libs and every stuff he made. The "environment" of this app is copied from HBL. In fact is just a cropped version of the HBL with a few extra GUI Element. So big shoutouts to dimok!

