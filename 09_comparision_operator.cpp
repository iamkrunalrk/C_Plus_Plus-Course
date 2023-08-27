#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;

    bool isEqual = x == y; // false
    bool isNotEqual = x != y; // true
    bool isGreaterThan = x > y; // false
    bool isLessThan = x < y; // true

    cout << "Is Equal: " << isEqual << endl;             // Output: Is Equal: 0
    cout << "Is Not Equal: " << isNotEqual << endl;       // Output: Is Not Equal: 1
    cout << "Is Greater Than: " << isGreaterThan << endl; // Output: Is Greater Than: 0
    cout << "Is Less Than: " << isLessThan << endl;       // Output: Is Less Than: 1

    return 0;
}
