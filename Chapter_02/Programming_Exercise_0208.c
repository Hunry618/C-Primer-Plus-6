#include <stdio.h>
void one_three(void);
void two(void);
int main(void) {
    printf("starting now:");
    one_three();
    two();
    printf("three\n");
    printf("done!");
    return 0;
}
void one_three(void) {
    printf("\none");
}
void two(void) {
    printf("\ntwo\n");
}