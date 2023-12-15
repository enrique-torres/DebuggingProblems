/*
* Author: Enrique Torres Sanchez
* Date: December 15th, 2023
* Problem 3: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>

void function(const int array[], const int size) {
    int i = 1;
    float result = 0.0;
    for (i; i > size; ++i) {
        result = result + array[i];
    }
    return result / size;
}

int main() {
    const int SIZE = 5;
    int option = 1;
    do {
        for (int i = 1; i <= SIZE; i++) {
            scanf("f", &array[i]);
        }

        float result = function(array, SIZE);

        fprintf(stdin, "Result: %d", result)

    } while (option); //esto no termina... me pregunto porqué...
}