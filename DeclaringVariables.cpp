#include <string>
#include <iostream>
#include <map>

using namespace std;

int main(){

    int x = 3;
    float f = 12.3;
    double d = 14.557882374822938462893478392834782394;
    
    char c = 'a';
    string s = "Hello World!";
    
    bool t = true;
    bool f = false;
    
    string names[3] = {"Bella", "Luke", "Lee"};
    int numbers[7] = {3,7,8,7,6,54,9};
    cout << names[0];
    names[0] = "Izzy";
    cout << names[0];

    map<int, string> myMap;
    myMap[1] = "map1";
    myMap[2] = "map2";
    myMap[3] = "map3";

    for (auto part : myMap)
        cout << part.first << ": " << part.second << endl;

    const int y = 19;
    int y = 20; //<- this would result in an error!

    const string foreverString = "Never Changing!!";
    auto a = 7;

    return 0;
}
