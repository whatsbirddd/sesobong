#include <stdio.h>

int main()
{
	int x, y, z;
	int* px, * py, * pz, * tmp;
	px = &x, py = &y, pz = &z;
	scanf_s("%d %d %d", &x, &y, &z);
	tmp = &x;//x값->tmp
	px = &z;//x값->z값
	pz = &y;//z값->y값
	py = tmp;//tmp(x)값->y값
	printf("%d %d %d", *px, *py, *pz);
	return 0;
}