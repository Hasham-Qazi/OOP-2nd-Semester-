#include<iostream>
using namespace std;

class Employee{
public:
    string name;
    float salary;

    void display_employee(){
        cout << "Name   : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

class Developer : public Employee{
public:
    string programming_language;

    void display_developer(){
        cout << "Programming Language : " << programming_language << endl;
    }
};

class Designer : public Employee{
public:
    string design_tool;

    void display_designer(){
        cout << "Design Tool : " << design_tool << endl;
    }
};

int main(){
    Developer d1;
    Designer d2;

    cout << "----- Enter Developer Details -----" << endl;
    cout << "Name: ";
    cin >> d1.name;
    cout << "Salary: ";
    cin >> d1.salary;
    cout << "Programming Language: ";
    cin >> d1.programming_language;

    cout << endl << "----- Enter Designer Details -----" << endl;
    cout << "Name: ";
    cin >> d2.name;
    cout << "Salary: ";
    cin >> d2.salary;
    cout << "Design Tool: ";
    cin >> d2.design_tool;

    cout << endl << "----- Developer Information -----" << endl;
    d1.display_employee();
    d1.display_developer();

    cout << endl << "----- Designer Information -----" << endl;
    d2.display_employee();
    d2.display_designer();

    return 0;
}
