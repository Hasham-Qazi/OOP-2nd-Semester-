// Task 4: Write Student Details and Then Read Them
// Lab Task - File Handling in C++
// Creates students.txt, writes the name and roll number of three
// students into it, then opens the file in read mode and displays
// all the student details on the screen.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// A small struct just to keep each student's data together
struct Student
{
    string name;
    string rollNumber;
};

int main()
{
    // Three sample students to write into the file
    Student students[3] = {
        {"Ali Raza", "2021-CS-101"},
        {"Sara Khan", "2021-CS-102"},
        {"Bilal Ahmed", "2021-CS-103"}
    };

    ofstream outFile("students.txt");

    if (!outFile)
    {
        cout << "Error: Could not create students.txt." << endl;
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        outFile << "Name: " << students[i].name << ", Roll No: " << students[i].rollNumber << endl;
    }

    outFile.close();
    cout << "Student details have been written to students.txt successfully." << endl;

    // Now open the file again in read mode and display everything
    ifstream inFile("students.txt");

    if (!inFile)
    {
        cout << "Error: Could not open students.txt for reading." << endl;
        return 1;
    }

    string line;
    cout << "\n--- Student Details from students.txt ---" << endl;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
