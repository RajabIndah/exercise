#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float length, width;

    // User input for length and width for the first rectangle
    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    cout << "Enter the width of the first rectangle: ";
    cin >> width;

    // Create an instance of Rectangle using the default constructor
    Rectangle rect1;

    // Assign values using accessor methods
    rect1.setLength(length);
    rect1.setWidth(width);

    // Calculate and output area of the first rectangle
    cout << "Area of the first rectangle: " << rect1.calculateArea() << endl;

    // User input for length and width for the second rectangle
    cout << "Enter the length of the second rectangle: ";
    cin >> length;
    cout << "Enter the width of the second rectangle: ";
    cin >> width;

    // Create an instance of Rectangle using the overloaded constructor
    Rectangle rect2(length, width);

    // Calculate and output area of the second rectangle
    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}
