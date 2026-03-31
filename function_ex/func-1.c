#include <stdio.h>  // 표준 입출력 함수 사용을 위한 헤더

// 함수 원형 선언
int Add(int a, int b);        // 두 정수를 더하는 함수
int Input();                  // 사용자로부터 정수를 입력받는 함수
void Result_Print(int val);   // 결과를 출력하는 함수
void Intro();                 // 시작 안내 메시지를 출력하는 함수

int main() {
	int a, b, result;  // 두 입력값과 결과를 저장할 변수

	Intro(); // 프로그램 시작 안내 출력

	a = Input(); // 첫 번째 정수 입력
	b = Input(); // 두 번째 정수 입력

	result = Add(a, b); // 입력받은 두 값을 더하고 결과 저장

	Result_Print(result); // 결과 출력

	return 0; // 프로그램 정상 종료
}

// 프로그램 시작 시 안내 문구 출력 함수
void Intro() {
	printf("***** START *****\n"); // 제목 출력
	printf("두 개의 정수 입력: \n"); // 입력 안내 메시지
}

// 사용자로부터 정수 하나를 입력받아 반환하는 함수
int Input() {
	int input; // 입력값을 저장할 변수
	scanf("%d", &input); // 정수 입력 받기
	return input; // 입력값 반환
}

// 두 정수를 더해서 결과를 반환하는 함수
int Add(int i, int j) { // i와 j는 각각 a, b 값을 전달받음
	return i + j; // 두 수의 합 반환
}

// 결과를 출력하는 함수
void Result_Print(int val) {
	printf("덧셈에 대한 결과 : %d \n", val); // 계산 결과 출력
	printf("***** END *****"); // 종료 메시지 출력
}