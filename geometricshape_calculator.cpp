#include <iostream>
#include <cmath>
using namespace std;

double circleArea(double radius) {
    return M_PI * radius * radius;
}

double circlePerimeter(double radius) {
    return 2 * M_PI * radius;
}

double rectangleArea(double length, double width) {
    return length * width;
}

double rectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

double trianglePerimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

int main() {
    cout << "Geometric Shape Calculator\n";

    int choice;
    while (true) {
        cout << "Choose a shape:\n";
        cout << "1. Circle   2. Rectangle   3. Triangle   4. Exit\n";
        cin >> choice;

        if (choice == 4) {
            cout << "Exiting the program.\n";
            break;
        }

        double result = 0.0;
        double dim1, dim2, dim3;

        switch (choice) {
            case 1:
                cout << "Enter the radius of the circle: ";
                cin >> dim1;
                result = circleArea(dim1);
                cout << "Area: " << result << endl;
                result = circlePerimeter(dim1);
                cout << "Perimeter: " << result << endl;
                break;
            case 2:
                cout << "Enter the length and width of the rectangle: ";
                cin >> dim1 >> dim2;
                result = rectangleArea(dim1, dim2);
                cout << "Area: " << result << endl;
                result = rectanglePerimeter(dim1, dim2);
                cout << "Perimeter: " << result << endl;
                break;
            case 3:
                cout << "Enter the base and height of the triangle: ";
                cin >> dim1 >> dim2;
                result = triangleArea(dim1, dim2);
                cout << "Area: " << result << endl;
                cout << "Enter the three sides of the triangle: ";
                cin >> dim1 >> dim2 >> dim3;
                result = trianglePerimeter(dim1, dim2, dim3);
                cout << "Perimeter: " << result << endl;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
