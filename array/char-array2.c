//2array-2.c
#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char fruit[3][20];

    for (i = 0; i < 3; i++) {
        printf("i번째 과일 이름: "); //menu[i]는 행을 의미
        scanf("%s", &fruit[i]);
    }

    printf("%s %s %s", fruit[0], fruit[1], fruit[2]);

    return 0;
}