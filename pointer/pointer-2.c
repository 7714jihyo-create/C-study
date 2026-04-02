#include <stdio.h>

int main() {
	int i = 4000;
	int* p = NULL;
	int x = 10, y = 20;
	int* pi; //포인터 변수 pi

	pi = &x; //pi에 x 주소값 저장

	printf("pi=%p\n", pi); //pi가 저장하고 있는 x의 주소 출력
	printf("pi=%d\n\n", *pi); //*pi가 가리키는 x의 값 출력

	pi = &y; //pi에 y 주소값 저장
	printf("pi=%p\n", pi); //pi가 저장하고 있는 y의 주소 출력
	printf("pi=%d\n\n", *pi); //*pi가 가리키는 y의 값 출력

	return 0;
}