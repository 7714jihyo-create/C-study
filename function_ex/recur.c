#include <stdio.h>

int func(int); //함수 선언 추가
int main() {
	int a;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("%d", func(a)); //정수형 a를 매개변수 인자로 보내면서 func 함수 호출하여 받은 결과 출력
}

int func(int a) { //a=매개변수
	if (a <= 1) {
		return 1; //순환호출 멈추는 부분
	}
	return a * func(a - 1); //자기 자신을 순환적으로 호출하다가 결과 반환
}

/*
a=5 5*func(4) = 5*24 = 120
a=4 4*func(3) = 46 = 24
a=3 3*func(2) = 3*2 = 6
a=2 2*func(1) = 2*1 = 2
*/