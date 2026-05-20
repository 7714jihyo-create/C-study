#include <stdio.h>

int main() {
	int n;
	printf("번호 입력: ");
	scanf("%d",&n);
	switch (n) {
	case 1:
		printf("1번 입력");
		break;
	case 2:
		printf("2번 입력");
		break;
	case 3:
		printf("3번 입력");
		break;
	default:
		printf("입력 오류");
	}

}
