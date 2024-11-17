#include <iostream>
using namespace std;

// Data types

int main(){
// Primitive Data types
    int age = 20; // 4 bytes
    char weapon_code = 'G'; // 1 byte (Single character)
    float PI = 3.14f; // 4 bytes
    bool isLegal = true; // /1 byte
    double price = 79999.99; // 8 bytes

// Type conversion(Implicit)
    char code = 'a';

    int conv = code;
    cout << conv << endl;


// Type Casting(Explicit)
    double MRP = 99.99;

    int newPrice = (int)MRP;
    cout << newPrice << endl;

// Input in c++
    int num;
    cout << "enter your fav num : " ;
    cin >> num;

    cout << "Your fav num is : " << num << endl;
    return 0;
}


