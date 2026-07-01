#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int sum = 0;
    char c = '\0';

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                sum += 1;
                break;
        }
    }

    printf("Your sentence contains %d vowels.\n", sum);
    return 0;
}
