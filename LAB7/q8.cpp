#include <iostream>
using namespace std;

class Patient {
protected:
    string patientName;
    int patientID;
    int age;

public:
    Patient(string name, int id, int a) {
        patientName = name;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient {
private:
    double roomCharges;
    int numberOfDays;

public:
    InPatient(string name, int id, int a,
              double charges, int days)
        : Patient(name, id, a) {
        roomCharges = charges;
        numberOfDays = days;
    }

    void displayBill() {
        double totalBill = roomCharges * numberOfDays;

        cout << "\n--- Hospital Bill ---\n";
        cout << "Patient Name: " << patientName << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Room Charges/Day: " << roomCharges << endl;
        cout << "Number of Days: " << numberOfDays << endl;
        cout << "Total Hospital Bill: " << totalBill << endl;
    }
};

int main() {
    string name;
    int id, age, days;
    double charges;

    cout << "Enter Patient Name: ";
    cin >> name;

    cout << "Enter Patient ID: ";
    cin >> id;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Room Charges per Day: ";
    cin >> charges;

    cout << "Enter Number of Days: ";
    cin >> days;

    InPatient obj(name, id, age, charges, days);

    obj.displayBill();

    return 0;
}
