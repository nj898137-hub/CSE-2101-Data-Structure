#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
int main()
{
    struct Node*head=NULL;
    struct Node*newnode,*ptr;
    //create 1st node
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=10;
    head->next=NULL;
    //create 2nd node
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=20;
    ptr->next=NULL;
    head->next=ptr;
    //insertation after a given value(20)
    newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=30;
    newnode->next=ptr->next;
    ptr->next=newnode;
    //display lincke list
    ptr=head;
    while(ptr !=NULL)
    {
        printf("%d->", ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
    return 0;
}
