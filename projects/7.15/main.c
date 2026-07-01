#include <stdio.h>

int main(void)
{
    int num;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--) {
        factorial *= i;
    }

    printf("Factiorial of %d: %d\n", num, factorial);

    return 0;
}
