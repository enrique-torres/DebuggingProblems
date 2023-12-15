/*
* Author: Enrique Torres Sanchez
* Date: December 15th, 2023
* Problem 6: Figure out what this code is doing 
* and then fix the bugs and compilation errors that 
* prevent it from working correctly.
*/

#include <stdio.h>

int main() {
    // utilizad el fichero del ejercicio 4 una vez este solucionado
    FILE* f2 = fopen("./file.txt", "rb");
    char thingRead;
    while ((thingRead = fprintf(f2, "%d")) != EOF) {
        fprintf(stdin, "%c", thingRead);
    }
    return 0;
}