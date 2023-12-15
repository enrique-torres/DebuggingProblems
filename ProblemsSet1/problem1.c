/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 1: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>
#include <string.h>

int main() {
    const char* original = "Debugging";
    char result[20];
    
    int length = strlen(original);

    for (int i = length - 1; i >= 0; --i) {
        result[length - i] = result[i];
    }

    printf("Original: %s\n", original);
    printf("Result: %s\n", result);

    return 0;
}