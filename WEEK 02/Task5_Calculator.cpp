#include<iostream>
#include "Task5_Calculator.h"
using namespace std;

// defining member functions outside the class
float Calculator::add(){
    return num1 + num2;
}

float Calculator::subtract(){
    return num1 - num2;
}

float Calculator::multiply(){
    return num1 * num2;
}

float Calculator::divide(){
    if(num2 == 0){
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return num1 / num2;
}

int main(){
    Calculator c1;
    int choice;

    cout << "Enter first number: ";
    cin >> c1.num1;

    cout << "Enter second number: ";
    cin >> c1.num2;

    cout << endl << "Choose an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout << "Result: " << c1.add() << endl;
            break;
        case 2:
            cout << "Result: " << c1.subtract() << endl;
            break;
        case 3:
            cout << "Result: " << c1.multiply() << endl;
            break;
        case 4:
            cout << "Result: " << c1.divide() << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
