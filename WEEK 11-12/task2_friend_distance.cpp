#include<iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    // Declaration of friend function
    friend void addDistance(Distance d1, Distance d2);
};

// Definition of friend function
void addDistance(Distance d1, Distance d2) {
    int totalInches = d1.inches + d2.inches;
    int totalFeet = d1.feet + d2.feet + totalInches / 12;
    totalInches = totalInches % 12;

    cout << "Sum of Distances: " << totalFeet << " feet " << totalInches << " inches" << endl;
}

int main() {
    Distance d1(5, 9);
    Distance d2(3, 7);

    cout << "Distance 1: 5 feet 9 inches" << endl;
    cout << "Distance 2: 3 feet 7 inches" << endl;

    addDistance(d1, d2);

    return 0;
}
