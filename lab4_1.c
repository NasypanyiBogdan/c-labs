#include <stdio.h>

int main() {
    int a[6], i, sum = 0, count = 0;
    float avg;

    printf("Input 6 integers:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", a[i]);
        if (a[i] != 0) {
            sum += a[i];
            count++;
        }
    }

    if (count > 0) {
        avg = (float)sum / count;
        printf("\nAverage of non-zero elements = %.2f\n", avg);
    } else {
        printf("\nNo non-zero elements\n");
    }

    return 0;
}
