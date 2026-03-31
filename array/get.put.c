#include <stdio.h>
#include <string.h>

int main() {
	//getchar(): 하나의 문자를 받아서 반환한다
	//putchar(): 하나의 문자를 받아서 출력한다
	//gets(): 하나의 문자열을 읽어서 문자배열을 추력한다
	//puts(): 문자배열에 저장되어있는 한 줄의 문자열을 출력한다
	char ch;
	printf("문자 한 개 입력: ");
	ch = getchar();

	printf("입력한 문자: ");
	putchar(ch);
	printf("\n");
	
	//ch = getchar();

	while (getchar() != '\n');
	char name[50];
	char address[100];

	printf("\n이름을 입력하시오: ");
	gets(name);

	printf("현재 거주하는 주소를 입력하시오: ");
	gets(address);

	puts(name);
	puts(address);

	return 0;

}