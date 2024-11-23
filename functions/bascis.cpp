#include <iostream>
using namespace std;

//sum of 2 nums
double sum(double a, double b){
    double s = a+b;
    return s;
}

//min of 2 nums
int minOfTwo(int a, int b){
    if (a<b){
        return a;
    }else{
        return b;
    }
}

//sum of n numbers
int sumOfN(int n){
    int sum = 0;

    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

// factorial of n
int factOfN(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *=i;
    }
    return fact;
}

int main (){
    cout << factOfN(5) << endl;
    cout << factOfN(4) << endl;

    return 0;
}