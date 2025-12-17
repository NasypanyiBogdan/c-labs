#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char msg[] = " Consultation will be on Wednesday at the fifth class.";

    printf("Input subject name and teacher surname:\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("\nFirst string: %s", str);
    printf("\nLength = %d\n", strlen(str));

    printf("\nMessage: %s", msg);
    printf("\nLength = %d\n", strlen(msg));

    strcat(str, msg);

    printf("\nResult string:\n%s", str);
    printf("\nTotal length = %d\n", strlen(str));

    return 0;
}
