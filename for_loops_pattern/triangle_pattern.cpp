#include <iostream>
using namespace std;

int main(){
    int n = 4;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    int num = 1;
    for(int a=0; a<n; a++){
        for(int b=0; b<a+1; b++){
            cout<< num << " " ;
        }
        num++;
        cout<< endl;
    }

    //              OR              //


    for (int p=0; p<n; p++){
        for(int q=0; q<p+1; q++){
            cout << p+1 << " ";
        }
        cout << endl;
    }
    

    int m = 5;
    char ch = 'A';
    for (int x=0; x<m; x++){
        for(int y=0; y<x+1; y++){
            cout<< ch << " ";
        }
        ch++;
        cout << endl;
    }
    return 0;
}