/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 4: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>

int main() {
    const int size = 6;
    int numbers[size] = {10, 20, 30, 40, 50, 60};
    int target = 30;
    int index = -1;

    for (int i = 0; i < size; ++i) {
        if (numbers[i] == target) {
            index = i;
            break;
        }
    }

    printf("Index of %d: %d\n", target, index);

    return 0;
}