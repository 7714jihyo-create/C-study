#include <stdio.h> //#-전처리기 stdio.h-입출력 관력 헤더파일
#include <string.h> //문자열 관련 함수 헤더파일

int main() {
	char a[10] = "Hello";
	printf("%s\n", a);
	printf("%c\n", a[0]);

	char b[10];
	strcpy(b, "love"); //문자열 복사 (대상,문자열)
	//b[0] = 'l';
	//b[1] = 'o';
	//b[2] = 'v';
	//b[3] = 'e';
	//b[4] = '\0';
	//b = "love"; 오류

	printf("%s\n", b);

	return 0;
}