#include <stdio.h>

int digit(int n) {
	if (n < 10) { //n이 한자리 수이면 그대로 반환
		return n;
	}
	// n의 마지막 자리(n % 10) + 나머지 숫자(n / 10)의 자리수 합
	return (n % 10) + digit(n / 10);
    // (235 % 10) + digit(235 / 10)
    // 5 + digit(23)
    // digit(23) = (23 % 10) + digit(23 / 10)
    // 3 + digit(2)
    // digit(2)
    // 한 자리 수이므로 2
	//5+3+2=10

}
int main() {
	printf("%d", digit(235));

	return 0;
}

	
	
	
