#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
    int marks[3];

public:
    Student(string n, int r, int m1, int m2, int m3) {
        name = n;
        rollNo = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    virtual void calculateResult() {
        cout << "Student Result" << endl;
    }
};

class RegularStudent : public Student {
public:
    RegularStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3) {}

    void calculateResult() override {
        int total = marks[0] + marks[1] + marks[2];

        cout << "\n--- Regular Student ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student {
public:
    ScholarshipStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3) {}

    void calculateResult() override {
        int total = marks[0] + marks[1] + marks[2];
        total = total + 5;

        cout << "\n--- Scholarship Student ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks after Bonus: " << total << endl;
    }
};

int main() {
    string name;
    int roll, m1, m2, m3, choice;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    cout << "Enter 1 for Regular Student\n";
    cout << "Enter 2 for Scholarship Student\n";
    cin >> choice;

    if (choice == 1) {
        RegularStudent obj(name, roll, m1, m2, m3);
        obj.calculateResult();
    }
    else if (choice == 2) {
        ScholarshipStudent obj(name, roll, m1, m2, m3);
        obj.calculateResult();
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}
