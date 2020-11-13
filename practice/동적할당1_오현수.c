#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,sum=0;
    int *pN;
    scanf("%d",&N);
    pN=(int *)malloc(sizeof(int)*N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&pN[i]);
        sum+=pN[i];
    }
    printf("%d",sum);
}