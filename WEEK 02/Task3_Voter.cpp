#include<iostream>
#include "Task3_Voter.h"
using namespace std;

// defining member function outside the class
bool Voter::isEligible(){
    if(age > 18){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Voter v1;

    cout << "Enter Name: ";
    cin >> v1.name;

    cout << "Enter Age: ";
    cin >> v1.age;

    if(v1.isEligible()){
        cout << endl << v1.name << " is eligible to vote." << endl;
    }
    else{
        cout << endl << v1.name << " is not eligible to vote." << endl;
    }

    return 0;
}
