#include <iostream>
using namespace std;

int main(){
// Arithmetic operators 
    int a = 21, b = 2;

    cout << "sum = " << (a+b) << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "modulo = " << (a%b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = " << (a/b) << endl;
    cout << "division = " << (a/ float(b))<< endl;

// relational operators
    cout << (3<5)<< endl;
    cout << (3>5)<< endl;
    cout << (3<=4)<< endl;
    cout << (3>=5)<< endl;
    cout << (5==5)<< endl;
    cout << (3!=5)<< endl;
    return 0;
}