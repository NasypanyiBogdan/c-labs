#include <stdio.h>

int main() {
    int choice, n;

    printf("1 - Semester by month\n");
    printf("2 - Number of classes by weekday\n");
    printf("3 - Season by month\n");
    printf("4 - Working day / Weekend\n");
    printf("5 - Quarter by month\n");
    printf("Choose option (1-5): ");
    scanf("%d", &choice);

    switch (choice) {

    case 1:
        printf("Input month number (1-12): ");
        scanf("%d", &n);

        switch (n) {
            case 9: case 10: case 11: case 12:
                puts("Autumn semester"); break;
            case 2: case 3: case 4: case 5:
                puts("Spring semester"); break;
            case 1: case 6: case 7: case 8:
                puts("Holidays"); break;
            default:
                puts("Error");
        }
        break;

    case 2:
        printf("Input weekday number(chyselʹnyk) (1-7): ");
        scanf("%d", &n);

        switch (n) {
            case 1: puts("3 classes"); break;
            case 2: puts("4 classes"); break;
            case 3: puts("1 classes"); break;
            case 4: puts("2 classes"); break;
            case 5: puts("2 classes"); break;
            case 6: puts("weekend"); break;
            case 7: puts("weekend"); break;
            default: puts("Error");
        }
        break;

    case 3:
        printf("Input month number (1-12): ");
        scanf("%d", &n);

        switch (n) {
            case 3: case 4: case 5:
                puts("Spring"); break;
            case 6: case 7: case 8:
                puts("Summer"); break;
            case 9: case 10: case 11:
                puts("Autumn"); break;
            case 12: case 1: case 2:
                puts("Winter"); break;
            default:
                puts("Error(only 12 month)");
        }
        break;

    case 4:
        printf("Input weekday number (1-7): ");
        scanf("%d", &n);

        switch (n) {
            case 1: case 2: case 3: case 4: case 5:
                puts("Studing day"); break;
            case 6:
                puts("Saturday"); break;
            case 7:
                puts("Sunday"); break;
            default:
                puts("Error(1-7)");
        }
        break;

    case 5:
        printf("Input month number (1-12): ");
        scanf("%d", &n);

        switch (n) {
            case 1: case 2: case 3:
                puts("1st quarter"); break;
            case 4: case 5: case 6:
                puts("2nd quarter"); break;
            case 7: case 8: case 9:
                puts("3rd quarter"); break;
            case 10: case 11: case 12:
                puts("4th quarter"); break;
            default:
                puts("95th quarter");
        }
        break;

    default:
        puts("wrooooooong, I said from 1 to 5");
    }

    return 0;
}
