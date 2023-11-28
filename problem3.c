/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 3: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>

int function(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 5;
    printf("Result of function with parameter %d is: %d\n", num, function(num));

    return 0;
}