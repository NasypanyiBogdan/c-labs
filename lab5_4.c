#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;
    long *arr;

    printf("Input size of array: ");
    scanf("%d", &n);

    arr = (long*)malloc(n * sizeof(long));
    if (arr == NULL) {
        puts("Memory allocation error");
        return 1;
    }

    srand((unsigned)time(NULL));

    printf("\nArray:\n");
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 10001 - 5000;
        printf("%ld ", arr[i]);
    }

    free(arr);
    return 0;
}
