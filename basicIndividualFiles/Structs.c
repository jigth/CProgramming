#include <stdio.h>

int main(int argc, char *argv[]) {
    struct {
        int width;
        int heigth;
        char * resolution;
        char * brand;
    } Cellphone;

    Cellphone.width = 5;  // cm
    Cellphone.heigth = 12;  // cm
    Cellphone.resolution = "1080 x 1920 pixels";
    Cellphone.brand = "Motorola";

    printf("CellphoneWidth: %d\n", Cellphone.width);
    printf("CellphoneHeight: %d\n", Cellphone.heigth);
    printf("CellphoneResolution: %s\n", Cellphone.resolution);
    printf("CellphoneBrand: %s\n", Cellphone.brand);


    return 0;
}
