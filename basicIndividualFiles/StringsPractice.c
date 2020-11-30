#include <stdio.h>

int main(int argc, char *argv[]) {
    char msg[] = "Hello World";
    printf("Printing whole message: %s %ld\n", msg, sizeof msg);
    printf("Printing some characters: %c%c\n", msg[0], msg[4]);
    return 0;
}
