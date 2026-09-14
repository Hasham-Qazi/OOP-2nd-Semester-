#include<iostream>
using namespace std;

class Printer{
public:
    void print_document(){
        cout << "Printing document..." << endl;
    }
};

class Scanner{
public:
    void scan_document(){
        cout << "Scanning document..." << endl;
    }
};

class Photocopier : public Printer, public Scanner{
public:
    void photocopy(){
        cout << "Photocopy started:" << endl;
        scan_document();
        print_document();
        cout << "Photocopy completed." << endl;
    }
};

int main(){
    Photocopier machine;

    // using functionality inherited from Printer and Scanner
    machine.print_document();
    machine.scan_document();

    cout << endl;

    // using function specific to Photocopier
    machine.photocopy();

    return 0;
}
