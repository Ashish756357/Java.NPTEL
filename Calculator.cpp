#include <iostream>
using namespace std;

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Cannot divide by zero." << endl;
        return 0.0;  // Return a default value
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1; // Exit program with an error status
    }

    cout << "Result: " << result << endl;

    return 0;
}
