#include <stdio.h>

int main()
{
	int x, y, z;
	int* px, * py, * pz, * tmp;
	px = &x, py = &y, pz = &z;
	scanf_s("%d %d %d", &x, &y, &z);
	tmp = &x;//x��->tmp
	px = &z;//x��->z��
	pz = &y;//z��->y��
	py = tmp;//tmp(x)��->y��
	printf("%d %d %d", *px, *py, *pz);
	return 0;
}