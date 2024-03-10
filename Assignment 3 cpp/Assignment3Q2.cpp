#include <iostream>

using namespace std;

class Stack {
private:
    int* arr;
    int size;
    int top;

public:
    // Parameterized constructor with default size 5
    Stack(int stackSize = 5) : size(stackSize), top(-1) {
        arr = new int[size];
    }

    // Destructor to deallocate memory
    ~Stack() {
        delete[] arr;
    }

    // Push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full. Cannot push more elements.\n";
            return;
        }
        arr[++top] = value;
    }

    // Pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop elements.\n";
            return;
        }
        --top;
    }

    // Peek at the top element of the stack
    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot peek.\n";
            return -1; // Assuming -1 represents an invalid value
        }
        return arr[top];
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull() const {
        return top == size - 1;
    }

    // Print the elements of the stack
    void print() const {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Example usage of the Stack class
    Stack myStack(3); // Creating a stack of size 3

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    myStack.print(); // 

    cout << "Top element: " << myStack.peek() << endl; // Output: Top element: 30

    myStack.pop();
    myStack.print();

    cout << "Is stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl; // Output: Is stack empty? No

    return 0;
}
