
#include <iostream>
#include <cmath>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Scanning threats..." << endl;
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Basic Scanner detected: "
             << threats << " threats\n";
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int remaining = ceil(threats * 0.10);

        cout << "Advanced Scanner detected: "
             << threats << " threats\n";

        cout << "Threats remaining after removal: "
             << remaining << endl;
    }
};

int main() {
    int threats;

    cout << "Enter number of threats detected: ";
    cin >> threats;

    if (threats < 0) {
        cout << "Invalid threat count.";
        return 1;
    }

    BasicScanner basic;
    AdvancedScanner advanced;

    basic.scan(threats);
    advanced.scan(threats);

    return 0;
}
