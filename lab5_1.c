#include <stdio.h>

int main() {
    int a[5][4];
    int i, j;
    int sum[4] = {0};
    printf("Input array 5x4:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    printf("\nArray:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
    for (j = 0; j < 4; j++)
        for (i = 0; i < 5; i++)
            if (a[i][j] > 0 && a[i][j] % 2 != 0)
                sum[j] += a[i][j];

    printf("\nSum of positive odd elements in columns:\n");
    for (j = 0; j < 4; j++)
        printf("Column %d: %d\n", j, sum[j]);

    return 0;
}
