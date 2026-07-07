#include <stdio.h>

void print_count(int t)
{
    printf("T minus %d and counting\n", t);
}

int main(void)
{
    for (int i = 10; i > 0; --i)
        print_count(i);
    return 0;
}
