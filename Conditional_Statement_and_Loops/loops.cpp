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



    //question 1 (sum of all numbers from 1 to n using for loop)
    int k = 5;
    int sum = 0;

    for (int i=0; i<=k; i++){
        sum +=i;
    }

    cout << "sum = "<< sum << endl;

    //question 1.0 (sum of all numbers from 1 to n using while loop)

    int count = 0;
    int l = 10;
    int summation = 0;

    while(count<=l){
        summation +=count;
        count++;

        // if (count == 5){
        //     break;
        // }

    }
    cout << "sum = "<< summation <<endl ;

    //question 2 (sum of all odd numbers from 1 to n using for loop)
    int p=10;
    int oddSum = 0;

    for (int s=1; s<=p; s++){
        if(s%2 != 0){
            oddSum += s;
        }
    }

    cout << "odd sum = " << oddSum <<endl;

    //question 2.0 (sum of all odd numbers from 1 to n using while loop)
    int c = 1;
    int d = 10;
    int box = 0;

    while (c<=d){
        if (c%2 !=0){
            box +=c;
        }
        c++;  
    }
    cout << "box count = " << box << endl;

    // question (sum of all even numbers from 1 to n using for loop)
    int y=10;
    int container = 0;
    for (int x=1; x<=y; x++ ){
        if (x%2 == 0){
            container += x;
        }
    }
    cout << "container value = " << container << endl;


    //Do while loopppppppppppp
    int r = 10;
    int t = 1;

    do {
        cout << t << " ";
        t++;
    }while (t<=r);
    return 0;
}