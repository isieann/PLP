# PLP
This is a Project for my Programming Languages class. It's purpose is to act as a tutorial for C++.

# Table of Contents<br>
[Getting Started](#getting-started)<br><br>[History](#history)<br><br>
[Hello World!](#hello-world)<br>
<sup>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Comments](#comments)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Include](#include)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Hello World!](#lets-get-started)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Namespace](#namespaces)<br></sub>

[Variables](#declaring-variables)<br>
<sup>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Numbers](#numbers)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Strings/Chars](#strings-and-chars)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Booleans](#booleans)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Arrays](#arrays)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Maps](#maps)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Constant/Auto](#constant-and-auto)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Reserved Words](#reserved-words)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Name Requirements/Conventions](#name-requirements-and-conventions)</sup>

[Selection, Loops, and Conditionals](#selection-lopos-and-conditionals)<br>
<sup>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[If/Else](#if-else_statements)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Switch Cases](#switch-cases)<br>
</sup>
# Getting Started
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

# Hello World!
[W3Schools](https://www.w3schools.com/cpp)<br>
[Learn C++](https://www.learncpp.com/)

Before we get into our first program, here are some useful things about C++ before we get started.

### Comments
Comments can be made using "//" for single line comments, or "/**/" for multi line comments like in C# or Java, etc.
```cpp
//This is an example of a sinle line comment

/*This is an example
of a multi-line comment*/
```
### Include

`#include` is similar to `import` in Java or Python.
```cpp
#include <iostream>
```
iostream is what you will need to perform Hello World, for now it is only important to know that iostream will let us use cout which is what is used to print to the terminal!

### Syntax
C++ uses `{}` and `;` like Java, C, C++, Javascript, (the list goes on)
Every line of code must end with a `;` and functions and if/elses and other such things will be encapsulated in `{}`. You will see this as we go on and you will catch on, just keep it in mind!

### Let's Get Started!
```cpp
string hi = "Hello World!";                        
```
In C++ you need to declare your varible type, here I have declared ```hi``` as ```string```. It's important to also note that for a string you MUST use double quotes; `"Hello World!"` and for chars, single quotes; `'a'`.

Before we can get into our main function we are going to add a `using` statement. In C++ there are namespaces that hold particular classes, varibles and functions, you can create namespaces as we will do a bit further down but a common `namespace` is called `std` for "standard".
```cpp
using namespace std;
```
We will help keep things organized, especially if you were doing a big project and just keeps things organized. It also helps to prevent name conficts.

Similar to Java, you need a main function. For a given function you must declare what will be returned (even if it is just `void` which means it returns nothing) For our purposes we will have `main()` return an `int`.

```cpp
int main() {
    cout << hi; 
    return 0;
}
```
> [!NOTE]
> `return 0;` must be used or else the program won't run, this is because we declared the `return` as an `int`

> [!IMPORTANT]
> MAIN CANNOT BE VOID

Inside this main function we have `cout << hi;` this line of code will print out to the consol, hense the name cout (consol out). C++ uses `<<` as an insertion opperator.

If you are at all familiar with C you know that C's print function is printf(), you also know from the history portion earlier that C++ is a class using version of C. So yes! You can use printf() in C++ too, `cout` is better at <b>Error Handling</b> and <b>Type Safty</b> and `printf()` is better for <b>Formatting</b> and lets you be a lot more flexable in that sense.
### Hello World Code
```cpp
#include <iostream>

string hi = "Hello World!";

using namespace std;

int main() {
    cout << hi; 
    return 0;
```

### Namespaces
We are now going to do a version of Hello World that has two namespaces both with a `string` variable called `hi` and how we can call one or the other.

#### Making a Namespace
```cpp
namespace one{
            string hi = "Hello World!";                        
        }
```
The formatting is `namespace` followed by the name for the namespace which in this example is  `one`, this name will help us get the particular variable inside it later. Then the string is declared like before!

#### Let's Make Another
```cpp
namespace two{
    string hi = "Goodbye World!";
}
```
This one is going to be called `two` and instead of `"Hello World!"` will have `"Goodbye World"`
> [!NOTE]
> In both namespaces there is a variable called "hi" within the same file

#### Adjusting Main

Old main code:
```cpp
int main() {
    cout << hi;
}
```
Now we have to specify which namespace `hi` we are going to use! The way to do this is to write the name of the namespace `one` followed by two semicolons `::` and then the name of the function you wish to call `hi`.

Adjusted Code:
```cpp
int main() {
    cout << one::hi;
}
```

### Hello World Code 2: Namespaces
```cpp
        #include <iostream>

        namespace one{
            string hi = "Hello World!";                        
        }

        namespace two{
            string hi = "Goodbye World!";                               
        }

        using namespace std;                  

        int main() { 
            cout  << one::hi; 
            return 0;      
        }
```
# Declaring Variables
[GeeksForGeeks](https://www.geeksforgeeks.org/cpp/how-to-create-a-dictionary-in-cpp)
[W3Schools](https://www.w3schools.com/cpp/cpp_variables.asp)
C++ is an explicit language, this means that you have to declar your variables as a type, and further (like in Java, C#, etc.) those variables will stay like that forever.
## Numbers
```cpp
int x = 3;
```
```cpp
float f = 12.3;
```
```cpp
double d = 14.557882374822938462893478392834782394;
```


## Strings and Chars
```cpp
char c = 'a';
```
```cpp
string s = "Hello World!";
```
>[!NOTE]
>Chars must use single quotes '' and strings must use double quotes ""
>
## Booleans
```cpp
bool t = true;
```
```cpp
bool f = false;
```
>[!NOTE]
>In C++ true and false are always written in all lowercase

## Arrays
Arrays work by declaring the type of varibles that will be in it `string` followed by the name of the array `names` and then names is directly followed by square brackets that contain the length of the array `[3]`.
```cpp
string names[3] = {"Bella", "Luke", "Lee"};
int numbers[7] = {3,7,8,7,6,54,9};
```
This is how you would print a specific part of the list,`cout <<` is how you output but the important part here is the `names[2]` it will output `"Bella"`.
```cpp
cout << names[0];
```
This will change whats in position 0 of
names.
```cpp
names[0] = "Izzy";
```
```cpp
cout << names[0];
```
If we were to output now it would be `"Izzy"`



## Maps
```cpp
#include <map>
myMap[1] = "map1";
myMap[2] = "map2";
myMap[3] = "map3";
```
>[!NOTE]
> You must `#include <map>` or it won't work!

```cpp
for (auto part : myMap)
    cout << part.first << ": " << part.second << endl;
```
This will print the elements of the map out in order by key as `1: map1` etc.
    
There are also unordered maps which will not have the parts in order and it can be created the same way but map will be replaced with `unordered_map`.


# Constant and Auto
When you add `const` to a variable declaration it can not be changed anywhere later in the program any attempts TO change it will result in an error.
```cpp
const int y = 19;
int y = 20; //<- this would result in an error!
```
```cpp
const string foreverString = "Never Changing!!";
```

`auto` works like var in C# where it will determine what the variable type is for you instead of you specifying it, but it still can't bee changed later.
```cpp
auto a = 7;
```

## Reserved Words

C++ has an extensive list of key/reserved words
A reserved word is a word that you can not use as a variable name or else it will
mess with the use that is already associtated with the word in a given language.

Some more common reserved words in C++ include
`if`, `else`, `return`, `include`, `string`, `bool`, `int`, `float` etc.

For a full list of reserved words see [Here](https://en.cppreference.com/w/cpp/keyword.html)


## Name Requirements and Conventions
### Classes
* Pascal Case (PascalCaseIsLikeThis) <- classes must start with an upper case letter
* class name should be a noun
* "_"s aren't allowed in class naming

### Functions/Methods
* Camel Case (camelCaseIsLikeThis) <- functions/methods must start with a lower case letter
* For methods specifically Snake Case can also be used (snake_case_is_like_this)

### Variables
* The first character should be a letter (numbers are allowed but only after at least one letter)
* No keywords
* "_" is the only allowed special character

For more in depth see [Here](https://www.geeksforgeeks.org/cpp/naming-convention-in-c)

## More Useful Info

C++ is a statically typed language which means that type checking
happens when the program is compiled instead of at run time. It is
also a strongly typed language (even though some people think that
it is weakly typed). It is explicitly typed (though you can implicitly
declare using auto), in C++ you need to declare what type of variable
you are declaring and it will always stay as that variable type.

# Selection, Loops and Conditionals
## If/Else

### One Condiiton
```cpp
int y = 2
if(y = 2){
    cout << "Two";
}
else{
    cout << "Not Two";
```
### Multi Condition
```cpp
int y = 5
bool size;
if(y > 2 && y < 8){
    size = true;
}
else{
    size = false;
}
```
### Else if
### Short Circuiting
##Switch Cases
