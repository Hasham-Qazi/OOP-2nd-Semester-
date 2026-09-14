#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    void display_person(){
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

class Employee : public Person{
public:
    int employee_id;

    void display_employee(){
        cout << "Employee ID : " << employee_id << endl;
    }
};

class Manager : public Employee{
public:
    string department;

    void display_manager(){
        cout << "Department  : " << department << endl;
    }
};

int main(){
    Manager m1;

    cout << "Enter Name: ";
    cin >> m1.name;

    cout << "Enter Age: ";
    cin >> m1.age;

    cout << "Enter Employee ID: ";
    cin >> m1.employee_id;

    cout << "Enter Department: ";
    cin >> m1.department;

    cout << endl << "----- Manager Information -----" << endl;
    m1.display_person();
    m1.display_employee();
    m1.display_manager();

    return 0;
}
