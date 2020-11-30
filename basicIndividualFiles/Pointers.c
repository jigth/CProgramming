#include <stdio.h>
#include <stdbool.h>  // Necessary library to work with bools in 'C language'.

char * getBool(int expression) {
    return expression ? "True" : "False";
}


int main(int argc, char *argv[]) {
    int n = 25;
    int *k;

    // Assign the memory address of n to 'k', which is a pointer variable.
    k = &n;

    printf("*k==n? %s\nk==&n? %s\n\n", getBool(*k==n), getBool(k==&n));

    // Change the content of *k, which is equivalent to modifying the variable
    // 'n' directly. Because here we're changing the value that is hold by 
    // that specific memory address.
    *k = 50;
    printf("*k=%d.\nn=%d\n", *k, n);

    //printf("%ld=%ld\n", n, *k);
    //printf("%ld=%ld!=%ld\n", k, &n, &k);

    return 0;
}
