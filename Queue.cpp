#include<iostream>
using namespace std;
#define n 5
int queue[n];
int front = -1;
int rear = -1;
void enqueue()
{
    int k;
    cout << "Enter data: ";
    cin >> k;
    if(rear == n-1){
        cout << "Overflow" << endl;
        return;
    }
    else if(rear == -1 && front == -1){
        rear = front = 0;
        queue[rear] = k;
    }
    else{
        rear++;
        queue[rear] = k;
        cout << k << " Enqueued" << endl;
    }
}
void dequeue()
{
    if(rear == -1 &&  front == -1){
        cout << "underflow" << endl;
    }
    else if(rear == front){
        cout << queue[front] << " Dequeued" << endl;
        rear = front = -1;
    }
    else{
        cout << queue[front] << " Dequeued" << endl;
        front++;
    }
}
void peek()
{
    if(rear == -1 && front == -1)
    {
        cout << "Queueu is empty" << endl;
    }
    else{
        cout << "Peek value: " << queue[front];
    }
}
void display()
{
    if (rear == -1 && front == -1)
    {
        cout << "Queueu is empty" << endl;
    }
    else{
        cout << "Queue elements: ";
        for(int i = front;i<=rear;i++)
        {
             cout << queue[i] << " ";
        }
        cout << endl;
    } 
}
void isFull(){
     if (rear == n - 1) {
        cout << "Queue is full" << endl;
    }
    else {
        cout << "Queue is not full" << endl;
    }
}
void isEmpty(){
    if(front == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
}
int main(){
    int choice;
    while(true){
    cout << "\n1.enqueue |2.dequeue |3.peek |4.display |5.isfull |6.isempty |7.exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice){
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: peek(); break;
        case 4: display(); break;
        case 5: isFull(); break;
        case 6: isEmpty(); break;
        case 7: cout <<"exit" << endl; return 0;
    }
    }
    return 0;
}
