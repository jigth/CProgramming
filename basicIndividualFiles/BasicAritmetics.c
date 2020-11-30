#include <stdio.h>

int main(int argc, char *argv[])
{
    int j, k;
    j = 55;
    k = 1231234;
    
    char w = 'w';
    w += 4; // Sums 4 to w, making it the character '{'

    printf("j=%d, k=%d, sum=%d\n", j, k, k+j);
    
    printf("chars fun:\n\n%c\n", w);
    return 0;
}
