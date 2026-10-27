
#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual double calculateWater(double moisture) {
        return 0;
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override {
        return 2 * (100 - moisture);
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override {
        return 3 * (100 - moisture);
    }
};

int main() {
    double moisture;

    cout << "Enter soil moisture (0-100%): ";
    cin >> moisture;

    if (moisture < 0 || moisture > 100) {
        cout << "Invalid moisture percentage.";
        return 1;
    }

    DripIrrigation drip;
    SprinklerIrrigation sprinkler;

    cout << "Drip irrigation water required: "
         << drip.calculateWater(moisture) << " litres\n";

    cout << "Sprinkler irrigation water required: "
         << sprinkler.calculateWater(moisture) << " litres\n";

    return 0;
}
