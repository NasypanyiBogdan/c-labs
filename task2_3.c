#include <stdio.h>

int main() {
    char c;
    printf("Input first letter: ");
    scanf(" %c", &c);

    switch (c) {
        case 'o': puts("Oak"); break;
        case 'p': puts("Pine"); break;
        case 'b': puts("Birch"); break;
        case 'm': puts("Maple"); break;
        case 's': puts("Spruce"); break;
        case 'f': puts("Fir"); break;
        default: puts("Error!");
    }
    return 0;
}
