#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;
    double cgpa;

public:
    Student(string n, int a, int r, double c)
        : Person(n, a) {
        rollNo = r;
        cgpa = c;
    }
};

class Employee : virtual public Person {
protected:
    int employeeID;
    double salary;

public:
    Employee(string n, int a, int id, double s)
        : Person(n, a) {
        employeeID = id;
        salary = s;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int r,
                      double c, int id, double s)
        : Person(n, a),
          Student(n, a, r, c),
          Employee(n, a, id, s) {}

    void display() {
        cout << "\n--- Teaching Assistant ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    string name;
    int age, roll, id;
    double cgpa, salary;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter CGPA: ";
    cin >> cgpa;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Salary: ";
    cin >> salary;

    TeachingAssistant obj(name, age, roll, cgpa, id, salary);

    obj.display();

    return 0;
}
