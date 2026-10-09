#include <iostream>
using namespace std;

class Academic {
protected:
    int marks1, marks2, marks3;

public:
    Academic(int m1, int m2, int m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
};

class Sports {
protected:
    int sportsMarks;

public:
    Sports(int sm) {
        sportsMarks = sm;
    }
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(int m1, int m2, int m3, int sm)
        : Academic(m1, m2, m3), Sports(sm) {}

    void display() {
        int total = marks1 + marks2 + marks3 + sportsMarks;
        double average = total / 4.0;

        cout << "\n--- Student Performance ---\n";
        cout << "Academic Marks: "
             << marks1 << ", "
             << marks2 << ", "
             << marks3 << endl;

        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    int m1, m2, m3, sports;

    cout << "Enter marks in Subject 1: ";
    cin >> m1;

    cout << "Enter marks in Subject 2: ";
    cin >> m2;

    cout << "Enter marks in Subject 3: ";
    cin >> m3;

    cout << "Enter Sports marks: ";
    cin >> sports;

    StudentResult obj(m1, m2, m3, sports);

    obj.display();

    return 0;
}
