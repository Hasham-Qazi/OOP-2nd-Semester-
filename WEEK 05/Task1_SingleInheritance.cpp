#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    void display_person_info(){
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

class Student : public Person{
public:
    int student_id;

    void display_student_info(){
        cout << "Student ID : " << student_id << endl;
    }
};

int main(){
    Student s1;

    cout << "Enter Name: ";
    cin >> s1.name;

    cout << "Enter Age: ";
    cin >> s1.age;

    cout << "Enter Student ID: ";
    cin >> s1.student_id;

    cout << endl << "----- Student Information -----" << endl;
    s1.display_person_info();
    s1.display_student_info();

    return 0;
}
