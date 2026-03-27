#include <stdio.h>

int main() {

	/*int i = 2;
	int sum=0;

	while (i<=100) {
		sum += i;
		printf("%d ", i);
		i += 2;
	}

	printf("\n%d", sum);*/

	int i = 0;
	int num;

	printf("양의 정수 입력: ");
	scanf("%d", &num);

	while (i < num) {
		printf("handman!\n");
		i++;
	}

	return 0;
}