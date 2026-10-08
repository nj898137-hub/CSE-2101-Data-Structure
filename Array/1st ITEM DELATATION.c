#include<stdio.h>
int main()
{
    int A[20]={10,20,30,40,50};
    int N=5;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    for(int i=0;i<N-1;i++)
    {
        A[i]=A[i+1];
    }
    N=N-1;
    printf("\n AFTER DELATATION:");
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
