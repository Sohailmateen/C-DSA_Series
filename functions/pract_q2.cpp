#include <iostream>
using namespace std;

//prime numbers


bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // If divisible by any number other than 1 and itself
    }
    return true;
}

void printPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " "; // Print prime numbers
        }
    }
    cout << endl;
}

int main() {
    int n = 11;
    printPrimes(n); // Function to print all prime numbers up to n
    return 0;
}
