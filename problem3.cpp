#include <iostream>
using namespace std;

// Global variables
int x, y;
int *px, *py;

int f() {

    // S is the sum of the values of x and y
    int s = *px + *py;

    // Print the value of S
    cout << s << endl;

    // Return the value of S
    return s;
}

int main() {

    // Assign value 2 to x and y
    x = y = 2;
    // This is equivalent to:
    // y = 2;
    // x = y;

    // Assign address of x to px and address of y to py
    px = &x; py = &y;
    // This is equivalent to:
    // px = &x;
    // py = &y;

    // Assign value of f() to x and y
    x = y = f();
    // This is equivalent to:
    // y = f();
    // x = y;

    // Call f() again
    cout << f() << endl;
}