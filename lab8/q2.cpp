
#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual double calculateFee(int hours) {
        return 0;
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) override {
        double fee = hours * 10.0;

        if (hours > 5)
            fee *= 0.90;

        return fee;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) override {
        double fee = hours * 30.0;

        if (hours > 5)
            fee *= 0.90;

        return fee;
    }
};

int main() {
    int hours;

    cout << "Enter parking duration in hours: ";
    cin >> hours;

    if (hours < 0) {
        cout << "Invalid hours.";
        return 1;
    }

    TwoWheelerSlot two;
    FourWheelerSlot four;

    cout << "Two-wheeler fee: Rs. "
         << two.calculateFee(hours) << endl;

    cout << "Four-wheeler fee: Rs. "
         << four.calculateFee(hours) << endl;

    return 0;
}
