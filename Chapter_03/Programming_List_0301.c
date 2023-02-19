#include <stdio.h>
/*--your weight in platinum*/
int main(void) {
    float weight;  //Your weight
    float value;   //Equal weight of platinum value

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");
    //Get the user's input
    scanf("%f", &weight);
    //Let's say the price of platinum is $1,700 an ounce
    //14.5833 is used to convert sterling Troy ounces into Troy ounces
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If paltinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}
