#include <stdio.h>
int main(void) {
     float float_num;
    printf("Enter a floating-point value: ");
    scanf("%f", &float_num);
    printf("fixed-point notation: %f\n", float_num);
    printf("exponential notation: %e\n", float_num);
    printf("p notation: %#0x", float_num);
    return 0;
}