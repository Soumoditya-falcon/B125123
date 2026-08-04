#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    // enter account details
    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore(); // Clear input buffer

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    //deposit money
    void deposit()
    {
        float amount;

        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    //withdraw money
    void withdraw()
    {
        float amount;

        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Withdrawal unsuccessful! Insufficient balance." << endl;
        }
    }

    //display account details
    void display()
    {
        cout << "\n----- Updated Account Details -----" << endl;
        cout << "Account Number      : " << accountNumber << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Current Balance     : " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.input();
    account.deposit();
    account.withdraw();
    account.display();

    return 0;
}
