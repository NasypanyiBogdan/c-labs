#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[10], i, j, temp;
    srand(time(NULL));

    printf("Original array:\n");
    for (i = 0; i < 10; i++) {
        a[i] = rand() % 81 - 40;
        printf("%4d ", a[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array (descending):\n");
    for (i = 0; i < 10; i++)
        printf("%4d ", a[i]);

    return 0;
}
