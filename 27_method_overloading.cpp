#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void display() override {
        cout << "This is a circle." << endl;
    }
};

int main() {
    Circle c;
    Shape *shapePtr = &c;
    shapePtr->display(); // Calls the display function of Circle class

    return 0;
}
