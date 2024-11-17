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

// logical operators
    cout << ((3<5) || (10<100)) << endl;
    cout << ((4<5) && (10<100)) << endl;
    cout << !(5<4) << endl;

// unary operators
    //post increment
    int x = 10;
    int y = x++;
    cout << y << endl;
    cout << x << endl;

    //pre increment
    int l = 90;
    int m = ++l;
    cout << l << endl;
    cout << m << endl;

    //post decrement
    int r = 10;
    int s = x--;
    cout << r << endl;
    cout << s << endl;

    //pre increment
    int p = 90;
    int q = --l;
    cout << p << endl;
    cout << q << endl;

    return 0;
}