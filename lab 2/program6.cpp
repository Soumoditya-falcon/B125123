#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    // Function to input distance
    void input()
    {
        cout << "Enter Feet: ";
        cin >> feet;

        cout << "Enter Inches: ";
        cin >> inches;
    }

    // Function to add two distances
    Distance addDistance(Distance d)
    {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        // Convert inches into feet if inches >= 12
        if (temp.inches >= 12)
        {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        return temp;
    }

    // Function to display distance
    void display()
    {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main()
{
    Distance d1, d2, result;

    cout << "Enter First Distance:\n";
    d1.input();

    cout << "\nEnter Second Distance:\n";
    d2.input();

    result = d1.addDistance(d2);

    cout << "\nFinal Distance = ";
    result.display();

    return 0;
}
