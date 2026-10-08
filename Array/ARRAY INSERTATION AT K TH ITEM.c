#include<stdio.h>
int main()
{
    int A[20]={10,20,30,40,50,60};
    int N=6,ITEM,k;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nENTER K-th (INDEX):");
    scanf("%d",&k);
    printf("\nENTER ITEM:");
    scanf("%d",&ITEM);
    for(int i=N-1;i>=k;i--)
    {
        A[i+1]=A[i];
    }
    A[k]=ITEM;
    N=N+1;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
