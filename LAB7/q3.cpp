#include <iostream>
using namespace std;

class Vehicle {
protected:
    string registrationNo;
    int rentalDays;

public: 
    Vehicle(string reg, int days) {
        registrationNo = reg;
        rentalDays = days;
    }
};

class Car : public Vehicle {
protected:
    double dailyRate;

public:
    Car(string reg, int days, double rate)
        : Vehicle(reg, days) {
        dailyRate = rate;
    }
};

class LuxuryCar : public Car {
private:
    double luxuryCharge;

public:
    LuxuryCar(string reg, int days, double rate, double charge)
        : Car(reg, days, rate) {
        luxuryCharge = charge;
    }

    void display() {
        double totalCost =
            (dailyRate + luxuryCharge) * rentalDays;

        cout << "\n--- Rental Details ---\n";
        cout << "Registration Number: " << registrationNo << endl;
        cout << "Rental Days: " << rentalDays << endl;
        cout << "Daily Rate: " << dailyRate << endl;
        cout << "Luxury Charge/Day: " << luxuryCharge << endl;
        cout << "Total Rental Cost: " << totalCost << endl;
    }
};

int main() {
    string reg;
    int days;
    double rate, charge;

    cout << "Enter registration number: ";
    cin >> reg;

    cout << "Enter number of rental days: ";
    cin >> days;

    cout << "Enter daily rental rate: ";
    cin >> rate;

    cout << "Enter luxury charge per day: ";
    cin >> charge;

    LuxuryCar obj(reg, days, rate, charge);

    obj.display();

    return 0;
}
