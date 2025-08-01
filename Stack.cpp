#include<iostream>
using namespace std;
#define n 5
int stack[n];
int top = -1;
void push()
{
     int k;
     cout << "Enter data: ";
     cin >> k;
     if(top == n-1)
     {
        cout << "overflow" << endl;
        return;
     }
     else{
           top++;
           stack[top] = k;
           cout << k << " pushed" << endl;
     }
}
void pop()
{
    int v;
    if(top == -1)
    {
        cout << "underflow" << endl;
    }
    else{
        v = stack[top];
        cout << v << " poped" << endl;
        top--;
    }
}
void display() 
{
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
void peek()
{
    if(top == -1)
    {
        cout << "empty stack" << endl;
    }
    else{
        cout << "peek value:" << stack[top] << endl;
    }
}
void isFull() {
    if (top == n - 1) cout << "Stack is full" << endl;
    else cout << "Stack is not full" << endl;
}
void isEmpty() {
    if (top == -1) cout << "Stack is empty" << endl;
    else cout << "Stack is not empty" << endl;
}
int main()
{
    int choice;
    while(choice--)
    {
    cout << "\n1.push |2.pop |3.display |4.peek |5.isfull |6.isempty |7.exit " << endl;
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice)
       {
        case 1: push();
             break;
        case 2: pop();
             break;
        case 3: display();
             break;
        case 4: peek();
             break; 
        case 5: isFull();
             break;
        case 6: isEmpty();
             break;
        case 7: cout << "exit" << endl;return 0;
        default:  
        cout << "Invalid choice" << endl;                                     
 
       }
    }
  return 0;
}
