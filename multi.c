#include <stdio.h>

#define N 2

int main() {
    int a[N][N] = {
        {1, 2},
        {3, 4}
        };
    int b[N][N] = {
        {5, 6},
        {7, 8}
        };
    int c[N][N] = {0};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                c[i][j] = c[i][j]+ (a[i][k] * b[k][j]);
                printf("i=%d j=%d k=%d\n",i,j,k);

            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
