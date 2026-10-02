#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    Distance operator+(const Distance& d) {
        Distance temp;
        temp.feet = this->feet + d.feet;
        temp.inches = this->inches + d.inches;

        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }
        return temp;
    }
};

int main() {
    Distance d1, d2, result;

    cout << "Enter Distance 1:\n";
    d1.input();

    cout << "\nEnter Distance 2:\n";
    d2.input();

    result = d1 + d2;

    cout << "\nDistance 1: "; d1.display();
    cout << "Distance 2: "; d2.display();
    cout << "Result:     "; result.display();

    return 0;
}
