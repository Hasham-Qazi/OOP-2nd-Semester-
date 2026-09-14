#include<iostream>
using namespace std;

struct Student{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo(){
        cout << "Full Name : " << firstName << " " << lastName << endl;
        cout << "Marks     : " << marks << endl;
    }
};

int main(){
    // dynamically create a Student using a pointer
    Student *studentPtr = new Student;

    cout << "Enter First Name: ";
    cin >> studentPtr->firstName;

    cout << "Enter Last Name: ";
    cin >> studentPtr->lastName;

    cout << "Enter Roll Number: ";
    cin >> studentPtr->rollNumber;

    cout << "Enter Marks: ";
    cin >> studentPtr->marks;

    cout << endl << "----- Student Info (via pointer) -----" << endl;
    studentPtr->displayStudentInfo();

    delete studentPtr;
    return 0;
}
