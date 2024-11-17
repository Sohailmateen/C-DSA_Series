#include <iostream>
using namespace std;

int main(){
    //while loops
    int n = 15;
    int i = 1;

    while (i<=n){
        cout << i  << " ";
        i++;
    }
    cout << endl;

    //while loops
    int b = 10;
    for(int a = 1; a<=b; a++ ){
        cout << a << " ";
    }

    cout << endl;

    //question 1
    int k = 5;
    int sum = 0;

    for (int i=0; i<=k; i++){
        sum +=i;
    }

    cout << "sum = "<< sum << endl;

    //question 1.0

    int count = 0;
    int l = 10;
    int summation = 0;

    while(count<=l){
        summation +=count;

        if (count == 5){
            break;
        }

        cout << "summation at count "<< count<< "="<< summation<<endl ;
        count++;
    }
    return 0;
}