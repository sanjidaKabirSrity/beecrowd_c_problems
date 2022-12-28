#include "stdio.h"

int main() {
    double R;
    const double PI = 3.14159;
    scanf("%lf", &R);
    printf("VOLUME = %.3f\n", 4/3.0*PI*R*R*R);
    
    return 0;
}