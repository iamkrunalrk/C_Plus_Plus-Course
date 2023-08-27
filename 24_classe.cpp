#include <iostream>

using namespace std;

class Rectangle {
    public:
        int width, height;

        int area() {
            return width * height;
        }
};

int main() {
    Rectangle r;
    r.width = 3;
    r.height = 5;
    cout << "The are of the rectangle is " << r.area() << endl;

    return 0;
}