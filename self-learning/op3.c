#include <stdio.h>
// 삼항연산자
int main() {

	int a = 10, b = 20;
	int max;

	max = a > b ? a : b; //a가 b보다 크면 max=a, 그렇지 않으면 max=b
	printf("%d",max);
}
