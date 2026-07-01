#include <stdio.h>

int main(void)
{
    int i;
    int command;

    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a command: ");
    command = getchar();

    printf("%d %d\n", i, command);
    return 0;
}
