#include<iostream>
using namespace std;

template <typename T>
T findMin(T a, T b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    cout << "--- findMin with integers ---" << endl;
    cout << "Min of 10 and 25: " << findMin(10, 25) << endl;

    cout << "--- findMin with doubles ---" << endl;
    cout << "Min of 3.7 and 2.1: " << findMin(3.7, 2.1) << endl;

    cout << "--- findMin with characters ---" << endl;
    cout << "Min of 'z' and 'a': " << findMin('z', 'a') << endl;

    return 0;
}
