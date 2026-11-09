#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node*top=NULL;

void push(int x)
{
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    printf("added item:%d\n",x);
}
void pop()
{
    if(top==NULL)
    {
        printf("stact underflow.\n");
    }
    else
    {
        struct Node *temp;
        temp=top;
        printf("deleted item:%d\n",top->data);
        top=top->next;
        free(temp);
    }
}
int peek()
{
    if(top==NULL)
    {
        printf("stact is empty.\n");
    }
    else
    {
        printf("top item:%d\n",top->data);
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    peek();
    pop();
    peek();

}
