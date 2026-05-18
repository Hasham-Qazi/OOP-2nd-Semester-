#include <iostream>
using namespace std;

class File {
public:
    File() {
        cout << "File opened\n";
    }

    ~File() {
        cout << "File closed\n";
    }
};

class TextFile : public File {
public:
    TextFile() {
        cout << "TextFile opened\n";
    }

    ~TextFile() {
        cout << "TextFile closed\n";
    }
};

int main() {
    TextFile t;

    return 0;
}

