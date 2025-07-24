#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct  node *next;
    struct node  *prev;
};
int main()
{
    struct node *head = 0,*temp,*newnode;
    int s=1;
    while(s)
    {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    if(head ==0)
    {
        head = temp = newnode;
    }
    else{
          temp->next= newnode;
          newnode->prev= temp;
          temp = newnode;
    }
    printf("Do You Wanna Continue? if not,press 0 else 1: ");
    scanf("%d",&s);
    }
    printf("Doubly Linked List: ");
    temp = head;
    while(head!=0)
    {
       printf("%d ",temp->data);
       temp = temp->next;
    }
    return 0;
}
