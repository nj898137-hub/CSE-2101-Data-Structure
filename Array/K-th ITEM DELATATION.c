#include<stdio.h>
int main ()
{
    int A[20]={10,20,30,40,50};
    int N=5,k;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nENTER K-th ITEM:");
    scanf("%d",&k);
    for(int i=k-1;i<N-1;i++)
    {
        A[i]=A[i+1];
    }
    N=N-1;
    printf("\nAFTER DELATATION:");
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
