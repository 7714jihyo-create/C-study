#include <stdio.h>

int main() {
	int x, i = 0, sum = 0;
	printf("숫자 입력: ");
	scanf("%d", &x);

	/*while (i <= x) {
		sum += i;
		i++;
	}

	printf("합: %d", sum);
	*/
	for (i = 0;i <= x;i++) {
		sum += i;
	}
	printf("합: %d", sum);

	return 0;
}