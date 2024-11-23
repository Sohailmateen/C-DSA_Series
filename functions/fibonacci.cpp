#include <iostream>
using namespace std;

//Fibonacci series
//Iterative Approach (Efficient):


int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b; // Calculate the next Fibonacci number
        a = b;     // Update a to the previous value of b
        b = c;     // Update b to the current Fibonacci value
    }
    return c;
}

int main() {
    int n = 10;
    cout << "F(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}


// Recursive Approach (Less Efficient for Large 𝑛):


/* int fibonacci(int n) {
    if (n == 0) return 0; // Base case 1
    if (n == 1) return 1; // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive relation
}

int main() {
    int n = 10;
    cout << "F(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
*/
