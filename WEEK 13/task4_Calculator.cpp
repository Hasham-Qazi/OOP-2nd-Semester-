#include<iostream>
using namespace std;

template <typename T>
class Calculator {
private:
    T a;
    T b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add() {
        return a + b;
    }

    T subtract() {
        return a - b;
    }

    T multiply() {
        return a * b;
    }
};

int main() {
    cout << "--- Calculator with integers (a=10, b=3) ---" << endl;
    Calculator<int> c1(10, 3);
    cout << "Add:      " << c1.add()      << endl;
    cout << "Subtract: " << c1.subtract() << endl;
    cout << "Multiply: " << c1.multiply() << endl;

    cout << "--- Calculator with doubles (a=5.5, b=2.2) ---" << endl;
    Calculator<double> c2(5.5, 2.2);
    cout << "Add:      " << c2.add()      << endl;
    cout << "Subtract: " << c2.subtract() << endl;
    cout << "Multiply: " << c2.multiply() << endl;

    return 0;
}
