#include<iostream>
using namespace std;

class BankAccount {
private:
    string holderName;
    double balance;

public:
    // Static variable to count total accounts
    static int totalAccounts;

    BankAccount(string name, double bal) {
        holderName = name;
        balance = bal;
        totalAccounts++;
    }

    void displayAccount() {
        cout << "Account Holder: " << holderName << ", Balance: $" << balance << endl;
    }
};

// Definition of static member outside class
int BankAccount::totalAccounts = 0;

int main() {
    BankAccount acc1("Alice", 5000.0);
    BankAccount acc2("Bob", 12000.0);
    BankAccount acc3("Charlie", 8500.0);

    acc1.displayAccount();
    acc2.displayAccount();
    acc3.displayAccount();

    cout << "\nTotal Bank Accounts Created: " << BankAccount::totalAccounts << endl;

    return 0;
}
