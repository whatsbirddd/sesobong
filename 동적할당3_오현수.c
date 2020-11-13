#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,D;
    double *parr;
    scanf("%d",&N);
    parr=(double *)malloc(sizeof(double)*N);
    int j;
    j=N;
    for(int i=0;i<j;i++)
    {
        scanf("%lf",&parr[i]);
    }
    scanf("%d",&D);
    for(int i=j;i>j-D;i--)
    {
        parr[i]=0;
    }
    parr=(double*)realloc(parr,sizeof(double)*(N-D));
    for(int i=0;i<j-D;i++)
    {
        printf("%lf\n",parr[i]);
    }
    free(parr);
    return 0;
}
