#include <stdio.h>

int main() {

	int num, cnt = 0, i;
	printf("원하는 배수 입력: ");
	scanf("%d", &i); //원하는 배수의 숫자 i (3
	printf("배수의 개수 입력: ");
	scanf("%d", &num); //보여지는 배수의 개수 5
	while (cnt++ < num) //cnt=0 < 5 조건->참->cnt 1 증가 후 수행
						//cnt=1 < 5 조건->참->cnt 1 증가 후 수행
						//cnt=2 < 5 조건->참->cnt 1 증가 후 수행
						//cnt=3 < 5 조건->참->cnt 1 증가 후 수행
						//cnt=4 < 5 조건->참->cnt 1 증가 후 수행
						//cnt=5 < 5 조건->거짓, while 종료
	{
		printf("%d ", i * cnt); //3*1=3 - 3*2=6 - 3*3=9 - 3*4=12 - 3*5=15
	}
	return 0;
}