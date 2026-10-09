#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeID;
    string name;

public:
    Employee(int id, string n) {
        employeeID = id;
        name = n;
    }
};

class Developer : virtual public Employee {
protected:
    string programmingLanguage;

public:
    Developer(int id, string n, string language)
        : Employee(id, n) {
        programmingLanguage = language;
    }
};

class Tester : virtual public Employee {
protected:
    string testingTool;

public:
    Tester(int id, string n, string tool)
        : Employee(id, n) {
        testingTool = tool;
    }
};

class TechLead : public Developer, public Tester {
public:
    TechLead(int id, string n,
             string language, string tool)
        : Employee(id, n),
          Developer(id, n, language),
          Tester(id, n, tool) {}

    void display() {
        cout << "\n--- Tech Lead Information ---\n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Programming Language: "
             << programmingLanguage << endl;
        cout << "Testing Tool: "
             << testingTool << endl;
    }
};

int main() {
    int id;
    string name, language, tool;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Programming Language: ";
    cin >> language;

    cout << "Enter Testing Tool: ";
    cin >> tool;

    TechLead obj(id, name, language, tool);

    obj.display();

    return 0;
}
