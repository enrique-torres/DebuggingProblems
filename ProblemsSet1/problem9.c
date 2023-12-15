/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 9: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>
#include <string.h>

void function(const char* str) {
    int count[256] = {0};
    int length = strlen(str);

    for (int i = 1; i < length + 1; ++i) {
        count[str[i]]++;
    }

    printf("Result:\n");
    for (int i = 0; i < 256; ++i) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int main() {
    const char* text = "debugging";
    function(text);

    return 0;
}