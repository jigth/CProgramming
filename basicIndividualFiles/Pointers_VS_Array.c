// It's possible to go forwards and backwards with pointers to chars.
// Thats not possible with char arrays. They're allways starting in the same
// memory address (allocated when the program begins it execution). And cannot
// change the starting point of their memAddress.
#include <stdio.h>

int main(int argc, char *argv[]) {
    int a = 0;

    char *myPtrStr = "This is my Pointer to Char";
    char myArrayStr[] = "This is my Char Array";

    puts("Printing Pointer to Char - Then Array of Chars");
    printf("%s\n%s\n", myPtrStr, myArrayStr);
    
    myPtrStr++;
    printf("Pointer to char incremented by 1: %s\n", myPtrStr);

    myPtrStr += 4;
    printf("Pointer to char incremented by 5: %s\n", myPtrStr);

    myPtrStr -= 3;
    printf("Going back 3 positions with the char pointer: %s\n", myPtrStr);

    return 0;
}
