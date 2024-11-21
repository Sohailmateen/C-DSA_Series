#include <iostream>
using namespace std;

int main(){
    int n = 4;

    // Floyd's triangle pattern 
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << num << " " ;
            num++;
        }
        cout << endl;
    }

    char ch = 'A';

    for (int a=0; a<n; a++){
        for(int b=0; b<a+1; b++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}