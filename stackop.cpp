#include <iostream>

using namespace std;

#define MAX 100

class stack {
    int arr[MAX];
    int top;

public:
    stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack overflow \n";
            return;
        }

        arr[++top] = val;
        cout << val << " pushed into stack\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow \n";
            return;
        }

        cout << arr[top] << " popped from stack successfully \n";
        top--;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack underflow \n";
            return;
        }
        cout << "Top element: " << arr[top] << "\n";
    }

    void TRAVERSE() {
        if (isEmpty()) {
            cout << "Stack is empty \n";
            return;
        }
        cout << "Stack Top to bottom: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << "\n";
    }

    void search(int val) {
        if (isEmpty()) {
            cout << "Stack is empty \n";
            return;
        }

        bool found = false;
        // Fixed loop to go down to 0 (i >= 0)
        for (int i = top; i >= 0; i--) {
            if (arr[i] == val) {
                cout << val << " found at position " << (top - i + 1) << " from top \n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << val << " not found in stack \n";
        }
    }
};

int main() {
    stack S; 
    int choice, val;

    do {
        cout << "\nSTACK MENU \n";
        cout << "1. PUSH 2. POP 3. PEEK 4. TRAVERSE 5. SEARCH\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                S.push(val);
                break;
            case 2:
                S.pop();
                break;
            case 3:
                S.peek();
                break;
            case 4:
                S.TRAVERSE();
                break;
            case 5:
                cout << "Enter value to search: ";
                cin >> val;
                S.search(val);
                break;
        
            default:
                cout << "Invalid choice! \n";
        }
    } while (choice != 0); 
    return 0;
}
