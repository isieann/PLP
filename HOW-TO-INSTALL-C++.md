HOW TO INSTALL AND USE C++.

## Install VSCode
[Visual Studio Code Download](https://code.visualstudio.com/download)

## VSCode Extension for C/C++
1. Open VSCode
2. Go to "Extentions" and search C/C++ (it will be the one titled C/C++ from Microsoft)
3. Click Install

## Installing MinGW
You want to start by downloading the latest version from [Here](https://www.msys2.org) 
and running/installing it.

When it opens follow the prompts till you get to a terminal and you will run the following:

```bash
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

Next you need to add the path so that it can run gcc, g++ and gdb:

1. Go to settings
2. Search "Edit the system environment variables"
3. Click on it and it will bring you to a window, Click "Environment Variables"
4. Under "User Variables" you want to click on Paths
5. Add the following path: C:\msys64\ucrt64\bin

(IF THIS DOESN'T WORK MAKE SURE THAT YOU CLICK ON PATHS AND DONT ADD A NEW
PATH JUST IN USER VARIABLES, IT COULD ALSO BE THAT THE PATH ISN'T RIGHT, IN
THAT CASE DOUBLE CHECK BY FINDING WHERE THE gcc.exe FILE IS ON YOUR COMPUTER)

Doing this will give your computer access to the toolchain in MinGW and will
allow for debugging and C++ things you need for everything to run well :3
