#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rollNumber;
    float marks;

    // functions defined inside the class
    void getData(){
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData(){
        cout << endl << "----- Student Record -----" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Marks       : " << marks << endl;
    }
};

#endif
