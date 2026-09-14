#include<iostream>
using namespace std;

class Distance{
private:
    int feet;
    int inches;

public:
    Distance(int f, int i){
        feet = f;
        inches = i;
    }

    // overloading == operator using member function
    bool operator == (Distance d){
        if(feet == d.feet && inches == d.inches){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    int f1, i1, f2, i2;

    cout << "Enter first distance (feet and inches): ";
    cin >> f1 >> i1;

    cout << "Enter second distance (feet and inches): ";
    cin >> f2 >> i2;

    Distance d1(f1, i1);
    Distance d2(f2, i2);

    if(d1 == d2){
        cout << endl << "Both distances are equal." << endl;
    }
    else{
        cout << endl << "Distances are not equal." << endl;
    }

    return 0;
}
