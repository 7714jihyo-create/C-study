#include <stdio.h>

int main() {

	//증감연산자
	// ++a -> printf("%d", ++a); a 증가 후에 출력
	// a++ -> printf("%d", a++); a 출력 후에 증가
	// --a -> printf("%d", --a); a 감소 후에 출력
	// a-- -> printf("%d", a--); a 출력 후에 감소

	int a = 10;

	printf("%d\n", a++); //후위 증가 10
	printf("%d\n", ++a); //전위 증가 12
	printf("%d\n", a--); //후위 감소 12
	printf("%d\n", --a); //전위 감소 10

	return 0;
}