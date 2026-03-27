#include <stdio.h>

int main() {
	int i,cnt=0; //cnt 변수 선언했으나 사용은 안함

	for (i = 1;i <= 100;i++) {
		if (i % 3 == 0 && i % 7 == 0) //i를 3으로 나눈 나머지와 7로 나눈 나머지가 모두 0이면 i의 값 출력
		{
			printf("%d*", i);
		}
	}


	for (i = 0;i < 10;i++) {
		if (i % 3 == 0) { //i를 3으로 나눈 나머지가 0이면 for문으로 올라감
			continue;
		}
		if (i > 5) { //i가 5이상이면 반복문 종료
			break;
		}
		printf("%d ", i);
	}

	return 0;
}