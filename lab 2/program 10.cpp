#include <iostream>
#include <string>
using namespace std;

class ElectricityBill
{
private:
    int consumerNumber;
    string consumerName;
    int units;
    float billAmount;

public:
    // Function to accept consumer details
    void acceptDetails()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cin.ignore();

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    // Function to calculate bill
    void calculateBill()
    {
        if (units <= 100)
        {
            billAmount = units * 5;
        }
        else if (units <= 200)
        {
            billAmount = (100 * 5) + ((units - 100) * 7);
        }
        else
        {
            billAmount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }
    }

    // Function to display bill
    void displayBill()
    {
        cout << "\n----- Electricity Bill -----\n";
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Units Consumed  : " << units << endl;
        cout << "Total Bill      : Rs. " << billAmount << endl;
    }
};

int main()
{
    ElectricityBill bill;

    bill.acceptDetails();
    bill.calculateBill();
    bill.displayBill();

    return 0;
}
