#include<iostream>
using namespace std;

class Box {
private:
    double length;

public:
    Box(double l) {
        length = l;
    }

    // Declaration of friend function
    friend void displayLength(Box obj);
};

// Definition of friend function
void displayLength(Box obj) {
    cout << "Length of Box: " << obj.length << endl;
}

int main() {
    Box b1(10.5);
    Box b2(25.0);

    displayLength(b1);
    displayLength(b2);

    return 0;
}
