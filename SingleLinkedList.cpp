#include<stdio.h>
#include<stdlib.h>
struct node{
    int Data;
    struct node *next;
};
int main()
{
    struct node *newnode,*head = 0,*temp;
    int s=1;
    while(s){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->Data);
    newnode->next = 0;
    if(head == 0)
    {
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
    printf("Do You Wanna Continue? If Not,press 0,else 1: ");
    scanf("%d",&s);
    }
    printf("Linked List: ");
    temp = head;
    while (temp != 0) {
        printf("%d -> ", temp->Data);

        temp = temp->next;
    }
    return 0;
}
