#include<stdio.h>
int main()
{
    int A[20]={10,20,30,40,50};
    int N=5,ITEM;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nENTER A ITEM:");
    scanf("%d",&ITEM);
    for(int i=N-1;i>=1;i--)
    {
        A[i+1]=A[i];
    }
    A[1]=ITEM;
    N=N+1;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
