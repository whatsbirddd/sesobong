#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N,max,tmp;
    float *pN;
    scanf("%f",&N);
    pN=(float *)malloc(sizeof(float)*N);
    int j;
    j=N;
    for(int i=0;i<j;i++)
    {
        scanf("%f",&pN[i]);
    }
    max=pN[0];
    for(int i=0;i<j;i++)
    {
        if(max<pN[i])
        {
            max=pN[i];
        }
    }
    printf("%0.2f",max);
    return 0;
}