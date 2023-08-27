#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char greetings[8] = {'w', 'e', 'l', 'c', 'o', 'm', 'e', '\0'}; // Null Terminated
    cout << "Greeting: " << greetings << endl;

    char name[] = "Alice";
    cout << "Name: " << name << endl;

    return 0;
}