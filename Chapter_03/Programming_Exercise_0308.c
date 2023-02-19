#include <stdio.h>
int main(void) {
    float cup;
    float cent_heigh;
    printf("Please enter the number of cups: ");
    scanf("%f", &cup);
    printf("%f cup is %f pints\n", cup, cup / 2);
    printf("%f cup is %f ounce\n", cup, cup * 8);
    printf("%f cup is %f ladle\n", cup, cup * 8 *2);
    printf("%f cup is %f teaspoon\n", cup, cup * 8 * 2 * 3);
    return 0;
}