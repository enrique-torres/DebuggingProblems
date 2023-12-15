/*
* Author: Enrique Torres Sanchez
* Date: December 15th, 2023
* Problem 5: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>
#include <string.h>

int main() {
    // utilizad el fichero del ejercicio anterior una vez este solucionado
    FILE* f2 = fopen("./file.txt", "r");
    char thingRead;
    while ((thingRead = fprintf(f2, "%d")) != EOF) {
        fprintf(stdin, "%c", thingRead);
    }

    return 0;
}