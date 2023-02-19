#include <stdio.h>
/*Print the decimal number 100 in decimal, octal, and hexadecimal*/
int main(void) {
    int x =100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

/*The value of the int exceeds the maximum value allowed by the system*/
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d\n",i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);
    return 0;
}