#include <stdio.h>

int main(void)
{
    char c = 'A';
    int i = 0;

    i += c;     // legal
    c = 2 * c - 1;  // semi-legal
    putchar(c);     // lagal
    printf(c);       // illegal

    return 0;
}
