#include<iostream>
#include "Task4_Temperature.h"
using namespace std;

int main(){
    Temperature t1;

    cout << "Enter Temperature in Celsius: ";
    cin >> t1.celsius;

    t1.convert();
    t1.displayResult();

    return 0;
}
