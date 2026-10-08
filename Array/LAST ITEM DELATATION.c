#include<stdio.h>
int main ()
{
    int A[20]={10,20,30,40,50};
    int N=5;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    N=N-1;
    printf("\nAFTER DELATATION:");
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
