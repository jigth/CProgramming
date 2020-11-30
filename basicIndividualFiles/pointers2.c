#include <stdio.h>

void foo() {
    puts("foo");  // Another way to print, but without format.
}

int asciiOfChar (char c) {
    return (int)(c);
}

char * justAString(char * str) {
    // TODO: concatenate "str" argument.
    return "justAString";
}

int main(int argc, char * argv[]) {
    // Declare function pointer for "foo" function.
    void (*fooPointer)() = &foo; 
    fooPointer();
    
    // Declare function pointer for "asciiOfChar" function.
    int (*asciiOfCharPointer)(char) = &asciiOfChar;
    printf("%d\n", asciiOfCharPointer('w'));

    // Declare function pointer to "justAString" function.
    char * (*justAStringPointer)(char *) = &justAString;
    printf("%s\n", justAStringPointer("juja"));

    return 0;
}

