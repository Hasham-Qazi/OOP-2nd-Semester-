#ifndef VOTER_H
#define VOTER_H

#include<string>
using namespace std;

class Voter{
public:
    string name;
    int age;

    // declared here, defined outside the class
    bool isEligible();
};

#endif
