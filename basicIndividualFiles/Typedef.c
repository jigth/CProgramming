#include <stdio.h>

// It's possible to define typedef globally or within an specific function
// That will only affect the ambit in which that typedef is available
// In this case all typedefs are defined globally, but they could belong to
// any function.
typedef char * JAJAJA;

// The main advantaje of using a typedef with structs is that it allows to
// reutilize the initial definition as many times as one wants to use it
// (Like it was an object in OOP but without methods, constructor and more
// OOP's object concepts). It can be imagined as a container of attributes.
typedef struct cellphone_struct {
        int width;
        int heigth;
        char * resolution;
        char * brand;
    } Cellphone;



int main(int argc, char *argv[]) {
    
    int foo = 123;
    JAJAJA jaja = "jajaja";

    printf("%s %d\n\n", jaja, foo);
    
    // Motorla Cellphone
    Cellphone myMotorola;

    myMotorola.width = 5;  // cm
    myMotorola.heigth = 12;  // cm
    myMotorola.resolution = "1080 x 1920 pixels";
    myMotorola.brand = "Motorola";

    printf("myMotorolaWidth: %d\n", myMotorola.width);
    printf("myMotorolaHeight: %d\n", myMotorola.heigth);
    printf("myMotorolaResolution: %s\n", myMotorola.resolution);
    printf("myMotorolaBrand: %s\n", myMotorola.brand);
    
    // Yolo Cellphone
    Cellphone justYolo;
    justYolo.width = 123;
    justYolo.heigth = 1234;
    justYolo.resolution = "5000 x 6000";
    justYolo.brand = "You only live once (justYolo A.B.C)";

    printf("\n");
    printf("justYoloWidth: %d\n", justYolo.width);
    printf("justYoloHeight: %d\n", justYolo.heigth);
    printf("justYoloResolution: %s\n", justYolo.resolution);
    printf("justYoloBrand: %s\n", justYolo.brand);

    return 0;
}
