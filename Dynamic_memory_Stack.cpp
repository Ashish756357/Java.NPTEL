#include <iostream>

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top < capacity - 1) {
            arr[++top] = value;
            std::cout << "Pushed: " << value << std::endl;
        } else {
            std::cout << "Stack Overflow! Cannot push " << value << std::endl;
        }
    }

    void pop() {
        if (top >= 0) {
            std::cout << "Popped: " << arr[top--] << std::endl;
        } else {
            std::cout << "Stack Underflow! Cannot pop." << std::endl;
        }
    }
};

int main() {
    int size;
    std::cout << "Enter the size of the stack: ";
    std::cin >> size;

    Stack stack(size);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}
