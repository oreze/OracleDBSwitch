# Oracle DataBase Service Switcher

This small script purpose is to turn on/off Oracle DB services on demand. Many people doesn\`t want to work it all the time because of memory usage, so i wrote it
and uploaded here, maybe someone will use it.

## Requirements

All you need to have is Windows 10 32/64 bit and Oracle DB Express Edition (XE) 18C (version 18.4.0.0.0). I didn\`t test it on other versions, but should work
fine. If it isn\`t, just give me a feedback.
I\`m going to convert it onto linux version, but i don\`t know when.

## Installing

There`s two version of code - with or withoud sound. 

First you have to download files from repo using git pull, manual download or something else.

### With sound 

#### Visual Studio

*Delete WithoutSoundVersion.cpp from repository or exclude it from project first*

1. Create new folder
2. Open Visual Studio > File > New > Project from existing code
3. Add folder to project file location
4. Use right mouse on project name > properties > Linker > Input > Additional Dependencies and add ";winmm.lib" at the end
5. Go to Linker > System > SubSystem and change it to "Console (/SUBSYSTEM:CONSOLE)"
6. Use Build > Build Solution (F7)
7. Now you can copy .exe from folder (depending on what settings did you choose at the top of visual studio, for ex. debug x64) anywhere you want and delete repository

### Without sound 

#### Visual studio

*Download WithoutSoundVersion.cpp only*

1. Create new folder
2. Open Visual Studio > File > New > Project from existing code
3. Add folder to project file location
4. Use Build > Build Solution (F7)
5. Now you can copy .exe from folder (depending on what settings did you choose at the top of visual studio, for ex. debug x64) anywhere you want and delete repository

#### GCC or similiar compilers

1. Go to the destination folder in console (cd *)
2. Compile script
3. Copy compiled script anywhere you want and use it

## Summary

If script was useful give me a feedback - it would be nice to know that someone use my work ( ͡° ͜ʖ ͡°)