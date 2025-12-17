#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[15], i, count = 0;
    srand(time(NULL));

    printf("Array:\n");
    for (i = 0; i < 15; i++) {
        a[i] = rand() % 81 - 40;
        printf("%4d ", a[i]);
        if (a[i] < 0)
            count++;
    }

    printf("\nNumber of negative elements = %d\n", count);
    return 0;
}
