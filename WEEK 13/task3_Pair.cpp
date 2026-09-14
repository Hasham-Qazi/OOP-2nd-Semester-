#include<iostream>
#include<string>
using namespace std;

template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T f, T s) {
        first = f;
        second = s;
    }

    T getFirst() {
        return first;
    }

    T getSecond() {
        return second;
    }

    void display() {
        cout << "First: " << first << " Second: " << second << endl;
    }
};

int main() {
    cout << "--- Pair of integers ---" << endl;
    Pair<int> p1(10, 20);
    p1.display();
    cout << "getFirst(): " << p1.getFirst() << ", getSecond(): " << p1.getSecond() << endl;

    cout << "--- Pair of doubles ---" << endl;
    Pair<double> p2(1.5, 9.8);
    p2.display();

    cout << "--- Pair of strings ---" << endl;
    Pair<string> p3("Alice", "Bob");
    p3.display();

    return 0;
}
