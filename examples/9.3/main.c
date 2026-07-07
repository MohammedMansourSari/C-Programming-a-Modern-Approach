#include <stdio.h>

void update(int a[])
{
    a[0] = 15;
}

int main(void)
{
    int a[10] = {1};
    printf("%d\n", a[0]);
    update(a);
    printf("%d\n", a[0]);
    return 0;
}
