#include<stdio.h>
int main()
{
    int A[20]={10,20,30,40,50,60,70,80};
    int N=8, value,ITEM ;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nENTER VALUE AND ITEM:");
    scanf("%d%d",&value,&ITEM);
    int loc;
    for(int i=0;i<N;i++)
    {
        if(A[i]==value)
        {
            loc=i;
            break;
        }
    }
    printf("loc=%d\n",loc);
    for(int i=N-1;i>=loc;i--)
    {
        A[i+1]=A[i];
    }
    A[loc]=ITEM;
    N=N+1;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
   return 0;
}
