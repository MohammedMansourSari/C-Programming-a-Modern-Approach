#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("%ld %e %Le\n", LONG_MAX, DBL_MAX, LDBL_MAX);
}
