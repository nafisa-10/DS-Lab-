#include <iostream>
using namespace std;
const int p = 5;
int stack[p];
int top = -1;

void push() {
    int val;
    cout << "Enter value: ";
    cin >> val;

    if (top == p - 1) {
        cout << "Overflow" << endl;
        return;
    }

    top++;
    stack[top] = val;
    cout << val << " pushed" << endl;
}

void pop() {
    if (top == -1) {
        cout << "Underflow!" << endl;
        return;
    }

    cout << "Popped: " << stack[top] << endl;
    top--;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top value: " << stack[top] << endl;
    }
}

void isFull() {
    if (top == p - 1) cout << "Stack is full." << endl;
    else cout << "Stack is not full" << endl;
}

void isEmpty() {
    if (top == -1) cout << "Stack is empty." << endl;
    else cout << "Stack is not empty" << endl;
}

int main() {
    int op;
    cout << "Enter op number: ";
    cin >> op;

    while (op--) {
        string c;
        cout << "\nChoose one: push | pop | display | peek | isfull | isempty\n";
        cout << "Enter c: ";
        cin >> c;

        if (c == "push") push();
        else if (c == "pop") pop();
        else if (c == "display") display();
        else if (c == "peek") peek();
        else if (c == "isfull") isFull();
        else if (c == "isempty") isEmpty();
        else cout << "Invalid command" << endl;
    }

    return 0;
}
