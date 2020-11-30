#include <stdio.h>

// This is a "Forward decoration". It works by declaring a function on top
// that will be used in another part of the code (bellow).
//
// With the gcc compiler that i'm using right now (version 9.3.0) it's not required.
// But with the g++ compiler (version 9.3.0) it IS REQUIRED for the code to
// compile the function defined bellow (line 58 to the end of the file)
int strArrayLength(char * stringsArray[]);

int main(int argc, char *argv[]) {
    int intArray[8] = { 1, 2, 3, 4, 5, 11, 12, 2 };
    
    // In 'C programming language' there's no built in method to calculate the
    // length of an array. So it must be calculated by some formula.
    // 
    // Here we used the sizeof operator which works pretty well because
    // an array contains the same type of elements, and when we're working
    // with a type, it has the same size in the memory.
    //
    // For example: If we're working with integers, that has 8 bytes.
    // If we're working with a char, that has 1 byte. And so on.
    //
    // The next formula (which is commented) is a generic formula to calculate
    // the length of an array of ints. In order to adapt it to other types
    // it would be necessary to change the type 'int' of the second sizeof 
    // function to the type that we would be working with.
    //
    // printf("%ld\n", sizeof(intArray)/sizeof(int));
    
    // Print all integers within the integer array
    printf("Printing all the numbers within the int array...\n\n");
    for (int i = 0; i < sizeof(intArray)/sizeof(int); i++) {
        printf("%d\n", intArray[i]);
    }

    // Initialization of strings array (represented as an array of char
    // pointers).
    char * stringsArray[] = { "arsdf", "Julia", "Daniela", "Donna", "Manuela", "Tzeu",
                                NULL };

    // Print the whole stringsArray
    printf("\nPrinting all the strings within the string's array...\n\n");
    int i = 0;
    while (stringsArray[i] != NULL) {
        printf("%s\n", stringsArray[i]);
        i++;
    }
    
    printf("\n\n\n%d\n", strArrayLength(stringsArray));

    return 0;
}

// This function prints the length of an array of strings.
// The last element of the array (which should be NULL for this function to
// work properly) is not counted.
int strArrayLength(char * stringsArray[]) {
    int i = 0;
    while (stringsArray[i] != NULL) {
        printf("%s\n", stringsArray[i]);
        i++;
    }
    return i;
}
