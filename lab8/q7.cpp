
#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual int calculateTarget(int firstInningsScore) {
        return firstInningsScore;
    }
};

class T20Match : public MatchFormat {
public:
    int calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.01);
        return firstInningsScore + margin;
    }
};

class ODIMatch : public MatchFormat {
public:
    int calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.02);
        return firstInningsScore + margin;
    }
};

int main() {
    int score;

    cout << "Enter first-innings score: ";
    cin >> score;

    if (score < 0) {
        cout << "Invalid score.";
        return 1;
    }

    T20Match t20;
    ODIMatch odi;

    cout << "T20 target score: "
         << t20.calculateTarget(score) << endl;

    cout << "ODI target score: "
         << odi.calculateTarget(score) << endl;

    return 0;
}
