#include <iostream>
using namespace std;

class BankAccount {
protected:
    long long accountNumber;
    double balance;

public:
    BankAccount(long long acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:

    SavingsAccount(long long acc, double bal, double rate)
        : BankAccount(acc, bal) {
        interestRate = rate;
    }

    void display() {
        double interest = balance * interestRate / 100;
        double updatedBalance = balance + interest;

        cout << "\n--- Savings Account ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Original Balance: " << balance << endl;
        cout << "Interest: " << interest << endl;
        cout << "Updated Balance: " << updatedBalance << endl;
    }
}

class CurrentAccount : public BankAccount {
private:
    double minimumBalance;
    double maintenanceCharge;

public:
    CurrentAccount(long long acc, double bal,
                   double minBal, double charge)
        : BankAccount(acc, bal) {
        minimumBalance = minBal;
        maintenanceCharge = charge;
    }

    void display() {
        if (balance < minimumBalance) {
            balance = balance - maintenanceCharge;
        }

        cout << "\n--- Current Account ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main() {
    long long acc;
    double balance, rate, minBalance, charge;

    cout << "Enter Savings Account Number: ";
    cin >> acc;

    cout << "Enter Savings Account Balance: ";
    cin >> balance;

    cout << "Enter Interest Rate (%): ";
    cin >> rate;

    SavingsAccount savings(acc, balance, rate);
    savings.display();

    cout << "\nEnter Current Account Number: ";
    cin >> acc;

    cout << "Enter Current Account Balance: ";
    cin >> balance;

    cout << "Enter Minimum Balance: ";
    cin >> minBalance;

    cout << "Enter Maintenance Charge: ";
    cin >> charge;

    CurrentAccount current(acc, balance, minBalance, charge);
    current.display();

    return 0;
}
