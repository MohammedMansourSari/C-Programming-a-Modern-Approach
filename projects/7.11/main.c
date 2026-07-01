#include <stdio.h>

int main(void)
{
    char c = '\0';
    char initial = '\0';

    printf("Enter a first and last name: ");
    initial = getchar();

    while ((c = getchar()) != ' ')
        ;
    while ((c = getchar()) != '\n')
        putchar(c);
    printf(", %c.", initial);

    return 0;
}
