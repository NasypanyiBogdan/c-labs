#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    const int N = 3;      
    const int LEN = 100;  
    char strings[N][LEN];

    printf("Enter %d strings:\n", N);

    for (int i = 0; i < N; i++) {
        printf("String %d: ", i + 1);
        fgets(strings[i], LEN, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    printf("\nSearching for first 's' or 'S' in each string:\n");

    for (int i = 0; i < N; i++) {
        char *ptr = strings[i];

        while (*ptr != '\0') {
            if (tolower(*ptr) == 's') {
                printf("String %d: found '%c' at position %ld\n",
                       i + 1, *ptr, ptr - strings[i]);
                break;
            }
            ptr++;
        }

        if (*ptr == '\0') {
            printf("String %d: no 's' or 'S' found\n", i + 1);
        }
    }

    return 0;
}
