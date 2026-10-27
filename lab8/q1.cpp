
#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Character attacks." << endl;
    }
};

class Warrior : public Character {
    int strength;

public:
    Warrior(int s) {
        strength = s;
    }

    void attack() override {
        cout << "Warrior damage: "
             << 20 + 2 * strength << endl;
    }
};

class Archer : public Character {
    int agility;

public:
    Archer(int a) {
        agility = a;
    }

    void attack() override {
        cout << "Archer damage: "
             << 15 + 3 * agility << endl;
    }
};

int main() {
    int strength, agility;

    cout << "Enter warrior strength: ";
    cin >> strength;

    cout << "Enter archer agility: ";
    cin >> agility;

    Warrior w(strength);
    Archer a(agility);

    Character* ptr;

    ptr = &w;
    ptr->attack();

    ptr = &a;
    ptr->attack();

    return 0;
}
