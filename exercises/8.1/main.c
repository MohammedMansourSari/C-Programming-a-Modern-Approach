#include <stdio.h>

int main(void)
{
    int a[5] = {0};
    printf("%ld\n", sizeof(a)/sizeof(a[0]));
    printf("%ld\n", sizeof(a)/sizeof(int));

    return 0;
}
