#include <stdio.h>

#define SIZE ((int) (sizeof(fib_numbers) / sizeof(fib_numbers[0])))

int main(void)
{
    int fib_numbers[40] = {[0] = 0, [1] = 1};

    for (int i = 2; i < SIZE; i++) {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }

    for (int i = 0; i < SIZE; i++)
        printf("%d ", fib_numbers[i]);

    return 0;
}
