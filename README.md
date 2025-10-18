# PLP
This is a Project for my Programming Languages class. It's purpose is to act as a tutorial for C++.

[Getting Started](#getting-started)<br>[History](#history)

# GETTING STARTED

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

# History

C++ is a programming language derived from C and was offically it's own language in 1979, though it was under a 
different name. Originally it was just called "C with classes", then later given the name C++ in 1983. The original 
name helps to describe the problem that C++ was trying to fix, the absense of classes in C. Bjarne Stroustrup is the
man who gave rise to C++. First he made his own programming language called Simula while he was working on his PhD.
He then tried to integrate some of the parts of Simula into C, giving C classes. He was hoping that C would adopt his
changes but C++ ended up just becoming it's own programming langage.

C++ is a very fast language, it's execution speed makes it widly used for things like Operating Systems, Games and
embedded systems (cars, planes, medical equitment, etc.).

I am specifically interested in C++'s application in game development. It is the primary programming language used
in Unreal engine which is one of the leading softwares for 3D game development.
