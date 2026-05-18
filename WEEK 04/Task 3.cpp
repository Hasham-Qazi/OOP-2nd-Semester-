#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    // Default constructor
    Rectangle() {
        length = width = 1.0;
    }

    // Parameterized constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Square constructor
    Rectangle(float side) {
        length = width = side;
    }

    float area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "------------------\n";
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5, 3);
    Rectangle r3(4);

    r1.display();
    r2.display();
    r3.display();

    return 0;
}
