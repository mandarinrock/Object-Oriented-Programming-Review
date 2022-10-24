#include <iostream>
using namespace std;

// Global variables
int x, y;
int *px, *py;

// Function f takes no arguments and returns an integer
int f() {

    // s is the sum of the values of x and y
    // Static means that after the first time this function is called, the value of s will not change
    static int s = *px + *py;

    // Print the value of s
    cout << s << endl;

    // Return the value of s
    return s;
}

int main() {

    // Assign value 2 to x and y
    x = y = 2;

    // Assign address of x to px and address of y to py
    px = &x; py = &y;

    // Assign value of f() to x and y
    x = y = f();

    // Call f() again
    cout << f() << endl;
}