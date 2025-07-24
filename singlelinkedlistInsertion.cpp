#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *head = 0;
void insert_First(int val) 
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;
    head = newnode;
}
void insert_End(int val) 
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = 0;
    if (head == 0) 
    {
        head = newnode;
    } 
    else 
    {
        struct node *temp = head;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void insert_Position(int val, int pos) 
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;

    if (pos == 1) 
    {
        newnode->next = head;
        head = newnode;
    } 
    else 
    {
        struct node *temp = head;
        int i;
        for (i = 1; i < pos - 1 && temp != 0; i++) {
            temp = temp->next;
        }
        if (temp != 0) 
        {
           newnode->next = temp->next;
           temp->next = newnode;
        }
    }
}
void displayList() 
{
    struct node *temp = head;
    printf("Linked List: ");
    while (temp != 0) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int s,val,pos;
    while (1) {
        printf("\nFunction name: \n");
        printf("1. Insert First\n");
        printf("2. Insert End\n");
        printf("3. Insert Position\n");
        printf("4. Display List\n");
        printf("Enter choice: ");
        scanf("%d", &s);

        switch (s) {
            case 1:
                printf("Enter value First: ");
                scanf("%d", &val);
                insert_First(val);
                break;
            case 2:
                printf("Enter value End: ");
                scanf("%d", &val);
                insert_End(val);
                break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                printf("Enter position: ");
                scanf("%d", &pos);
                insert_Position(val, pos);
                break;
            case 4:
                displayList();
                break;
            default:
                printf("Invalid choice \n");
        }
    }

    return 0;
}
