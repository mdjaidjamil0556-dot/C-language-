#include <stdio.h>

int main() {

    int matrix[3][3], sparse[10][3];
    int k = 1;

    printf("Enter matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    sparse[0][0] = 3;
    sparse[0][1] = 3;
    sparse[0][2] = k - 1;

    printf("Sparse Matrix:\n");

    for (int i = 0; i < k; i++) {
        printf("%d %d %d\n",
               sparse[i][0],
               sparse[i][1],
               sparse[i][2]);
    }

    return 0;
}