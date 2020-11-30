// This program uses typedef with structs, which is the requirement in C to make
// structs work like in C++ (posibly instantiate dozens of them! DOZENS!!)
//
// The name are a little bit bizarre just for fun
#include <stdio.h>
#include <time.h>

typedef struct jaja_struct {
    int a;
    int b;
} jaja;

jaja ja = {
    2, 7
};

jaja je = {
    4, 7
};

jaja ji = {
    8, 14
};


// Implementation of "delay" function, which is not part of the standard library
// in C programming language.
void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
} 

// Prints jaja's struct information
void printStruct(jaja* jajaStruct) {
   printf("a=%d, b=%d\n", jajaStruct->a, jajaStruct->b);
}

int main(int argc, char *argv[]) {
    
    // Using delay here, it's possible to modify it and play with processes like:
    // ./Structs2withOneSecondDelay & ./Structs2WithNoDelay &
    // That would print first the content of "Structs2WithNoDelay" even if
    // it was called after the first program. Because both run "in parallel"
    // (as background processes)
    delay(500);
    printStruct(&ja);
    printStruct(&je);
    printStruct(&ji);
    return 0;
}
