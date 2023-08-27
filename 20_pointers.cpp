#include <iostream>

using namespace std;

int main() {
    int num = 10;
    int* ptr; // Declare a pointer

    ptr = &num;

    cout << "The value of num: " << num << endl;
    cout << "The value of num using pointer: " << ptr << endl;
    cout << "Memory address of num: " << &num << endl;
    cout << "Memory address stored in pointer: " << ptr << endl;

    return 0;

}