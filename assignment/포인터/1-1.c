#pragma warning(disable:4996)
#include<stdio.h> 
#include<string.h>

int MAX(int *ar) {
	int max = 0,i;
	for (i = 0; *(ar + i) != 0; i++) {
		if (*(ar + i) > max) {
			max = *(ar + i);
		}
	}
	return max;
}

int MIN(int* ar){
	int min = *ar;
	int i;
	for (i = 0; *(ar + i) != 0; i++) {
		if (*(ar + i) < min) {
			min = *(ar + i);
		}
	}
	return min;
}

int main() {
	int n, i, j,count=0;
	int* p, ar[100] = {0};

	scanf("%d", &n);
	for (i = 0; i < n; i++) {

		for (p = ar; p < ar + 100; p++) {
			scanf("%d", p);
			if (*p == 0) {
				break;
			}
		}
		printf("%d %d\n", MAX(ar), MIN(ar));
	}
	
}