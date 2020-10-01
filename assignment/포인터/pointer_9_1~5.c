
#include <stdio.h>

int main()
{
	int x, y, z;
	int* px, * py, * pz, * tmp;
	px = &x, py = &y, pz = &z;
	scanf_s("%d %d %d", &(*px), &(*py), &(*pz));    //'포인터가 가르키는 해당 메모리의 주소의 변수'의 주소값
	tmp = &x;                                       //x의 주소를 tmp에 저장
	px = &z;                                        //z의 주소를 px에 저장
	pz = &y;                                        //y의 주소를 pz에 저장
	py = tmp;                                       //tmp에 저장된 x의 주소를 py에 저장
	printf("%d %d %d", *px, *py, *pz);              //출력
	return 0;
}

#include <stdio.h>

int main()
{
    char ch[20];                    
    int x = 0;
    for(int i=0;i<20;i++)
    {
        scanf_s("%c", (ch+i));          //scanf함수를 사용해 문자열을 받는다.
        x++;
        if (*(ch + i) == '#')
        {
            x = i - 1;                  //만약에 #이 들어간다면 break로 나오고 #을 찾기 전까지의 문자열의 길이를 x라 정의한다.
            break;
        }
    } 
    for (x; x >= 0; x--)
    {
        printf("%c", *(ch + x));        //문자열의 역순으로 내려오면서 한 문자씩 출력
    }
    return 0;
}


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



#include <stdio.h>

int main(void)
{
    int x[3], temp = 0;
    int* ptr;
    for (ptr = x; ptr < x + 3; ptr++)           //정수 3개를 입력받는다.
    {
        scanf_s("%d", ptr);
    }
    for (int i = 0; i < 3; i++)                 //swap 알고리즘을 사용하여 오름차순 정렬을 한다.
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
    printf("%d", *(x + 1));                     //가운데에 있는 배열 출력하기
}


#include <stdio.h>

int main()
{
    int arr[5], rank[5];
    int tmp;
    int* ptr;

    for (int i = 0; i < 5; i++)                 //문자열을 받을 arr배열과 순위를 기록할 rank배열을 받는다
    {
        scanf_s("%d", (arr + i));
        *(rank + i) = *(arr + i);
    }

    for (int i = 0; i < 5; i++)                 //rank배열은 내림차순을 해준다. 
    {
        for (int j = 0; j < 4; j++)
        {
            if (*(rank + j) < *(rank + j + 1))
            {
                tmp = *(rank + j);
                *(rank + j) = *(rank + j + 1);
                *(rank + j + 1) = tmp;
            }
        }
    }
        
    for (ptr = arr; ptr < arr + 5; ptr++)       //arr배열을 for문에서 차례대로 돌린다.
    {
        for (int i = 0; i < 5; i++)             
        {
            if (*ptr == *(rank + i))            //만약에 rank의 i번째 배열이 arr배열과 같을 경우
            {
                printf("%d = r%d ", *ptr, i + 1);//출력을 해주고
                break;                          //안에 있는 배열을 탈출한다.
            }
        }
    }
}
