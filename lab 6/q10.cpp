#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;

public:
    Product(string n = "", float p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    // Overload +
    Product operator+(Product p) {
        if (name == p.name && price == p.price) {
            return Product(name, price, quantity + p.quantity);
        }

        cout << "Products cannot be combined because "
             << "name or price is different." << endl;

        return Product();
    }

    // Overload >
    bool operator>(Product p) {
        float total1 = price * quantity;
        float total2 = p.price * p.quantity;

        return total1 > total2;
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

int main() {
    Product p1("Laptop", 50000, 1);
    Product p2("Laptop", 50000, 2);

    // Addition
    Product p3 = p1 + p2;

    cout << "Product 1:" << endl;
    p1.display();

    cout << "\nProduct 2:" << endl;
    p2.display();

    cout << "\nAfter Addition:" << endl;
    p3.display();

    // Comparison
    cout << "\nComparison:" << endl;

    if (p1 > p2)
        cout << "Product 1 has greater total value." << endl;
    else if (p2 > p1)
        cout << "Product 2 has greater total value." << endl;
    else
        cout << "Both products have equal total value." << endl;

    return 0;
}
