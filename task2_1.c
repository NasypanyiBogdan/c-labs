#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Input integer number: ");
    scanf("%d", &n);

    if (n % 5 == 0)
        printf("Number is divisible by 5\n");
    else
        printf("Number is NOT divisible by 5\n");

    return 0;
}
