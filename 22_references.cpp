#include <iostream>

using namespace std;

int main() {
    int num = 5;
    int& ref = num; // Declare a reference

    cout << "Value of num: " << num << endl;
    cout << "Value of num using reference: " << ref << endl;
    
    ref = 7; // Modifying through reference
    cout << "value of num after modification: " << ref << endl;

    return 0;

}