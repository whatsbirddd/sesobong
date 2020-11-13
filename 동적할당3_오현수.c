#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,d;
    double *parr;
    scanf("%d %d",&N,&d);
    parr=(double *)malloc(sizeof(double)*N);
    int j;
    j=N;
    for(int i=0;i<j;i++)
    {
        scanf("%lf",&parr[i]);
    }
    for(int i=j;i>j-d;i--)
    {
        parr[i]=0;
    }
    for(int i=0;i<j-d;i++)
    {
        printf("%lf\n",parr[i]);
    }
    return 0;
}