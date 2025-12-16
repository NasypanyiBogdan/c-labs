#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Input integer number: ");
    scanf("%d", &n);

    if (n > 100)
        printf("Number is greater than 100\n");
    else
        printf("Number is NOT greater than 100\n");

    if (n < 20)
        printf("Number is less than 20\n");
    else
        printf("Number is NOT less than 20\n");

    if (n % 10 == 3 || n % 10 == -3)
        printf("Number ends with 3\n");
    else
        printf("Number does NOT end with 3\n");

    if (n % 10 == 0)
        printf("Number ends with 0\n");
    else
        printf("Number does NOT end with 0\n");

    if (n % 5 == 0)
        printf("Number is divisible by 5\n");
    else
        printf("Number is NOT divisible by 5\n");

    return 0;
}
