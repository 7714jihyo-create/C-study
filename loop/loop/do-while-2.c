#include <stdio.h>

int main() {

	int i=0;

	printf("1. 새로 만들기 2. 파일 열기 3. 파일 닫기\n하나를 선택하세요: ");
	scanf("%d", &i);

	do {
		printf("1. 새로 만들기 2. 파일 열기 3. 파일 닫기\n하나를 선택하세요: ");
		scanf("%d", &i);
		
	} while (i>3||i<1);

	printf("선택 메뉴는 %d", i);

	return 0;
}