#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float length, width;

    // User input for length
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    // User input for width
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Create an instance of Rectangle
    Rectangle rect;

    // Assign values using accessor methods
    rect.setLength(length);
    rect.setWidth(width);

    // Calculate and output area
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
