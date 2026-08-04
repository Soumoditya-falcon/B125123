#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // read dimensions
    void input()
    {
        cout << "Enter the length of the rectangle: ";
        cin >> length;

        cout << "Enter the breadth of the rectangle: ";
        cin >> breadth;
    }

    // calculate area
    float area()
    {
        return length * breadth;
    }

    // calculate perimeter
    float perimeter()
    {
        return 2 * (length + breadth);
    }

    // Function to display results
    void display()
    {
        cout << "\n--- Rectangle Details ---" << endl;
        cout << "Length    : " << length << endl;
        cout << "Breadth   : " << breadth << endl;
        cout << "Area      : " << area() << endl;
        cout << "Perimeter : " << perimeter() << endl;
    }
};

int main()
{
    Rectangle r;

    r.input();
    r.display();

    return 0;
}
