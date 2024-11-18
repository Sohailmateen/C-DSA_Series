#include <iostream>
using namespace std;

int main(){
    // int n = 30;
    // int sum = 0;
    // for (int i = 1; i<= n; i++){
    //     if (i % 3 == 0){
    //         sum +=i;
    //     }
    // }
    // cout << sum << endl;


    // efficient way (GPT)
    int n = 30;
    int sum = 0;
    for (int i = 3; i<= n; i+=3){
        sum +=i;
    }
    cout << "sum = " << sum << endl;



    int x = 5;
    int fact = 1;
    for (int j = 1; j<=x; j++){
        fact *=j;
    }
    cout << "factorial = "<< fact << endl;
    return 0;

}
