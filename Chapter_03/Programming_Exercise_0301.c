#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    //整数上溢
    int max_int = __INT_MAX__;
    printf("%d, %d, %d\n", max_int, max_int+1, max_int+2);

    //整数下溢
    int min_int = INT_MIN;
    printf("%d, %d, %d\n", min_int, min_int-1, min_int-2);

    //浮点数上溢
    float max_float = FLT_MAX;
    printf("%f, %f, %f\n", max_float, max_float * 10, max_float * 100);

    //浮点数下溢
    float min_float = FLT_MIN;
    printf("%f, %f, %f\n", min_float, min_float - 10.0, min_float - 100.0);

    return 0;
}