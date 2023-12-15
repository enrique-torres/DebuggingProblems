/*
* Author: Enrique Torres Sanchez
* Date: December 15th, 2023
* Problem 1: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>

void function(int array[], const int aParameter, const int anotherParameter) {
    array[anotherParameter] = aParameter > 0 ? 1 : 0;
}

int main() {
    const int SIZE = 10;
    int array[SIZE];
    int anotherArray[SIZE];

    for (int i = 1; i <= SIZE; i++) {
        scanf("f", &array[i]);
        function(anotherArray, array[i], i);
    }

    return 0;
}