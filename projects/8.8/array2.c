#include <stdio.h>

int main(void)
{
    int array[5][5], row_sum[5] = {0}, col_sum[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i+1);
        for (int j = 0; j < 5; j++)
            scanf("%d", &array[i][j]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            row_sum[i] += array[i][j];
    }

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++)
            col_sum[j] += array[i][j];
    }

    printf("Row totals:");
    for (int i = 0; i < 5; i++)
        printf(" %d", row_sum[i]);
    printf("\n");

    printf("Col totals:");
    for (int i = 0; i < 5; i++)
        printf(" %d", col_sum[i]);
    printf("\n");

    return 0;
}
