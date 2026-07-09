#include <stdio.h>

void pay_amount(int dollars, int *twenty, int *ten, int *five, int *one);

int main(void)
{
    int twenty, ten, five, one;
    pay_amount(93, &twenty, &ten, &five, &one);

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);

    return 0;
}

void pay_amount(int amount, int *twenty, int *ten, int *five, int *one)
{

    *twenty = amount / 20;
    amount -= *twenty * 20;

    *ten = amount / 10;
    amount -= *ten * 10;

    *five = amount / 5;
    amount -= *five * 5;

    *one = amount;
}
