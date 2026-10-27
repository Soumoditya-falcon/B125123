
#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual double calculateCost(double cpuHours) {
        return 0;
    }
};

class StandardInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) override {
        double cost = cpuHours * 5.0;

        if (cpuHours > 100)
            cost *= 0.85;

        return cost;
    }
};

class PremiumInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) override {
        double cost = cpuHours * 12.0;

        if (cpuHours > 100)
            cost *= 0.85;

        return cost;
    }
};

int main() {
    double cpuHours;

    cout << "Enter CPU usage in hours: ";
    cin >> cpuHours;

    if (cpuHours < 0) {
        cout << "Invalid CPU hours.";
        return 1;
    }

    StandardInstance standard;
    PremiumInstance premium;

    cout << "Standard instance cost: Rs. "
         << standard.calculateCost(cpuHours) << endl;

    cout << "Premium instance cost: Rs. "
         << premium.calculateCost(cpuHours) << endl;

    return 0;
}
