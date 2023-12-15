/*
* Author: Enrique Torres Sanchez
* Date: December 15th, 2023
* Problem 9: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>
int function(int aParameter) {
    if (aParameter == 1) {
        return 1;
    }
    else {
        return function(aParameter - 1) + function(aParameter + 2);
    }
}

int main() {
    int aVariable;
    scanf("%d", &aVariable);
    int result = function(10);
    fprintf(stderr, "The result is: %d\n", result);

    return 0;
}