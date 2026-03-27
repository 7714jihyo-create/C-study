#include <stdio.h>

int main() {
	/*int a=1, b=1;

	while (a<=3) {
		b = 1;
		while (b <=3) {
			printf("%d  %d\n", a, b);
			++b;
		}		
		a++;
	}*/

	int i, j;

	for (i = 1;i < 4;i++) {
		for (j = 1;j < 4;j++) {
			printf("%d %d\n", i, j);
		}
		j = 1;
	}

	return 0;
}