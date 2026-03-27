#include <stdio.h>

int main() {
	int i, j; //단수 i 곱하는 수 j

	//이중for문 안에 있는 for문 돌고 밖에 있는 for문 실행
	for (i = 1;i < 13;i+=3) {
		printf("%5d단\t\t %5d단\t %5d단\n", i, i + 1,i+2); //3단씩 한 줄에 출력
		for (j = 1;j < 10;j++) {
			printf("%d * %d = %3d\t", i, j, j * i); //1 4 7 10 단
			printf("%d * %d = %3d\t", i+1, j, j * (i+1)); //2 5 8 11단
			printf("%d * %d = %3d\t\n", i+2, j, j * (i+2)); //3 6 9 12단
		}
	}
	return 0;
}