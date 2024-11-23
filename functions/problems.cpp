#include <iostream>
using namespace std;


int sumOfDigits(int num){
    int digSum = 0;

    while(num > 0){

        int lastdig = num%10;
        num /= 10;

        digSum += lastdig;
    }
    
    return digSum;
}

int main(){
    cout << "sum = " << sumOfDigits(1442) << endl;

    return 0;
}