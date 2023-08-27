#include <iostream>
using namespace std;

int main() {
    bool condition1 = true, condition2 = false;

    bool resultAND = condition1 && condition2; // false
    bool resultOR = condition1 || condition2;   // true
    bool resultNOT = !condition1;               // false

    cout << "Result AND: " << resultAND << endl; // Output: Result AND: 0
    cout << "Result OR: " << resultOR << endl;   // Output: Result OR: 1
    cout << "Result NOT: " << resultNOT << endl; // Output: Result NOT: 0

    return 0;
}
