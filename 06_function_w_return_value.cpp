#include <iostream>
using namespace std;

// Function Declaration
int add(int a, int b) {
    return a + b;
}

int main() {
    // Calling the Function
    int result = add(5, 3);
    cout << "Sum: " << result << endl; // Output: Sum: 8

    return 0;
}
