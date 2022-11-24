#include "stdio.h"

int main() {
    float A, B, C;
    scanf("%f\n%f\n%f", &A, &B, &C);
    printf("MEDIA = %.1f\n", (A*2 + B*3 + C*5)/(2 + 3 + 5));
    return 0;
}