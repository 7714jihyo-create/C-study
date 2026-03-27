#include <stdio.h>

int main() {
	/*int sc1, sc2, sc3;
	int sum;
	double x;

	printf("세 명의 점수 입력: ");
	scanf("%d %d %d", &sc1, &sc2, &sc3);
	
	sum = sc1 + sc2 + sc3;
	x = sum / 3;

	printf("합: %d ", sum);
	printf("평균: %lf\n", x);

	int score[10];
	int su=0;
	double y;

	printf("점수 입력: ");
	for (int i = 0;i < 10;i++) {
	scanf("%d", &score[i]);
		su += score[i];
	}
	y = su / 10.0;
	printf("합계: %d 평균: %lf", sum,y);*/

	int price, money,change,c5000,c1000,c100;
	printf("물건값과 투입금액을 입력하시오: ");
	scanf("%d %d", &price, &money);

	change = money - price;
	c5000 = price / 5000;
	c1000 = (price%5000) / 1000;
	c100 = (price- 5000 * c5000-1000*c1000)/100;

	printf("5천원권: %d\n천원권: %d\n100원: %d\n", c5000, c1000, c100);
	printf("잔돈은 %d원", change);
	return 0;
}