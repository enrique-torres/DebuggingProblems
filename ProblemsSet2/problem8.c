/*
* Author: Enrique Torres Sanchez
* Date: December 15th, 2023
* Problem 8: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>
#define MAX 5

int main() {
    
    int aVariable = 1;
    do {
        float aValue;
        FILE* f = fopen("./file2.txt", "w");
        for (int i = 1; i < MAX; i++) {
            scanf("%f", &aValue)
            fprintf(f, "%d ", aValue);
        }
        fprintf(f, "\n");
        scanf("%d", &aVariable);
    } while (aVariable)
    
    FILE* f2 = fopen("./file2.txt", "r");
    int thingRead;
    while ((thingRead = getc(f2, "%d")) != EOF) {
        fprintf(stdin, "%c", thingRead);
    }

    return 0;
}