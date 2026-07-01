#include <stdio.h>

int main(void)
{
    char c = '\1';  // 1
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf("%d\n", c * i);      // int, 1 * -3 = -3
    printf("%ld\n", s + m);     // long, 2 + 5 = 7
    printf("%f\n", f / c);      // float, 6.5/1 = 6.5
    printf("%e\n", d / s);      // double, 7.5 / 2 = 3.75
    printf("%e\n", f - d);      // double, 6.5 - 7.5 = -1
    printf("%d\n", (int) f);    // int, 6


    return 0;
}
