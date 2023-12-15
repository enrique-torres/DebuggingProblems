/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 10: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>

void transposeMatrix(int matrix[3][3]) {
    int temp;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    transposeMatrix(matrix);

    printf("Transposed Matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}