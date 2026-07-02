#include <stdio.h>

#define N 10

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5, 6};
    int b[100] = {0};
    int c[] = {1, 2, 3};
    int d[15] = {[14] = 48, [9] = 7, [2] = 29};
    int e[] = {[5] = 10, [23] = 13, [11] = 36, [15] = 29};

    for (int i = 0; i <= 15; i++)
        printf("%d ", d[i]);

    return 0;
}
