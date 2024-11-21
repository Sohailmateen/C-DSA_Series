#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for (int i = 0; i <n; i++){
        for (int j=0; j<n; j++){
            cout<< j+1 << " ";
        }
        cout<<endl;
    }



    for (int a = 0; a <n; a++){
        for (int b=0; b<n; b++){
            cout<< "*"<< " ";
        }
        cout<<endl;
    }


    for (int x = 0; x<n; x++){
        char ch = 'A';
        for (int y=0; y<n; y++){
            cout<< ch << " ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}