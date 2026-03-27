//char-array-1.c

// 문자열의 길이를 구하는 프로그램

#include <stdio.h>
int main(void)
{
    char str[30] = "C language"; //문자 30개짜리 배열에 C language 저장
    int i = 0; //반복문을 위한 변수 i

    while (str[i] != '\0') //NULL 체크
        i++;

    printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i); 
    return 0;
}