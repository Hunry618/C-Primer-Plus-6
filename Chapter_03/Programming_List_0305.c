#include <stdio.h>
/*The code number of the display character*/
int main(void) {
    char ch;
    printf("Please enter a character.\n");
    scanf("%c", &ch);  //User input character
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}
