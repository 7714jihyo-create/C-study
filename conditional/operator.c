#include <stdio.h>

int main()
{
    int num1, num2; //숫자 num1 num2
    char op,end; //연산자 op, 종료값 end
    int res1; //덧셈 뺄셈 곱셈 계산값 저장하는 res1
    double res2; //나눗셈 계산값 저장하는 res2


    while (1) {
        printf("계산식을 입력하세요: ");
        scanf("%d %c %d", &num1, &op, &num2);

        if (op == '+') {
            res1 = num1 + num2;
        }
        else if (op == '-') {
            res1 = num1 - num2;
        }

        else if (op == '*') {
            res1 = num1 * num2;
        }
        else if (op == '/') {
            res2 = (double)num1 / num2;
        }
        else {
            printf("오류\n");
        }

        if (op == '+' || op == '-' || op == '*') {
            printf("연산 결과: %d\n", res1); //덧셈 곱셈 뺄셈 결과 출력
        }
        else if (op == '/') {
            printf("연산 결과: %.2lf\n", res2); //나눗셈 결과 출력
        }
        else {
            printf("오류");
        }

        printf("종료하시겠습니까?(y/Y): ");
        scanf(" %c", &end);

        if (end == 'y'||end=='Y') {
            break; //사용자가 y 또는 Y를 입력하면 반복문 종료
        }
    }

    return 0;
}