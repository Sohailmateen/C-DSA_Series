#include <iostream>
using namespace std;

int fact(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n-r);

    return fact_n/ (fact_r * fact_nmr);
}

int main (){
    int n = 8, r = 2;
    cout << nCr(n,r) << endl;

    return 0;
}



// int factN(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int factR(int r){
//     int fact = 1;

//     for(int i=1; i<=r; i++){
//         fact *=i;
//     }
//     return fact;
// }

// int factNsubR(int n, int r){
//     int fact = 1;
//     int sub = n-r;
//     for (int i=1; i<=sub; i++){
//         fact *=i;
//     }
//     return fact;
// }

// int main(){
//     int n = 8;
//     int r = 2;
//     int nCr = (factN(n)/(factR(r)*factNsubR(n,r)));
//     cout << "nCr = " << nCr << endl;
// }