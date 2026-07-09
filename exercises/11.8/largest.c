#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *largest, n=5;
    largest = find_largest(a, n);
    printf("%d\n", *largest);

    return 0;
}

int *find_largest(int a[], int n)
{
    int i, largest_index;
    for (i = 0; i < n; i++)
        if (a[i] > a[largest_index])
            largest_index = i;
    return &a[largest_index];
}
