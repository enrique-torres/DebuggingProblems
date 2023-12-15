/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 2: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i <= size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numbers[] = {10, 25, 30, 40, 50, 60};
    int size = 6;
    int target = 40;

    int result = linearSearch(numbers, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}