#include <stdio.h>

int main() {

    int n;
    printf("\nTask 5\nInput integer: ");
    scanf("%d", &n);

    if (n > 0) {
        if (n % 5 == 0)
            printf("Positive and multiple of 5\n");
        else
            printf("Positive but not multiple of 5\n");
    } else {
        if (n < -100)
            printf("Negative and less than -100\n");
        else
            printf("Negative but not less than -100\n");
    }

    return 0;
}
