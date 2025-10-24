#include <stdio.h>

int main() {
    int a, b, result;
    char op;
    printf("请输入两个整数和一个运算符（格式：a b op）：");
    scanf("%d %d %c", &a, &b, &op);
    switch (op) {
        case '+':
            result = a + b;
            printf("%d\n", result);
            break;
        case '-':
            result = a - b;
            printf("%d\n", result);
            break;
        case '*':
            result = a * b;
            printf("%d\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("%d\n", result);
            } else {
                printf("除数不能为0\n");
            }
            break;
        default:
            printf("输入运算符无效，请使用+、-、*、/\n");
            break;
    }
    return 0;
}
