#include <stdio.h>

int main()
{
    int ar[50] = { 0 }, N, count = 0;       
    int* p;

    scanf_s("%d", &N);
    for (p = ar; p < ar + N; p++)       //ar[0]부터 ar[N-1]배열까지 for문 돌리기
    {
        scanf_s("%d", p);               
        if (*p == 0)
        {
            break;                      //만약에 p의 입력값이 0이라면 반복문 중지
        }
        count++;                        //if문에 안 걸렸다면 count에 1추가
    }
    printf("%d", count+1);              //출력하기
    return 0;
}

