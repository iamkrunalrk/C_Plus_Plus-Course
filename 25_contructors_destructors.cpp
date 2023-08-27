#include <iostream>

using namespace std;

class Circle{
    public:
        double radius;

        Circle(double r) { // Contructor 
            radius = r;
            cout << "Circle object created!" << endl;
        }
        
        -Circle(){ // Destructor
            cout << "Circle object destroyed!" << endl;
        }
};

int main() {
    Circle c(3.5); // Creating an object
    // When the block ends the destructor called automatically

    return 0;
}
