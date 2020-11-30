#include <stdio.h>

// Potentiation with integers only
int intPowFun(int base, int exponent) {
    int result = 1; 
    while (exponent > 0) {
        result *= base;
        exponent--;
    }
    return result; 
}


int main(int argc, char *argv[]) {
    int (*myFunPointer) (int, int); 

    // The "&" is optional but recommended for legibility
    // It is optional because by default, the name of the function 
    // holds the memory address of that function.
    myFunPointer = &intPowFun;
    printf("The result is: %d\n\nAnd the memory address of the function (in hex) is: %p\n", myFunPointer(2, 10), intPowFun);

    // IMPORTANT: Poiners are generally printed in HEX format (with %p), but
    // it is possible to print them as integers (or long integers) with the
    // symbol %ld.
    return 0;
}
