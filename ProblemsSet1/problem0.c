/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 0: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>
#define SIZE 5

int main() {
    int numbers[SIZE] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < SIZE; ++i) {
        sum += numbers[i]
    }

    double average = sum / SIZE;

    printf("Average: %f\n", average);

    return 0;
}