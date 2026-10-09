#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;

public:
    Employee(string n, double salary) {
        name = n;
        basicSalary = salary;
    }
};

class Developer : public Employee {
protected:
    int experience;

public:
    Developer(string n, double salary, int exp)
        : Employee(n, salary) {
        experience = exp;
    }

    double experienceBonus() {
        return 0.05 * basicSalary * experience;
    }
};

class SeniorDeveloper : public Developer {
private:
    double projectBonus;

public:
    SeniorDeveloper(string n, double salary, int exp, double bonus)
        : Developer(n, salary, exp) {
        projectBonus = bonus;
    }

    void display() {
        double expBonus = experienceBonus();
        double finalSalary = basicSalary + expBonus + projectBonus;

        cout << "\n--- Salary Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Experience Bonus: " << expBonus << endl;
        cout << "Project Bonus: " << projectBonus << endl;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main() {
    string name;
    double salary, bonus;
    int experience;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter basic salary: ";
    cin >> salary;

    cout << "Enter experience in years: ";
    cin >> experience;

    cout << "Enter project bonus: ";
    cin >> bonus;

    SeniorDeveloper obj(name, salary, experience, bonus);

    obj.display();

    return 0;
}
