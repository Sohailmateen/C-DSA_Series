#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void changeX(int x) {
    x = 2 * x; 
    cout << "Value of x inside the function: " << x << endl;
}

int main() {
    int x = 10;
    cout << "Value of x before the function call: " << x << endl;
    changeX(x);
    cout << "Value of x after the function call: " << x << endl;
    return 0;
}

