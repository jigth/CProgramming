#include <stdio.h>
#include "aritmOperations.h"

int main(int argc, char *argv[]) {
    // Print operations defined within the header file (using macros)
    // With macros it's possible to define NOT ONLY constants
    // #define PI 3.1416
    //
    // But also functions (in a lambda-like notation)
    // #define myFunFunction(a, b, c) (a+b)*c
    printf("%d\n", myFunFunction(2, 3, 5));
    printf("%d\n", mult(3, 4)); 
    printf("%d\n", div(15, 5)); 
    printf("%d\n", sub(15, 5)); 
    printf("%d\n", sum(15, 5)); 
    return 0; 
}
