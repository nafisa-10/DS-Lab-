#include<iostream>
using namespace std;
#define n 5
int arr[n];
int front = -1,rear = -1;
void enqueue (int val)
{
    if((rear+1) % n == front)
    {
       cout << "Overflow" << val << endl;
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear +1)%n;
    }
    arr[rear] = val;
    cout << val << " enqueued" << endl;
}
void dequeue() 
{
    if (front == -1 && rear == -1) {
        cout << "Underflow" << endl;
        return;
    }
    cout << arr[front] << " dequeued" << endl;
    if (front == rear) 
    {
        front = rear = -1;
    } 
    else 
    {
        front = (front + 1) % n;
    }
}
void peek() 
{
    if (front == -1 && rear == -1) 
    {
        cout << "Empty" << endl;
    } 
    else 
    {
        cout << "Front element: " << arr[front] << endl;
    }
}
void display() 
{
    int i = front;
    if (front == -1 && rear == -1) {
        cout << "Empty" << endl;
        return;
    }
    cout << "Queue: ";
    while (true) 
    {
        cout << arr[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % n;
    }
    cout << endl;
}
int main() 
{
    int s,val;
    while (true) 
    {
        cout << "\nFunction Name :" << endl;
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display" << endl;
        cout << "Enter your s (1-4): ";
        cin >> s;

        switch (s) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> val;
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                cout << "Invalid" << endl;
        }
    }
    return 0;
}
