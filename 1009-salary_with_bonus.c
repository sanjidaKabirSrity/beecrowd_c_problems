#include "stdio.h"

int main() {
    char name[30] = {};
    scanf("%s", name);
    double sellers_salary, total_sold;
    scanf("%lf\n%lf", &sellers_salary, &total_sold);
    printf("TOTAL = R$ %.2lf\n", (total_sold * ((float)15 / 100)) + sellers_salary);
    return 0;
} 