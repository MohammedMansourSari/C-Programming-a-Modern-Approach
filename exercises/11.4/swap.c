#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int p = 1, q = 2;
    printf("%d %d\n", p, q);
    swap(&p, &q);
    printf("%d %d\n", p, q);
    return 0;
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
