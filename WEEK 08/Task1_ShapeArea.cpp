#include<iostream>
using namespace std;

class Shape{
public:
    virtual double area(){
        return 0;
    }
};

class Rectangle : public Shape{
public:
    double length;
    double width;

    Rectangle(double l, double w){
        length = l;
        width = w;
    }

    double area() override{
        return length * width;
    }
};

class Circle : public Shape{
public:
    double radius;

    Circle(double r){
        radius = r;
    }

    double area() override{
        return 3.14159 * radius * radius;
    }
};

int main(){
    double len, wid, rad;

    cout << "Enter length and width of Rectangle: ";
    cin >> len >> wid;

    cout << "Enter radius of Circle: ";
    cin >> rad;

    Rectangle rect(len, wid);
    Circle circ(rad);

    // using base class pointer to access derived class objects
    Shape* shapePtr;

    shapePtr = &rect;
    cout << endl << "Rectangle Area : " << shapePtr->area() << endl;

    shapePtr = &circ;
    cout << "Circle Area    : " << shapePtr->area() << endl;

    return 0;
}
