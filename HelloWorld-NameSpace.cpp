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


