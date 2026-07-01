#include <limits.h>
#include <stdio.h>

int main(void)
{
    // the smallest value to cause overflow is
    //  int  : 46341
    //  short: 182
    //  long : 3037000500 (probably)
    printf("%ld\n", LONG_MAX);
    return 0;
}

// 463402147395600
// 2147483647
// 3037000499
