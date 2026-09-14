#include<iostream>
using namespace std;

class Employee{
public:
    virtual double calculateSalary(){
        cout << "Base Employee salary calculation called." << endl;
        return 0;
    }
};

class PermanentEmployee : public Employee{
public:
    double basicSalary;
    double bonus;

    PermanentEmployee(double bs, double b){
        basicSalary = bs;
        bonus = b;
    }

    double calculateSalary() override{
        return basicSalary + bonus;
    }
};

class ContractEmployee : public Employee{
public:
    double hourlyRate;
    double hoursWorked;

    ContractEmployee(double rate, double hours){
        hourlyRate = rate;
        hoursWorked = hours;
    }

    double calculateSalary() override{
        return hourlyRate * hoursWorked;
    }
};

int main(){
    PermanentEmployee pe(40000, 5000);
    ContractEmployee ce(800, 30);

    // using base class pointer to call the overridden functions
    Employee* empPtr;

    empPtr = &pe;
    cout << "Permanent Employee Salary : " << empPtr->calculateSalary() << endl;

    empPtr = &ce;
    cout << "Contract Employee Salary  : " << empPtr->calculateSalary() << endl;

    return 0;
}
