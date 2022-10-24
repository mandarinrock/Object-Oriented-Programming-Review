#include <iostream>
using namespace std;

// Global variables
int x, y;
int *px, *py;

// Function f takes an integer and an address as arguments and returns an integer
// The second integer is treated as an address in the scope of the function
int f(int a, int b) {

    // After leaving the scope of the function, the value of s will not change
    // Assign the sum of the values of x and y to s
    static int s = *px + *py;

    // Print the value of s
    cout << s << endl;

    // Assign the sum of the first input and the value of s to x
    // Assign the sum of the second input and the value of s to y
    // Remember that the second input is treated as an address but addresses can still be normal integer values like 2
    x = a + s; y = b + s;

    // Assign the value of x to the first input
    a = x;

    // Assign the value of y to the second input
    b = y;

    // Assign the difference of the value of x and the value of y to s
    s = x - y;

    // Print the value of s
    cout << s << endl;

    // Return the value of s
    return s;
}

int main() {

    // Assign value 1 to x and y
    x = y = 1;

    // Declare and initialize integers a and b to value of 2
    int a = 2, b = 2;

    // Assign address of x to px and address of y to py
    px = &x; py = &y;

    // Call f() with a and b as arguments and assign the return value to x
    x = f(a, b);

    // Call f() with a and b as arguments and assign the return value to b
    b = f(a, b);

    // Print the values of x and y
    cout << *px << endl;
    cout << *py << endl;

    return 0;
}