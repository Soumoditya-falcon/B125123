#include <iostream>
#include <string>
using namespace std;

class Item {
    string name;
    float price;
    int quantity;

public:
    Item(string n = "", float p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    Item operator+(Item item) {
        if (name == item.name && price == item.price) {
            return Item(name, price, quantity + item.quantity);
        }

        cout << "Items cannot be combined because "
             << "name or price is different." << endl;

        return Item();
    }

    void display() {
        cout << "Item Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    Item i1("Pen", 10, 5);
    Item i2("Pen", 10, 8);

    Item i3 = i1 + i2;

    cout << "Item 1:" << endl;
    i1.display();

    cout << "\nItem 2:" << endl;
    i2.display();

    cout << "\nCombined Item:" << endl;
    i3.display();

    return 0;
}
