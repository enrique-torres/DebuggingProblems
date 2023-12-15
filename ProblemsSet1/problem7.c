/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 7: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {64, 25, 12, 22, 11};
    int size = 5;

    bubbleSort(numbers, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}