#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator{
public:
    float num1;
    float num2;

    // declared here, defined outside the class
    float add();
    float subtract();
    float multiply();
    float divide();
};

#endif
