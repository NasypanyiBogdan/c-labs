#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float a[5][4];
    int i, j, count = 0;

    srand((unsigned)time(NULL));

    printf("Array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            *(*(a + i) + j) = 10.5f + (float)rand() / RAND_MAX * 20.0f;
            printf("%8.2f", a[i][j]);
            if (a[i][j] > 15.5f)
                count++;
        }
        printf("\n");
    }

    printf("\nCount of elements > 15.5 = %d\n", count);
    return 0;
}
