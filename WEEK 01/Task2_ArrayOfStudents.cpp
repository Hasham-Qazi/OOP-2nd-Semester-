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
    int n;

    cout << "How many students do you want to enter? ";
    cin >> n;

    Student *students = new Student[n];

    for(int i = 0; i < n; i++){
        cout << endl << "Enter details for Student " << i + 1 << endl;

        cout << "First Name: ";
        cin >> students[i].firstName;

        cout << "Last Name: ";
        cin >> students[i].lastName;

        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        cout << "Marks: ";
        cin >> students[i].marks;
    }

    cout << endl << "----- All Students Info -----" << endl;
    for(int i = 0; i < n; i++){
        cout << endl << "Student " << i + 1 << ":" << endl;
        students[i].displayStudentInfo();
    }

    delete[] students;
    return 0;
}
