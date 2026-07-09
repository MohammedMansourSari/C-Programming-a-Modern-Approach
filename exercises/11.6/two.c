#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int a[] = {3, 5, 4, 1, 2};
    int largest = 0, second_largest = 0;
    find_two_largest(a, sizeof(a) / sizeof(a[0]), &largest, &second_largest);
    printf("%d %d\n", largest, second_largest);
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] > *largest)
            *largest = a[i];

    for (i = 0; i < n; i++)
        if (a[i] > *second_largest && a[i] != *largest)
            *second_largest = a[i];
}
