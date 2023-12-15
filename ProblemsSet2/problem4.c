/*
* Author: Enrique Torres Sanchez
* Date: December 15th, 2023
* Problem 4: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>
#define SIZE 10

int main() {
    float aValue = 5.0;
    float anotherValue = 10.0;
    float array[SIZE] = {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0}
    FILE* f = fopen("./file.txt", "wb");
    fprintf(f, "%d %d\n", aValue, anotherValue);
    for (int i = 0; i < SIZE + 1; i++) {
        fprintf(f, "%d", array[i]);
    }
    fprintf(f, "\n");

    return 0;
}