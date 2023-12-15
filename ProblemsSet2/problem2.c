/*
* Author: Enrique Torres Sanchez
* Date: December 15th, 2023
* Problem 2: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>

#define SIZE 10

int main() {
    float matrix[SIZE/2][SIZE/2];
    for (int i = 1; i < SIZE/2; i++) {
        // aqui falta algo...
        scanf("%f", &matrix[i][i]);
    }

    for (int j = 0; j <= SIZE/2; j++) {
        // aqui falta algo...
        printf("(%d, %d): %f", j, j, matrix[j][j]);
    }

    return 0;
}