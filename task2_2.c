#include <stdio.h>

int main() {

    int a, b, n;

    printf("Task 1\nInput integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        if (n > 0)
            printf("Even and positive\n");
        else
            printf("Even and not positive\n");
    } else {
        if (n > 25)
            printf("Odd and greater than 25\n");
        else
            printf("Odd and not greater than 25\n");
    }

    printf("\nTask 2\nInput two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        if (a >= 5 && a <= 30)
            printf("Greater number %d is in range 5..30\n", a);
        else
            printf("Greater number %d is out of range\n", a);
    } else {
        if (b >= 5 && b <= 30)
            printf("Greater number %d is in range 5..30\n", b);
        else
            printf("Greater number %d is out of range\n", b);
    }

    printf("\nTask 3\nInput integer: ");
    scanf("%d", &n);

    if (n > 50) {
        if (n % 4 == 0)
            printf("Number > 50 and multiple of 4\n");
        else
            printf("Number > 50 and not multiple of 4\n");
    } else {
        if (n % 3 == 0)
            printf("Number <= 50 and multiple of 3\n");
        else
            printf("Number <= 50 and not multiple of 3\n");
    }

    printf("\nTask 4\nInput two integers: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        if (a % 2 != 0)
            printf("Smaller number %d is odd\n", a);
        else
            printf("Smaller number %d is even\n", a);
    } else {
        if (b % 2 != 0)
            printf("Smaller number %d is odd\n", b);
        else
            printf("Smaller number %d is even\n", b);
    }

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
