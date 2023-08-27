#include <iostream>

using namespace std;

int main () {
    int choice;

    cout << "Enter a number (1-3): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You chose: " << choice << endl;
        break;

    case 2:
        cout << "You chose: " << choice << endl;
        break;

    case 3:
        cout << "You chose: " << choice << endl;
        break;
    
    default:
        cout << choice << "? It is invalid!" << endl;
        break;
    }
    
    return 0;
}