#include <iostream>
using namespace std;

class Locker {
public:
    Locker() {
        cout << "Locker allocated to customer.\n";
    }

    ~Locker() {
        cout << "Locker returned by customer.\n";
    }
};

int main() {
    {
        Locker l1; // Stack object
    } // Destructor auto-called here

    Locker *l2 = new Locker(); // Heap
    delete l2; // Destructor called manually

    return 0;
}
