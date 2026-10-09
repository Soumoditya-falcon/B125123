#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
        cout << "Person constructor executed." << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;

public:
    Employee(string n, int id)
        : Person(n) {
        employeeID = id;
        cout << "Employee constructor executed." << endl;
    }
};

class Manager : public Employee {
private:
    double salary;

public:
    Manager(string n, int id, double s)
        : Employee(n, id) {
        salary = s;
        cout << "Manager constructor executed." << endl;
    }

    void display() {
        cout << "\n--- Manager Information ---\n";
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    string name;
    int id;
    double salary;

    cout << "Enter Manager Name: ";
    cin >> name;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\nCreating Manager object...\n\n";

    Manager obj(name, id, salary);

    cout << "\n";
    obj.display();

    return 0;
}
