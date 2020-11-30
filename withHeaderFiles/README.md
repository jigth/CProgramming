# Recommendations

## Handling header files:

See the comments of the file "aritmOperations.h" for recommendations about HOW TO HANDLE HEADER FILES

## Examining Preprocessor generated code!

Before the code is compiled by the compiler, there is some preprocessing.

That preprocessing helps eliminating unnecesary things and making the code ready to convert to an executable (leaving only the necessary information).

For example, if a CONSTANT is defined like "#define PI 3.1416". The preprocessor replaces every ocurrence of the name "PI" by the value 3.1416 before proceeding with the compilation of the code.

**There's a useful command to see the output of the preprocessor before it compiles the code:**

>
gcc -E -c sourceFiles1.c 

It also works for multiple files (A.K.A) **linked files**:

>
gcc -E -c sourceFiles1.c <...> sourceFileN.c
