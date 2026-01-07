#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, i, j;
    int **A, **B, **C;
    printf("Input matrix size: ");
    scanf("%d", &N);
    A = (int**)malloc(N * sizeof(int*));
    B = (int**)malloc(N * sizeof(int*));
    C = (int**)malloc(N * sizeof(int*));
    for (i = 0; i < N; i++) {
        A[i] = (int*)malloc(N * sizeof(int));
        B[i] = (int*)malloc(N * sizeof(int));
        C[i] = (int*)malloc(N * sizeof(int));
    }
    printf("\nInput matrix A:\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &A[i][j]);

    srand((unsigned)time(NULL));
    printf("\nMatrix B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            B[i][j] = rand() % 101 - 50;
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C (max of A and B):\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = (A[i][j] > B[i][j]) ? A[i][j] : B[i][j];
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
