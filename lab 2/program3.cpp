#include <iostream>
using namespace std;

class Calculator
{
private:
    float num1, num2;

public:
    // accept input
    void input()
    {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }

    //  addition
    void addition()
    {
        cout << "Addition = " << num1 + num2 << endl;
    }

    // subtraction
    void subtraction()
    {
        cout << "Subtraction = " << num1 - num2 << endl;
    }

    //multiplication
    void multiplication()
    {
        cout << "Multiplication = " << num1 * num2 << endl;
    }

    //  division
    void division()
    {
        if (num2 != 0)
            cout << "Division = " << num1 / num2 << endl;
        else
            cout << "Division is not possible (Cannot divide by zero)." << endl;
    }

    //display all results
    void display()
    {
        cout << "\n--- Calculator Results ---" << endl;
        addition();
        subtraction();
        multiplication();
        division();
    }
};

int main()
{
    Calculator c;

    c.input();
    c.display();

    return 0;
}
