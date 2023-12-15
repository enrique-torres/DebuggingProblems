/*
* Author: Enrique Torres Sanchez
* Date: December 15th, 2023
* Problem 7: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>

void function(const int array[], const int size, int result) {
    result = 0;
    for (int i = 0; i <= size; i++) {
        result = result * array[i];
    }
}

int main() {
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result;

    function2(array, SIZE, result);
    fprintf(stderr, "%d", result);
    
    return 0;
}