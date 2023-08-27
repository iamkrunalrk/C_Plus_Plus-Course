#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;
};

int main() {
    Point p1;
    p1.x = 3;
    p1.y = 5;
    
    cout << "Coordinates: (" << p1.x << ", " << p1.y << ")" << endl;

    return 0;
}