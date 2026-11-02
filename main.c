#include <stdio.h>

int main(void) {
    /* 課題0404 */
    int x;
    double result;

    scanf("%d", &x);

    /* 100.0 と足すことで double 型として計算させ、オーバーフローを防ぐ */
    result = 1.0 / (x + 100.0);

    printf("%.15f\n", result);

    return 0;
}