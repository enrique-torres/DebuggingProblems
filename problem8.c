/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 8: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>

void generateFibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms = 10;
    generateFibonacci(terms);

    return 0;
}