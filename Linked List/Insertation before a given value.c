#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head=NULL;
    struct Node *newNode, *PTR, *PREV;
    // Create first node
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
    // Create second node
    PTR = (struct Node *)malloc(sizeof(struct Node));
    PTR->data = 20;
    PTR->next = NULL;
    head->next = PTR;
    // Create third node
   PTR->next = (struct Node *)malloc(sizeof(struct Node));
   PTR = PTR->next;
   PTR->data = 30;
   PTR->next = NULL;
   // Insert before a given value (20)
   int givenValue = 20;
   newNode =(struct Node *)malloc(sizeof(struct Node));
   newNode->data = 15;
   newNode->next = NULL;
   PTR=head;
   PREV=NULL;
   while(PTR !=NULL && PTR->data !=givenValue)
   {
       PREV=PTR;
       PTR=PTR->next;
   }
   if(PTR !=NULL)
   {
       newNode->next=PTR;
       PREV->next=newNode;
   }
   //display the linked list
   PTR=head;
   while(PTR!=NULL)
   {
       printf("%d->", PTR->data);
       PTR=PTR->next;
   }
   printf("NULL");
   return 0;

}
