#include "stdio.h"

int main() {
    double A, B, C, triangle, radius, trapezium, square, rectangle;
    const float pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    triangle = 0.5 * A * C;
    radius = pi * C * C;
    trapezium = 0.5 * (A+B) * C;
    square = B * B;
    rectangle = A * B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle, radius, trapezium, square, rectangle);

    return 0;
}