#include <stdio.h>
#include <time.h>


int main(int argc, char *argv[]) {
    printf("Argument Count is: %d\nArgument Variable address is: %p\n", argc, &argv);

    printf("\nNow these are the arguments for the program:\n\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
