#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c;

    while ((c = getchar()) != '\n') {
        c = toupper(c);
        switch (c) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(c);
        }
    }
    for (int i = 0; i < 10; i++)
        putchar('!');

    return 0;
}
