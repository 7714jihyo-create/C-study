#include <stdio.h>

int func1();
int func2();

int main() {
	printf("메인 시작\n"); //1
	func1(); //2 함수호출
	printf("메인 끝\n"); //8
	return 0; 
}

int func1() {
	printf("func1 함수 시작\n"); //3
	func2(); //4
	printf("func1 함수 끝\n"); //7
	return 0;
}
int func2() {
	printf("func2 함수 시작\n"); //5
	printf("func2 함수 끝\n"); //6
	return 0;
}