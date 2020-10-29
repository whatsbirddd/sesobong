1-1

#pragma warning(disable:4996)
#include<stdio.h> 
#include<string.h>

int ABC(char a, int n) {//대문자 함수
	char na;
	na = n + a;//대문자에 숫자 더해서
	return na;//반환
}
int abc(char a, int n) {//소문자 함수
	char na;
	na = a - n;//소문자에서 숫자 빼서
	return na;//반환
}
int number(int n) {//숫자 함수
	char na;
	na = 'A' + n - 1;//대문자에서 숫자자리에 해당하는 대문자
	return na;//반환
}
int main() {
	char a[40];//
	int n, i, j, num = 0, sum = 0, len;
	int final = 0;

	scanf("%s", a);//문자열 입력받기
	len = strlen(a);//길이 측정
	scanf("%d", &n);//숫자 입력

	for (i = 0; a[i] != '\0'; i++) {//널 문자 나오기 전까지 반복
		if (a[i] >= 'A' && a[i] <= 'Z') {//대문자이면
			if (num != 0) {//만약 전에 입력받은 게 숫자였다면
				for (j = 0; j < n; j++) {//입력받은 수 만큼
					printf("%c", number(num));//숫자자리에 해당하는 대문자 출력
				}

			}
			printf("%c", ABC(a[i], n));//대문자 출력
			num = 0;//숫자 초기화
			final++;
		}
		else if (a[i] >= 'a' && a[i] <= 'z') {//소문자 면
			if (num != 0) {//만약 전에 입력받은게 숫자였다면
				for (j = 0; j < n; j++) {//입력받은 수 만큼 
					printf("%c", number(num));//숫자자리에 해당하는 대문자 출력
				}
			}
			printf("%c", abc(a[i], n));//소문자 출력
			num = 0;//숫자 초기화
			final++;
		}
		else if (a[i] >= '0' && a[i] <= '9') {//숫자면
			if (num != 0 && num < 10) {//만약 전에 입력받은게 숫자였는데. 10의 자리가 아니면
				num = num * 10 + (a[i] - '0');//기존 num에 10곱하고 더해주기
			}
			else {
				num = a[i] - '0';//아니면 숫자 입력
			}
			final++;//배열 크기 세주기
			if (final == len) {//문자열 배열의 크기와 측정한 배열 크기가 같다면
				for (j = 0; j < n; j++) {
					printf("%c", number(num));//숫자 출력
				}
			}
		}
		else {
			if (num != 0) {
				for (j = 0; j < n; j++) {
					printf("%c", number(num));//숫자 출력
				}
			}
			printf(" ");//공백출력
			num = 0;//초기화
			final++;
		}
	}
