#include<iostream>
using namespace std;

// Abstract base class
class HospitalStaff {
protected:
    string staffName;

public:
    HospitalStaff(string name) {
        staffName = name;
    }

    // Pure virtual function
    virtual void performDuty() = 0;

    // Virtual destructor (good practice with abstract classes)
    virtual ~HospitalStaff() {}
};

// Derived class: Doctor
class Doctor : public HospitalStaff {
public:
    Doctor(string name) : HospitalStaff(name) {}

    void performDuty() override {
        cout << staffName << " is diagnosing patients" << endl;
    }
};

// Derived class: Nurse
class Nurse : public HospitalStaff {
public:
    Nurse(string name) : HospitalStaff(name) {}

    void performDuty() override {
        cout << staffName << " is assisting patients" << endl;
    }
};

// Derived class: Receptionist
class Receptionist : public HospitalStaff {
public:
    Receptionist(string name) : HospitalStaff(name) {}

    void performDuty() override {
        cout << staffName << " is managing appointments" << endl;
    }
};

int main() {
    Doctor d("Doctor");
    Nurse n("Nurse");
    Receptionist r("Receptionist");

    cout << "--- Hospital Staff Duties ---" << endl;
    d.performDuty();
    n.performDuty();
    r.performDuty();

    // Using base class pointer (polymorphism)
    cout << "\n--- Using Base Class Pointers (Polymorphism) ---" << endl;
    HospitalStaff* staff[3];
    staff[0] = new Doctor("Dr. Smith");
    staff[1] = new Nurse("Nurse Emily");
    staff[2] = new Receptionist("Receptionist John");

    for (int i = 0; i < 3; i++) {
        staff[i]->performDuty();
    }

    // Clean up memory
    for (int i = 0; i < 3; i++) {
        delete staff[i];
    }

    return 0;
}
