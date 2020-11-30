# Linked Project 1.

This project is to practice linking different source files to make *ONLY ONE executable file*

We can make that really easily with the GNU GCC compiler. It should also work for the G++ compiler because "C code" is generally compatible with "C++ Code" (not true in reverse).

## How to link files

It can be done in 1 step or in 2 steps like so.

* **In One Step**
>
gcc source1.c source2.c ... sourceN.c -o compiledFile  # This line compile the source files (without writing the intermediate object files to the filesystem) and then link them together in one executable file.

* **In Two Steps**
>
gcc -c source1.c source2.c ... source3.c  # This makes the Object files (.o)
gcc -o compiledFile objectFile1.o objectFile2.o objectFile3.o  # This line link together the object files in one file
