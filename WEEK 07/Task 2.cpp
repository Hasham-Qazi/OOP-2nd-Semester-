#include <iostream>
using namespace std;


class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};


class Student {
private:
    Calculator* calc;  
    string name;

public:
    Student(string n, Calculator* c) {
        name = n;
        calc = c;
    }

    void performAddition(double a, double b) {
        cout << name << " Addition Result: " << calc->add(a, b) << endl;
    }

    void performMultiplication(double a, double b) {
        cout << name << " Multiplication Result: " << calc->multiply(a, b) << endl;
    }
};


int main() {
    Calculator sharedCalc;  

    Student s1("Ali", &sharedCalc);
    Student s2("Sara", &sharedCalc);

    s1.performAddition(2, 3);
    s2.performMultiplication(4, 5);

    return 0;
}
