#include <stdio.h>

int count_even(int a[]);
void print_cnt(int a);

int main() {
	int ar[10];
	int result;
	printf("숫자 열 개 입력: ");
	for (int i = 0;i < 10;i++) {
		scanf("%d", &ar[i]);
	}
	result = count_even(ar);
	print_cnt(result);
	

	return 0;
}
int count_even(int a[]) {
	int count = 0;

	for (int i = 0;i < 10;i++) {
		if (a[i] % 2 == 0) {
			count++;
		}
	}

	return count;
}

void print_cnt(int a) {
	printf("짝수는 %d개", a);
}