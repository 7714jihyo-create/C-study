#include <stdio.h>
#include <string.h>

int main() {

	char a[30];
	char b[30];
	int res;

	printf("a의 단어: ");
	scanf("%s", a); //& 주소, 배열명=배열의 첫번째 요소 위치라 & 안 씀
					//배열 요소 하나는 & 붙임
	printf("b의 단어: ");
	scanf("%s", b);


	res=strcmp(a, b);
	//strcmp->아스키코드 기준(=사전순)으로 비교

	if (res < 0) { //반환값 음수 -> 문자열 1이 문자열 2보다 앞에 있음
		printf("%s가 %s보다 앞에 있다",a,b);
	}
	else if (res == 0) { //0이면 같음
		printf("%s와 %s가 같다", a, b);
	}
	else { //반환값 양수 -> 문자열 1이 문자열 2보다 뒤에 있음
		printf("%s가 %s보다 뒤에 있다", a, b);
	}

	return 0;
}