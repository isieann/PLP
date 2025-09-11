

        // -------------------- //
        // --- HELLO WORLD! --- //
        // -------------------- //


// =====  https://www.w3schools.com/cpp ===== //
   //^^^resource i used to learn the code^^^//


//the way you write comments is with "//"

/*if you want to write a multi line comment
with ease you can simply do this! it is a "/*"
to start and ends with a -> */

//the multi line comments are very useful!

#include <iostream> //this is a library that has some useful objects in it!

    //iostream cout outputs to the console

namespace one{
    string hi = "Hello World!"; //you need double quotes for string
                                //single quotes are for chars
}

namespace two{
    string hi = "Goodbye World!"; //these two name spaces are different
                                  //but you can use the same variable
                                  //names so long as you specify when you
                                  //use the variable seen later!
}

using namespace std; //namespace just helps keep things organized
                     //like if there was a really big coding project
                     //so that everything doesn't break :3
                     // === PREVENTS NAME CONFLICTS ===

                     //std stands for "standard" and a lot of functions
                     //are inside of it that you can use!

int main() { //a function!
    cout  << one::hi; //cout is an object in iostream that outputs
                      //to the console by default! Very useful!

                      //if I wasn't in the name space std I could
                      //write cout as std::cout

    return 0; //acts as the end of the main function (just returns nothing
              //and is purely there to end the main function)
}


// the code without all the comments //

/* 

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

*/
