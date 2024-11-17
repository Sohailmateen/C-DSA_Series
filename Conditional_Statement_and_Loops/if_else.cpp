#include <iostream>
using namespace std;

int main(){
    // question 1
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if(marks>=85){
        cout << "Distinction\n";
    }else if(marks>50 && marks<85){
            cout << "pass\n";
    }else{
        cout << "fail\n";
    }

    //question 2
    char ch;
    cout << "enter a character: ";
    cin >> ch;

    // if (ch >= 65 && ch <= 90){
    if (ch >= 'A' && ch <= 'Z'){
        cout << "Uppercase\n";
    }else{
        cout << "Lowercase\n";
    }


    //ternary statement
    int n = 10;

    cout << (n>=0 ? "positive" : "Negative") << endl ;
    return 0;
}