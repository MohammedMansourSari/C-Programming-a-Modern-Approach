#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    long total_sec = 3665;
    int hr, min, sec;

    split_time(total_sec, &hr, &min, &sec);

    printf("%d %d %d\n", hr, min, sec);
    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    total_sec -= *hr * 3600;

    *min = total_sec / 60;
    total_sec -= *min / 60;

    *sec = total_sec;
}
