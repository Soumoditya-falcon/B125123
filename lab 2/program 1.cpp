#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    // accept student details
    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore(); // Clears the input buffer

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    //display student details
    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}
