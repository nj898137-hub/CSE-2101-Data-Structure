#include<stdio.h>
int main()
{
    int A[20]={10,20,30,40,50};
    int N=5,ITEM;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nENTER ITEM:");
    scanf("%d",&ITEM);
    A[N]=ITEM;
    N=N+1;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
