#include <stdio.h>

int main(void)
{
    long n;
    long int i;

        printf("This program prints a table of squares.\n");
        printf("Enter number of entries in table: ");
        scanf("%ld", &n);

        for (i = 1; i <= n; i++)
            printf("%10ld\t%10ld\n", i, i * i);

    return 0;
}
