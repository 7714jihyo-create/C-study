#include <stdio.h>

int main() {

	char ch;

	printf("문자를 입력하세요: ");
	ch = getchar(); //1글자 입력

	if (ch >= 'A' && ch <= 'Z') //대문자 아스키코드(65-90)로 변경 O
	{
		printf("대문자");
	} 
	else if (ch >= 'a' && ch <= 'z') //소문자 아스키코드(97-122)로 변경O
	{
		printf("소문자");
	}
	else if (ch >= '0' && ch <= '9') {
		printf("숫자");
	}
	else {
		printf("그 외 문자");
	}

	return 0;
}