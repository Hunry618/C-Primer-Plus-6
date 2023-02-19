#include <stdio.h>
int main(void) {
    float inch_heigh;
    float cent_heigh;
    printf("Enter your heigh(inchs): ");
    scanf("%f", &inch_heigh);
    cent_heigh = inch_heigh * 2.54;
    printf("%f inch height is %f centimetre heigh", inch_heigh, cent_heigh);
    return 0;
}