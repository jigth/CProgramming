#include <stdio.h>

int main(int argc, char *argv[]) {
    float pi = 3.1416;
    int k = 500000000;
    long lk = 5000000000000000;
    double myDouble = 50.12312;
    

    printf("size of double: %ld\n", sizeof(double)); 
    printf("My double is: %f\n\n", myDouble); 

    printf("size of float: %ld\n", sizeof(float)); 
    printf("My float is: %f\n\n", pi); 

    printf("size of int: %ld\n", sizeof(int)); 
    printf("My Int is: %d\n\n", k); 

    printf("size of long: %ld\n", sizeof(long int)); 
    printf("My long is: %f\n", 22+23.5); 
}
