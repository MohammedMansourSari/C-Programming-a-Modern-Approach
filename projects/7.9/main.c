#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int hour, minute;
    char clock;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hour, &minute, &clock);
    clock = toupper(clock);

    if (hour == 12 && clock == 'A')
        hour = 0;
    else if (hour != 12 && clock == 'P')
        hour += 12;

    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);

    return 0;
}
