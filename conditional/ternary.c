#include <stdio.h>

int main() {

	/*int a, b, max;
	a = 10;
	b = 20;

	max = a > b ? a : b;

	printf("최대: %d", max);*/

	int x;

	printf("입력: ");
	scanf("%d", &x);

	x % 2 == 0 ? printf("짝수") : printf("홀수");
	//(조건)x를 2로 나눈 나머지가 0이면->짝수 출력 : 홀수 출력

	return 0;
}