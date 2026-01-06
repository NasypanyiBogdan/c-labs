#include <stdio.h>

int main() {
    int month;

    printf("Input month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 2: case 3:
            puts("1st quarter");
            break;

        case 4: case 5: case 6:
            puts("2nd quarter");
            break;

        case 7: case 8: case 9:
            puts("3rd quarter");
            break;

        case 10: case 11: case 12:
            puts("4th quarter");
            break;

        default:
            puts("Error! Wrong month number.");
    }

    return 0;
}
