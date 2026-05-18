#include <iostream>
using namespace std;

class Product {
protected:
    string name;
    double price;

public:
    Product(string n, double p) {
        name = n;
        price = p;
        cout << "Product Constructor Called\n";
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

class Electronics : public Product {
private:
    int warrantyYears;

public:
    Electronics(string n, double p, int w) : Product(n, p) {
        warrantyYears = w;
        cout << "Electronics Constructor Called\n";
    }

    void display() {
        Product::display();
        cout << "Warranty: " << warrantyYears << " years\n";
    }
};

int main() {
    Electronics e("Laptop", 1200, 2);

    cout << "\n--- Product Details ---\n";
    e.display();

    return 0;
}

