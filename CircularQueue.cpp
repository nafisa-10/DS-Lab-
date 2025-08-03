#include<iostream>
using namespace std;
#define n 5
int queue[n];
int front = -1;
int rear = -1;
void enqueue() {
    int k;
    cout << "Enter data: ";
    cin >> k;

    if ((rear + 1) % n == front) {
        cout << "Overflow" << endl;
        return;
    }
    else if (rear == -1 && front == -1) {
        rear = front = 0;
        queue[rear] = k;
    }
    else {
        rear = (rear + 1) % n;
        queue[rear] = k;
    }
    cout << k << " Enqueued" << endl;
}
void dequeue() {
    if (rear == -1 && front == -1) {
        cout << "Underflow" << endl;
    }
    else if (rear == front) {
        cout << queue[front] << " Dequeued" << endl;
        rear = front = -1;
    }
    else {
        cout << queue[front] << " Dequeued" << endl;
        front = (front + 1) % n;
    }
}
void peek() {
    if (rear == -1 && front == -1) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Peek value: " << queue[front] << endl;
    }
}
void display() {
    if (rear == -1 && front == -1) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % n;
        }
        cout << endl;
    }
}
int main() {
    int choice;
    while (true) {
        cout << "\n1.enqueue |2.dequeue |3.peek |4.display |5.exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: cout << "exit" << endl; return 0;
            default: cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
