#include <stdio.h>

int main() {
    int price, money, change;
    int c5000, c1000, c100, etc;

    printf("물건값과 투입금액을 입력하시오: ");
    scanf("%d %d", &price, &money);

    change = money - price;

    c5000 = change / 5000;
    c1000 = (change % 5000) / 1000;
    c100 = (change % 1000) / 100;
    etc = change % 100;  // 100원 이하 나머지 동전

    printf("5천원권: %d\n", c5000);
    printf("천원권: %d\n", c1000);
    printf("100원: %d\n", c100);
    printf("나머지 잔돈: %d원\n", etc);
    printf("총 잔돈은 %d원\n", change);

    return 0;
}