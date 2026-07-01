#include <stdio.h>

int main(void)
{
    float num1, num2, num3, result;
    char op1, op2;

    printf("Enter and expression: ");
    scanf("%f %c %f %c %f", &num1, &op1, &num2, &op2, &num3);

    // (num1 op1 num2) op2 num3
    switch (op1) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }

    switch (op2) {
        case '+':
            result = result + num3;
            break;
        case '-':
            result = result - num3;
            break;
        case '*':
            result = result * num3;
            break;
        case '/':
            result = result / num3;
            break;
    }

    printf("Value of expression: %.2f\n", result);

    return 0;
}
