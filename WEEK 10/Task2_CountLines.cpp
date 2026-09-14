// Task 2: Count Number of Lines in a File
// Lab Task - File Handling in C++
// Opens notes.txt (created in Task 1) in read mode, counts how many
// lines it contains, and prints the total to the screen.

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

    int lineCount = 0;
    string line;

    while (getline(inFile, line))
    {
        lineCount++;
    }

    inFile.close();

    cout << "Total number of lines in notes.txt: " << lineCount << endl;

    return 0;
}
