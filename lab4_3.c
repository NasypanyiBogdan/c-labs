#include <stdio.h>

int main() {
    int a[8], i;
    int *p = a;
    int min5;

    a[0] = 500;
    printf("Input 7 integers:\n");
    for (i = 1; i < 8; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", *(p + i));
    }

    min5 = -1;
    for (i = 0; i < 8; i++) {
        if (*(p + i) % 5 == 0) {
            if (min5 == -1 || *(p + i) < min5)
                min5 = *(p + i);
        }
    }

    if (min5 != -1)
        printf("\nMinimum element divisible by 5 = %d\n", min5);
    else
        printf("\nNo elements divisible by 5\n");

    return 0;
}
