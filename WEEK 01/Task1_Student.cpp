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
    Student s1;

    cout << "Enter First Name: ";
    cin >> s1.firstName;

    cout << "Enter Last Name: ";
    cin >> s1.lastName;

    cout << "Enter Roll Number: ";
    cin >> s1.rollNumber;

    cout << "Enter Marks: ";
    cin >> s1.marks;

    cout << endl << "----- Student Info -----" << endl;
    s1.displayStudentInfo();

    return 0;
}
