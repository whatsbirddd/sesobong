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

