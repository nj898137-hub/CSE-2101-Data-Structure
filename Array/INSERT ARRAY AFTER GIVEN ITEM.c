#include<stdio.h>
int main()
{
    int A[10]={10,20,30,40,45,50,55,60};
    int N=8,value,ITEM;
    for(int i=0;i<N;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nEnter the VALUE and ITEM:");
    scanf("%d %d",&value,&ITEM);
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
    A[loc+1]=ITEM;
    N=N+1;
    for(int i=0;i<N;i++)
    {
    printf("%d ", A[i]);
    }
    return 0;
}
