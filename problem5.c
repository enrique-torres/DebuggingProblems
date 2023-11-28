/*
* Author: Enrique Torres Sanchez
* Date: November 28th, 2023
* Problem 5: Figure out what this code is doing 
* and then fix the bugs that prevent it from working correctly.
*/

#include <stdio.h>
#include <string.h>

void function(const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - i - 1]) {
            printf("%s is not what we are looking for.\n", word);
            return;
        }
    }
    printf("%s is what we are looking for.\n", word);
}

int main() {
    const char* word1 = "level";
    const char* word2 = "beer";
    const char* word3 = "madam";
    const char* word4 = "kayak";

    function(word1);
    function(word2);
    function(word3);
    function(word4);

    return 0;
}