/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 6: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>

int function(int n) {
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);
    if (function(num)) {
        printf("%d is what we are looking for.\n", num);
    } else {
        printf("%d is not what we are looking for.\n", num);
    }

    return 0;
}