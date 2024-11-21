#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }

        //nums
        for(int j=0; j<n-i; j++){
            cout<< i+1;
        }
        cout << endl;
    }

    for (int a=0; a<n; a++){
        char ch='A' + a;
        for(int b=0; b<a; b++){
            cout << " ";
        }
        for (int b=0; b<n-a; b++){
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}