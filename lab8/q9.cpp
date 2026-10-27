
#include <iostream>
#include <iomanip>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Robot is moving." << endl;
    }

    virtual ~Robot() {}
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Wheeled Robot travel time: "
             << distance / 2.0 << " seconds\n";
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Tracked Robot travel time: "
             << distance / 1.2 << " seconds\n";
    }
};

int main() {
    double distance;

    cout << "Enter distance to travel (metres): ";
    cin >> distance;

    if (distance < 0) {
        cout << "Invalid distance.";
        return 1;
    }

    WheeledRobot wheeled;
    TrackedRobot tracked;

    Robot* ptr;

    cout << fixed << setprecision(2);

    ptr = &wheeled;
    ptr->move(distance);

    ptr = &tracked;
    ptr->move(distance);

    return 0;
}
