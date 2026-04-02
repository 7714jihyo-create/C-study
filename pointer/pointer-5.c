#include <stdio.h>

int add(int x, int y) {
	int result = x + y;
	return result;
}

void sub(int x, int y) {
	int result = x - y;
	printf("%d\n", result);
}

void arr_prn(int a[],int size) {
	for (int i = 0;i < size;i++) {
		printf("%d ", a[i]);
	}
}

int main() {
	int a=10, b=20;
	int c[5] = { 1,2,3,4,5 };

	printf("%d\n",add(a, b));
	sub(a, b);
	arr_prn(c, 5);

	return 0;
}