#include <iostream>
using namespace std;

const int p = 5;
int queue[p];
int front = -1, rear = -1;

void enqueue() {
    int val;
    cout << "Enter value: ";
    cin >> val;

    if (rear == p - 1) {
        cout << "Overflow" << endl;
        return;
    }

    if (front == -1) front = 0;
    rear++;
    queue[rear] = val;
    cout << val << " enqueued" << endl;
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Underflow!" << endl;
        return;
    }

    cout << "Dequeued: " << queue[front] << endl;

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Front value: " << queue[front] << endl;
    }
}

void isFull() {
    if (rear == p - 1) cout << "Queue is full." << endl;
    else cout << "Queue is not full" << endl;
}

void isEmpty() {
    if (front == -1 || front > rear) cout << "Queue is empty." << endl;
    else cout << "Queue is not empty" << endl;
}

int main() {
    int op;
    cout << "Enter op number: ";
    cin >> op;

    while (op--) {
        string c;
        cout << "\nChoose one: enqueue | dequeue | display | peek | isfull | isempty\n";
        cout << "Enter c: ";
        cin >> c;

        if (c == "enqueue") enqueue();
        else if (c == "dequeue") dequeue();
        else if (c == "display") display();
        else if (c == "peek") peek();
        else if (c == "isfull") isFull();
        else if (c == "isempty") isEmpty();
        else cout << "Invalid command" << endl;
    }

    return 0;
}
