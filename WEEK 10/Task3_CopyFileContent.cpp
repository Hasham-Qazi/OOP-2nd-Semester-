// Task 3: Copy Content from One File to Another
// Lab Task - File Handling in C++
// Reads notes.txt line by line, counts the lines, displays the count,
// and copies every line into a new file called notes_copy.txt.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile("notes.txt");

    if (!inFile)
    {
        cout << "Error: notes.txt not found. Please run Task 1 first to create it." << endl;
        return 1;
    }

    ofstream outFile("notes_copy.txt");

    if (!outFile)
    {
        cout << "Error: Could not create notes_copy.txt." << endl;
        return 1;
    }

    int lineCount = 0;
    string line;

    while (getline(inFile, line))
    {
        outFile << line << endl;   // copy the line into the new file
        lineCount++;
    }

    inFile.close();
    outFile.close();

    cout << "Total number of lines copied: " << lineCount << endl;
    cout << "Content has been successfully copied to notes_copy.txt" << endl;

    return 0;
}
