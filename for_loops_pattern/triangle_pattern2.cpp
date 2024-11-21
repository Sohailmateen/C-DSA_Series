#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for (int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }


    for(int a=0; a<n; a++){
        char ch = 'A';
        for(int b=0; b<a+1; b++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }


    for(int x=0; x<n; x++){
        for(int y=x+1; y>0; y--){
            cout << y << " ";
        }
        cout << endl;
    }


    for(int p=0; p<n; p++){
        char ch = 'A' + p;
        for(int q=p+1; q>0; q--){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}