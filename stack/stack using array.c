#include<stdio.h>
#define capacity 3
int stack[capacity];
int top=-1;

void push(int x)
{
    if(top<capacity-1)
    {
        top=top+1;
        stack[top]=x;
        printf("successfully added item:%d\n",x);
    }
    else
    {
        printf("stack overflow\n");
    }
}

int pop()
{
    if(top>=0)
    {
        int val=stack[top];
        top=top-1;
        return val;
    }
    printf("stack underflow.\n");
    return -1;
}

int peek()
{
    if(top>=0)
    {
        return stack[top];
    }
    printf("stack is Empty.\n");
    return -1;
}
int main()
{
    printf("my stack code.\n");

    push(10);
    push(20);
    push(30);
    printf("pop item:%d\n",pop());
    push(40);
    printf("Top item:%d",peek());

    return 0;
}
