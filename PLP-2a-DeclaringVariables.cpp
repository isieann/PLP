//https://www.geeksforgeeks.org/cpp/how-to-create-a-dictionary-in-cpp
//https://www.w3schools.com/cpp/cpp_variables.asp

#include <string>
#include <iostream>
#include <map>

using namespace std;

int main(){

// NUMBERS
//=============================================================//
    /*ints are whole numbers*/
    int x = 3;

    /*floats are non whole numbers (4 bytes)*/
    float f = 12.3;

    /*doubles can store longer floats (8 bytes)*/
    double d = 14.557882374822938462893478392834782394;
//=============================================================//

// STRINGS AND CHARS
//=============================================================//
    /*char or charater will store exactly one character*/
    char c = 'a';

    /*you must #include <string> to be able
    to declare strings!!*/
    string s = "Hello World!";

    /* NOTE ON STRINGS AND CHARS 
    Strings use "" double quotes where as
    Chars use '' single quotes!!*/
//=============================================================//

// BOOLEAN
//=============================================================//
    /*bool is what is used in c++ and true and false statements
    are lower case like they are in c# and java (among other
    languages)*/
    bool b = true;
//=============================================================//

//ARRAY
//=============================================================//
    string names[3] = {"Bella", "Luke", "Lee"};
    int numbers[7] = {3,7,8,7,6,54,9};

    /*this is how you would print a specific
    part of the list, cout << is how you output
    but the important part here is the names[2]
    it will output "Bella"*/
    cout << names[0];

    /*this will change whats in position 0 of
    names*/
    names[0] = "Izzy";

    /*if we were to output now it would be "Izzy"*/
    cout << names[0];
//=============================================================//

//MAP
//=============================================================//
    /*NOTE: you must #include <map> or it won't work*/
    /*ordered map is sorted by key*/
    map<int, string> myMap;

    myMap[1] = "map1";
    myMap[2] = "map2";
    myMap[3] = "map3";

    for (auto part : myMap)
        cout << part.first << ": " << part.second << endl;

        //this will print them out in order by key as 1: map1 etc
    
    /*there are also unordered maps which will not have the parts
    in order and it can be created the same way but map will
    be replaced with unordered_map*/
//=============================================================//

// CONSTANT AND AUTO
//=============================================================//
    /*when you add "const" to a variable declaration
    it can not be changed anywhere later in the program
    any attempts TO change it will result in an error*/ 
    const int y = 19;
    int y = 20; //<- this would result in an error!

    const string foreverString = "Never Changing!!";
    /*this would always stay the same string for the
    duration of the program*/

    /*auto works like var in c# where it will determine
    what the variable type is for you instead of you
    specifying it, but it still can't bee changed later.*/
    auto a = 7;
//=============================================================//
    return 0;
}
