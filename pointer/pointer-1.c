#include <stdio.h>

int main() {
	int i = 10;
	char c = 69;
	float f = 12.3;
	printf("i의 값: %d\n",i); //i의 값 출력
	printf("c의 값: %c\n", c); //c의 값 출력
	printf("f의 값: %f\n", f); //f의 값 출력

	printf("i의 주소: %p\n", &i); //i의 주소 출력
	printf("c의 주소: %p\n", &c); //c의 주소 출력
	printf("f의 주소: %p\n", &f); //f의 주소 출력

	return 0;
}