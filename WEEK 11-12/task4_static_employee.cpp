#include<iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;

public:
    // Static variable shared by all objects
    static string companyName;

    Employee(int id, string name) {
        employeeID = id;
        employeeName = name;
    }

    void displayEmployee() {
        cout << "Employee ID: " << employeeID << ", Name: " << employeeName << endl;
    }

    // Static member function
    static void displayCompanyInfo() {
        cout << "Company Name: " << companyName << endl;
    }
};

// Definition of static member outside class
string Employee::companyName = "TechCorp Solutions";

int main() {
    // Accessing static function using class name (before creating objects)
    cout << "--- Company Information ---" << endl;
    Employee::displayCompanyInfo();

    Employee e1(101, "Alice");
    Employee e2(102, "Bob");
    Employee e3(103, "Charlie");

    cout << "\n--- Employee Details ---" << endl;
    e1.displayEmployee();
    e2.displayEmployee();
    e3.displayEmployee();

    // All employees share the same company name
    cout << "\n--- Shared Company Name (accessed via object) ---" << endl;
    Employee::displayCompanyInfo();

    return 0;
}
