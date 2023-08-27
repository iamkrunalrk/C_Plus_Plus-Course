#include <iostream>

using namespace std;

int main() {
    int* dynamicArray = new int[5]; // Allocate memory for an array
    
    dynamicArray[0] = 10;
    dynamicArray[1] = 20;

    delete[] dynamicArray; // Free allocated memory

    return 0;
}