#include <iostream>
using namespace std;

class Temperature {
    float celsius;

public:
    Temperature(float c = 0) {
        celsius = c;
    }

    bool operator<(Temperature t) {
        return celsius < t.celsius;
    }

    bool operator>(Temperature t) {
        return celsius > t.celsius;
    }

    float getTemperature() {
        return celsius;
    }
};

int main() {
    Temperature t1(25.5);
    Temperature t2(30.0);

    cout << "Temperature 1: "
         << t1.getTemperature() << " C" << endl;

    cout << "Temperature 2: "
         << t2.getTemperature() << " C" << endl;

    if (t1 < t2)
        cout << "Temperature 1 is lower than Temperature 2." << endl;
    else if (t1 > t2)
        cout << "Temperature 1 is higher than Temperature 2." << endl;
    else
        cout << "Both temperatures are equal." << endl;

    return 0;
}
