#include <stdio.h>

int main() {
	int j, i; //출력하고 싶은 단을 받는 x, 곱하는 수 i

	//printf("출력하고 싶은 단은?: ");
	//scanf("%d", &x);

	/*while (i <= 9) {
		printf("%d * %d = %d ", x, i, x * i);
		i++;
	}*/
	//printf("%d단\n", x);

	//for (i = 1;i <= 9;i++) //i가 1씩 증가, x*1부터 x*9까지 출력
	//{	
	//	printf("%d * %d = %d\n", x, i, x * i);
	//}

	for (i = 2;i < 10;i++) { //단 i, j 반복 끝나면 증가
		printf("%d단\n", i);
		for (j = 1;j < 10;j++) { //곱하는 수 j (1~9)
			printf("%d*%d=%3d\n", i, j, j * i); //3d 세자리 차지 -붙이면 왼쪽정렬
		}
	}

	return 0;
}