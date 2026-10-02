#include <iostream>
using namespace std;

class Counter {
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    // Prefix ++
    Counter operator++() {
        ++value;
        return *this;
    }

    // Postfix ++
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Initial value: ";
    c.display();

    cout << "\nPrefix increment:" << endl;

    Counter c1 = ++c;

    cout << "Returned value: ";
    c1.display();

    cout << "Current value: ";
    c.display();

    cout << "\nPostfix increment:" << endl;

    Counter c2 = c++;

    cout << "Returned value: ";
    c2.display();

    cout << "Current value: ";
    c.display();

    return 0;
}
