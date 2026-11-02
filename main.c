#include <stdio.h>

int main(void) {
    /* 課題0404 */
    int x;
    double result;

    scanf("%d", &x);

    result = 1.0 / (x + 100);

    printf("%.15f\n", result);

    return 0;
}