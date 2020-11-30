#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    // Open a file (create it if doesn't exists) in Write Mode.
    // With user permissions for Read-Only permissions.
    // For more info, read "open" GNU-Linux manpage.
    int fileDescriptor = open("myNewFile.md", O_CREAT | O_RDONLY, 0600);
    printf("%d\n", fileDescriptor); 

    // Close file
    close(fileDescriptor); 

    // Write to a file (overriding its contents, Append mode is NOT USED)
    fileDescriptor = open("myNewFile.md", O_CREAT | O_RDWR, 0600);
    char writeBuffer[] = "This is a new very cool, very nice well, very nice good line!!\n";
    write(fileDescriptor, &writeBuffer, sizeof(writeBuffer));
    close(fileDescriptor);

    // Read from file
    char readBuffer[1000];  // Buffer able to read a line with up to 1000 chars!
    fileDescriptor = open("myNewFile.md", O_CREAT | O_RDWR, 0600);
    read(fileDescriptor, readBuffer, sizeof(readBuffer)); 
    close(fileDescriptor);

    printf("%s", readBuffer);
    printf("%s", readBuffer);
    printf("%s", readBuffer);
    return 0;
}
