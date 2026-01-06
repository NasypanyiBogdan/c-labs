#include <stdio.h>

int main() {
    float a, b, c, d, max;

    printf("Input four real numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    printf("Maximum = %.2f\n", max);

    if (max > 500)
        puts("Greater than 500");
    else
        puts("Not greater than 500");

    return 0;
}
