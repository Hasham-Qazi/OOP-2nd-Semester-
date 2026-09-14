#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include<iostream>
using namespace std;

class Temperature{
public:
    float celsius;
    float fahrenheit;

    void convert(){
        fahrenheit = (celsius * 9 / 5) + 32;
    }

    void displayResult(){
        cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit" << endl;
    }
};

#endif
