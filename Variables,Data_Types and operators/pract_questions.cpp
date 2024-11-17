#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter num1 : " ;
    cin >> num1 ;
    cout << "Enter num2 : " ;
    cin >> num2 ;
    
    int sum = num1 + num2;
    int diff = num1 - num2;
    float division = num1 / float(num2);
    int product = num1 * num2;
    int modulo = num1 % num2 ;

    cout <<endl<< "sum = " << sum <<endl;
    cout << "diff = " << diff <<endl;
    cout << "division = " << division <<endl;
    cout << "product = " << product <<endl;
    cout << "modulo = " << modulo <<endl;

}