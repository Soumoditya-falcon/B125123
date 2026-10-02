#include <iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    bool operator==(Date d) {
        return (day == d.day &&
                month == d.month &&
                year == d.year);
    }

    void display() {
        cout << day << " "
             << month << " "
             << year << endl;
    }
};

int main() {
    Date d1(15, 8, 2026);
    Date d2(15, 8, 2026);

    cout << "Date 1: ";
    d1.display();

    cout << "Date 2: ";
    d2.display();

    if (d1 == d2)
        cout << "Both dates are equal." << endl;
    else
        cout << "Both dates are not equal." << endl;

    return 0;
}
