#include <iostream>
using namespace std;

// Function Declaration
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    // Calling the Functions
    cout << "Product (int): " << multiply(5, 3) << endl;       // Output: Product (int): 15
    cout << "Product (double): " << multiply(2.5, 3.5) << endl; // Output: Product (double): 8.75

    return 0;
}