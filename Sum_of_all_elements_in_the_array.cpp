#include <iostream>
using namespace std;

int main() {
    int size;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Get array elements from the user
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Display the sum
    cout << "Sum of array elements: " << sum << endl;

    // Deallocate the dynamically allocated memory
    delete[] arr;

    return 0;
}
