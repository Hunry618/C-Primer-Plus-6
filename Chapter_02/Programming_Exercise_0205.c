#include <stdio.h>
void br(void);
void ic(void);
int main() {
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    return 0;
}
void br(void) {
    printf("Brazil, Ressia");
}
void ic(void) {
    printf("India, China");
}