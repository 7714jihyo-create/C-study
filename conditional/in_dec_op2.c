#include <stdio.h>

int main() {
	int a, b, c;

	a = 5 % 3; //a=2
	a--; //a=1
	b = (a++) + 3; //b=1+3=4
	//a=2 b=5
	printf("%d %d\n", a, b);
	c = (++a) + 3; //c=3+3=6
	printf("%d %d %d", a, b, c);

	return 0;
}