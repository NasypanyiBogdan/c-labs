#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    printf("Input first letter: ");
    scanf(" %c",&c);

    switch (c) {
        case 'c': puts("China"); break;
        case 'i': puts("India"); break;
        case 'j': puts("Japan"); break;
        case 'k': puts("Korea"); break;
        case 'v': puts("Vietnam"); break;

        case 'n': puts("Nile"); break;
        case 'a': puts("Amazon"); break;
        case 'd': puts("Danube"); break;
        case 'm': puts("Mississippi"); break;
        case 'y': puts("Yangtze"); break;

        case 'p': puts("Paris"); break;
        case 'b': puts("Berlin"); break;
        case 'r': puts("Rome"); break;
        case 'l': puts("London"); break;
        case 'w': puts("Warsaw"); break;
        case 'h': puts("Helsinki"); break;

        case 't': puts("Tulip"); break;
        case 's': puts("Sunflower"); break;
        case 'o': puts("Orchid"); break;
        case 'f': puts("Freesia"); break;
        case 'z': puts("Zinnia"); break;

        case 'e': puts("Elm"); break;
        case 'x': puts("Xylosma"); break;
        case 'q': puts("Quince"); break;

        default:
            puts("Error!");
    }

    system("pause");
    return 0;
}
