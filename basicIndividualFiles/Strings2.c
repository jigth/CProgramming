#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char myStr[20];
    // Copy a string source (second argument) to a string destination (first one)
    strcpy(myStr, "aja!");

    // Works similar to the previous function, but allows to put format there!
    // It overrides the content if the destination string had something.
    sprintf(myStr, "Noooooopee");
    sprintf(myStr, "Nopee Nop%d N%dp", 3, 0);

    // Calculate WRITTEN length of string (not the total memory allocated)
    int myStrLength = strlen(myStr);

    // Print results
    printf("%s\n%d\\nn", myStr, myStrLength);
    printf("Total spaces allocated (in bytes - 1char==1byte): %ld\n", sizeof(myStr));
    printf("Written positions (characters) in the string: %ld\n\n", strlen(myStr));

    // Set N positions of a given string
    
    // Lets clear everything within that string
    memset(myStr, 0, 24);  // Write char 0 (null) in every character.
    printf("'myStr' Is between the following '>' symbols: >%s<\n\n", myStr);

    // Now lets make 10 chars with one character and the last 10 chars with other character
    memset(myStr, 85, 10);
    // Here we calculate the starting memory address of the position #10 in
    // our string. Because we need to start writing in that position.
    // Else we would overrite the 10 positions that we first set
    char * myStrAtIndex10 = myStr + (sizeof(char) * 10);
    memset(myStrAtIndex10, 86, 10);
    printf("String: %s\nLength: %ld\n", myStr, strlen(myStr));

    return 0;
}


