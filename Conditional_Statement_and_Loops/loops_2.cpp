#include <iostream>
using namespace std;

int main(){
    // q4 check if a number is prime or not 

    int n = 10;
    bool isPrime = true;

    for (int i = 2; i<=n-1; i++){
        if (n%i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
        cout<< "prime number";
    }else{
        cout << "not a prime number"<<endl;
    }

    // more optimized way 

    for (int i = 2; i*i<=n; i++){ //checking factors form 2 to root n
        if (n%i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
        cout<< "prime number" << endl;
    }else{
        cout << "not a prime number"<< endl;
    }


    //Nested loops 
    int x = 5;
    for (int k = 1; k<=x ; k++){
        int y = 5;
        for (int j=1; j<=y; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
