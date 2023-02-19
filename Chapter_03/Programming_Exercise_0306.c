#include <stdio.h>
int main(void) {
    double moleculs = 3.0e-23;
    int quarts;
    double number;

    printf("Please enter the number of quarts of water: ");
    scanf("%d", &quarts);
    number = quarts * 950 / moleculs;
    printf("%d quarts water includes %e water molecules\n", quarts, number);
    return 0;
}
