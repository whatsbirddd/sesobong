#include <stdio.h>

int main(void)
{
    int x[3], temp = 0;
    int* ptr,te;
    for (ptr = x; ptr < x + 3; ptr++)
    {
        scanf_s("%d", ptr);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            if (*(x + j) > * (x + j + 1))
            {
                temp = *(x + j);
                *(x + j) = *(x + j + 1);
                *(x + j + 1) = temp;
            }
        }
    }
    printf("%d", *(x + 1));
}