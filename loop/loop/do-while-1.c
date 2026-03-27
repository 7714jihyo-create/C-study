#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned)time(NULL)); //난수 발생기 시드 생성
	int answer = rand() % 100; //정답 난수로 발생
	//printf("%d\n", answer);
	int guess;
	int t = 0;

	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		t++;
		if (guess > answer) {
			printf("입력한 숫자가 정답보다 높음\n");
		}
		else if (guess < answer) {
			printf("입력한 숫자가 정답보다 낮음\n");
		}
	} while (guess != answer);

	printf("축하합니다 실행 횟수: %d", t);

	return 0;
}