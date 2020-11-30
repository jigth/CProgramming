#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    int * intPtr;

    // Allocate enough bytes of memory for 3 integers with malloc
    intPtr = (int *) malloc(sizeof(int) * 3);
    intPtr[0] = 12;
    intPtr[1] = 2;
    intPtr[2] = 6;
    
    printf("%d %d %d\n", intPtr[0], intPtr[1], intPtr[2]);
    printf("%p\n", intPtr);
    printf("%p\n", intPtr);

    // Reallocate the memory for intPtr (allocating more space)
    intPtr = (int *) realloc(intPtr, sizeof(int)* 100000000000);
    printf("%d\n", intPtr==NULL);


    // Free the memory allocated by the pointer.
    // If this is not done, the application could EAT A LOT OF MEMORY OF THE PC
    // And generate problems in the machine or application.
    free(intPtr);
    return 0;
}
