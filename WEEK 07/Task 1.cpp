#include <iostream>
using namespace std;

// Display class
class Display {
private:
    double lastResult;

public:
    Display() {
        lastResult = 0;
    }

    void showResult(double result) {
        lastResult = result;
        cout << "Result: " << result << endl;
    }

    double getLastResult() {
        return lastResult;
    }
};

// Calculator class (Composition: owns Display)
class Calculator {
private:
    Display display;  // Display object inside Calculator

public:
    void add(double a, double b) {
        double result = a + b;
        display.showResult(result);
    }

    void multiply(double a, double b) {
        double result = a * b;
        display.showResult(result);
    }

    void showLastResult() {
        cout << "Last Result: " << display.getLastResult() << endl;
    }
};

// Main function
int main() {
    Calculator calc;

    calc.add(5, 3);
    calc.multiply(4, 2);
    calc.showLastResult();

    return 0;
}
