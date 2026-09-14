#include<iostream>
#include<string>
using namespace std;

template <typename T>
void printTwice(T val) {
    cout << val << endl;
    cout << val << endl;
}

int main() {
    cout << "--- Printing int twice ---" << endl;
    printTwice(42);

    cout << "--- Printing double twice ---" << endl;
    printTwice(3.14);

    cout << "--- Printing string twice ---" << endl;
    printTwice(string("Hello Templates!"));

    return 0;
}
