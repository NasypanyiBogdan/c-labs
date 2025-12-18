#include <stdio.h>
#include <string.h>

int main() {
    char *p[3] = {
        "Nasypanyi",
        "Bogdan",
        "Victorovich"
    };

    int i, count = 0;

    printf("Strings:\n");
    for (i = 0; i < 3; i++)
        printf("%s (length = %lu)\n", p[i], strlen(p[i]));

    for (i = 0; p[0][i] != '\0'; i++)
        if (p[0][i] == 'o' || p[0][i] == 'O')
            count++;

    printf("\nNumber of letters 'o' in first string = %d\n", count);
    printf("Size of pointer array = %lu bytes\n", sizeof(p));

    return 0;
}
