#include<iostream>
#include "Task2_Rectangle.h"
using namespace std;

// defining member functions outside the class using scope resolution operator
void Rectangle::setDimensions(){
    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Width: ";
    cin >> width;
}

int Rectangle::area(){
    return length * width;
}

int Rectangle::perimeter(){
    return 2 * (length + width);
}

int main(){
    Rectangle r1;

    r1.setDimensions();

    cout << endl << "Area      : " << r1.area() << endl;
    cout << "Perimeter : " << r1.perimeter() << endl;

    return 0;
}
