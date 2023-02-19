#include <stdio.h>
int main(void) {
    int age;
    double seconds;
    printf("Please your ages: ");
    scanf("%d", &age);
    seconds = age * 3.156e7; 
    printf("the corresponding seconds is %e\n", seconds);
    return 0;
}