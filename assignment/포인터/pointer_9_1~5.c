
#include <stdio.h>

int main()
{
	int x, y, z;
	int* px, * py, * pz, * tmp;
	px = &x, py = &y, pz = &z;
	scanf_s("%d %d %d", &(*px), &(*py), &(*pz));    //'�����Ͱ� ����Ű�� �ش� �޸��� �ּ��� ����'�� �ּҰ�
	tmp = &x;                                       //x�� �ּҸ� tmp�� ����
	px = &z;                                        //z�� �ּҸ� px�� ����
	pz = &y;                                        //y�� �ּҸ� pz�� ����
	py = tmp;                                       //tmp�� ����� x�� �ּҸ� py�� ����
	printf("%d %d %d", *px, *py, *pz);              //���
	return 0;
}

#include <stdio.h>

int main()
{
    char ch[20];                    
    int x = 0;
    for(int i=0;i<20;i++)
    {
        scanf_s("%c", (ch+i));          //scanf�Լ��� ����� ���ڿ��� �޴´�.
        x++;
        if (*(ch + i) == '#')
        {
            x = i - 1;                  //���࿡ #�� ���ٸ� break�� ������ #�� ã�� �������� ���ڿ��� ���̸� x�� �����Ѵ�.
            break;
        }
    } 
    for (x; x >= 0; x--)
    {
        printf("%c", *(ch + x));        //���ڿ��� �������� �������鼭 �� ���ھ� ���
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int ar[50] = { 0 }, N, count = 0;
    int* p;

    scanf_s("%d", &N);
    for (p = ar; p < ar + N; p++)       //ar[0]���� ar[N-1]�迭���� for�� ������
    {
        scanf_s("%d", p);
        if (*p == 0)
        {
            break;                      //���࿡ p�� �Է°��� 0�̶�� �ݺ��� ����
        }
        count++;                        //if���� �� �ɷȴٸ� count�� 1�߰�
    }
    printf("%d", count+1);              //����ϱ�
    return 0;
}



#include <stdio.h>

int main(void)
{
    int x[3], temp = 0;
    int* ptr;
    for (ptr = x; ptr < x + 3; ptr++)           //���� 3���� �Է¹޴´�.
    {
        scanf_s("%d", ptr);
    }
    for (int i = 0; i < 3; i++)                 //swap �˰����� ����Ͽ� �������� ������ �Ѵ�.
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
    printf("%d", *(x + 1));                     //����� �ִ� �迭 ����ϱ�
}


#include <stdio.h>

int main()
{
    int arr[5], rank[5];
    int tmp;
    int* ptr;

    for (int i = 0; i < 5; i++)                 //���ڿ��� ���� arr�迭�� ������ ����� rank�迭�� �޴´�
    {
        scanf_s("%d", (arr + i));
        *(rank + i) = *(arr + i);
    }

    for (int i = 0; i < 5; i++)                 //rank�迭�� ���������� ���ش�. 
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
        
    for (ptr = arr; ptr < arr + 5; ptr++)       //arr�迭�� for������ ���ʴ�� ������.
    {
        for (int i = 0; i < 5; i++)             
        {
            if (*ptr == *(rank + i))            //���࿡ rank�� i��° �迭�� arr�迭�� ���� ���
            {
                printf("%d = r%d ", *ptr, i + 1);//����� ���ְ�
                break;                          //�ȿ� �ִ� �迭�� Ż���Ѵ�.
            }
        }
    }
}
