#include <stdio.h>

// EXPLICIT! Declaration of functions that will be used later.
char * bark();
char * meow();

int main(int argc, char *argv[]) {
    bark();
    meow();
    meow();
    bark();
    bark();
    return 0;
}
