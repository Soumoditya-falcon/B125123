#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    int quantity;
    float price;

public:
    // accept product details
    void acceptDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Quantity Available: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    // display product details
    void displayDetails()
    {
        cout << "\n----- Product Details -----\n";
        cout << "Product ID        : " << productID << endl;
        cout << "Product Name      : " << productName << endl;
        cout << "Quantity Available: " << quantity << endl;
        cout << "Price per Unit    : " << price << endl;
    }

    // update quantity after selling
    void sellProduct(int soldQty)
    {
        if (soldQty <= quantity)
        {
            quantity = quantity - soldQty;
            cout << "\nSale successful!" << endl;
        }
        else
        {
            cout << "\nInsufficient stock! Sale cannot be completed." << endl;
        }
    }

    //+ calculate and display inventory value
    void inventoryValue()
    {
        float totalValue = quantity * price;
        cout << "Total Inventory Value: " << totalValue << endl;
    }
};

int main()
{
    Product p;
    int soldQty;

    p.acceptDetails();

    cout << "\nEnter quantity to sell: ";
    cin >> soldQty;

    p.sellProduct(soldQty);

    p.displayDetails();
    p.inventoryValue();

    return 0;
}
