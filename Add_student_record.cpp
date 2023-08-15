#include <iostream>
#include <string>
using namespace std;

// Maximum number of students in the database
const int MAX_STUDENTS = 100;

// Structure to represent student information
struct Student {
    string name;
    int age;
    double gpa;
};

// Database to store student records
Student database[MAX_STUDENTS];
int numStudents = 0;

// Function to add a student to the database
void addStudent() {
    if (numStudents < MAX_STUDENTS) {
        cout << "Enter student name: ";
        cin.ignore(); // Clear newline character from buffer
        getline(cin, database[numStudents].name);

        cout << "Enter student age: ";
        cin >> database[numStudents].age;

        cout << "Enter student GPA: ";
        cin >> database[numStudents].gpa;

        numStudents++;
        cout << "Student added successfully." << endl;
    } else {
        cout << "Database is full. Cannot add more students." << endl;
    }
}

// Function to display all student records
void displayStudents() {
    if (numStudents > 0) {
        cout << "Student Database:" << endl;
        for (int i = 0; i < numStudents; i++) {
            cout << "Name: " << database[i].name << endl;
            cout << "Age: " << database[i].age << endl;
            cout << "GPA: " << database[i].gpa << endl;
            cout << "--------------------------" << endl;
        }
    } else {
        cout << "No students in the database." << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "Student Database Management" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
