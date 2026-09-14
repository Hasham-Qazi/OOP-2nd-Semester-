// Task 1: Create, Write, Read, and Append a File
// Lab Task - File Handling in C++
// This program creates notes.txt, writes three lines into it,
// reads and displays the content, then appends the student's
// name and roll number without erasing what was already there.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Step 1: Create the file and write three lines into it
    ofstream outFile("notes.txt");

    if (!outFile)
    {
        cout << "Error: Could not create the file." << endl;
        return 1;
    }

    outFile << "This is the first line of notes." << endl;
    outFile << "This is the second line, added for practice." << endl;
    outFile << "This is the third and final line of this section." << endl;

    outFile.close();
    cout << "notes.txt has been created and three lines were written successfully." << endl;

    // Step 2: Open the file in read mode and display everything on screen
    ifstream inFile("notes.txt");

    if (!inFile)
    {
        cout << "Error: Could not open the file for reading." << endl;
        return 1;
    }

    string line;
    cout << "\n--- Contents of notes.txt ---" << endl;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }
    inFile.close();

    // Step 3: Append name and roll number without overwriting existing content
    // Opening in append mode (ios::app) makes sure the cursor goes to the
    // end of the file instead of erasing what's already there.
    ofstream appendFile("notes.txt", ios::app);

    if (!appendFile)
    {
        cout << "Error: Could not open the file for appending." << endl;
        return 1;
    }

    appendFile << "Name: Hasham" << endl;
    appendFile << "Roll No: 2021-CS-101" << endl;
    appendFile.close();

    cout << "\nName and roll number appended successfully." << endl;

    // Step 4: Read the file again to confirm the appended data is present
    ifstream finalRead("notes.txt");
    cout << "\n--- Updated Contents of notes.txt ---" << endl;
    while (getline(finalRead, line))
    {
        cout << line << endl;
    }
    finalRead.close();

    return 0;
}
