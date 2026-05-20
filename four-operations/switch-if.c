#include <stdio.h>

int main()
{
    int num1, num2; //숫자
    char op; //연산자
    int res1; //덧셈 뺄셈 곱셈 계산값
    double res2; //나눗셈 계산값

    printf("계산식을 입력하세요: ");
    scanf("%d %c %d", &num1, &op, &num2);

    //div = (double)num1 / num2;

    switch (op) {
    case '+':
        res1 = num1 + num2;
        //printf("%d", sum);
        break;
    case '-':
        res1 = num1 - num2;
        //printf("%d", sub);
        break;
    case '*':
        res1 = num1 * num2;
        //printf("%d", mul);
        break;
    case '/':
        res2 = (double)num1 / num2;
        //printf("%.2lf", div);
        break;
    default:
        printf("오류");
    }

    if (op == '+' || op == '-' || op == '*') {
        printf("연산 결과: %d", res1);
    }
    else if (op == '/') {
        printf("연산 결과: %.2lf", res2);
    }
    else {
        printf("오류");
    }

    return 0;
}
