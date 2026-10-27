
#include <iostream>
#include <iomanip>
using namespace std;

class Delivery {
public:
    virtual double estimateTime(double distance) {
        return 0;
    }
};

class BikeDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        return (distance / 20.0) * 60 + 5;
    }
};

class DroneDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        return (distance / 40.0) * 60 + 2;
    }
};

int main() {
    double distance;

    cout << "Enter delivery distance (km): ";
    cin >> distance;

    if (distance < 0) {
        cout << "Invalid distance.";
        return 1;
    }

    BikeDelivery bike;
    DroneDelivery drone;

    cout << fixed << setprecision(2);

    cout << "Bike delivery time: "
         << bike.estimateTime(distance) << " minutes\n";

    cout << "Drone delivery time: "
         << drone.estimateTime(distance) << " minutes\n";

    return 0;
}
