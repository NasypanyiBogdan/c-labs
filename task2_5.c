#include <stdio.h>

int main() {
    int choice;
    printf("1 - Min of 4 real numbers\n");
    printf("2 - Range of larger integer\n");
    printf("3 - Min of 3 integers (even / odd)\n");
    printf("4 - Range of smaller integer\n");
    printf("5 - Max of 4 real numbers (>500 or not)\n");
    printf("Choose(1-5): ");
    scanf("%d", &choice);

    if (choice == 1) {
        float a, b, c, d, min;
        printf("Input four real numbers: ");
        scanf("%f %f %f %f", &a, &b, &c, &d);

        min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        if (d < min) min = d;

        printf("Minimum = %.2f\n", min);
        if (min >= 0)
            puts("Number is positive");
        else
            puts("Number is negative");
    }

    else if (choice == 2) {
        int a, b, max;
        printf("Input two integers: ");
        scanf("%d %d", &a, &b);

        max = (a > b) ? a : b;

        printf("Larger number = %d\n", max);
        if (max < 0)
            puts("Less than 0");
        else if (max <= 50)
            puts("From 0 to 50");
        else if (max <= 100)
            puts("From 51 to 100");
        else
            puts("Greater than 100");
    }

    else if (choice == 3) {
        int a, b, c, min;
        printf("Input three integers: ");
        scanf("%d %d %d", &a, &b, &c);

        min = a;
        if (b < min) min = b;
        if (c < min) min = c;

        printf("Minimum = %d\n", min);
        if (min % 2 == 0)
            puts("Even number");
        else
            puts("Odd number");
    }

    else if (choice == 4) {
        int a, b, min;
        printf("Input two integers: ");
        scanf("%d %d", &a, &b);

        min = (a < b) ? a : b;

        printf("Smaller number = %d\n", min);
        if (min < -100)
            puts("Less than -100");
        else if (min <= 0)
            puts("From -99 to 0");
        else if (min <= 100)
            puts("From 1 to 100");
        else
            puts("Greater than 100");
    }

    else if (choice == 5) {
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
    }

    else {
        puts("Error! Wrong task number.");
    }

    return 0;
}
