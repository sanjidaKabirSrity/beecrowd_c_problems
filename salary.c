#include "stdio.h"

int main() {
    int number, work_hours_amount;
    float per_work_hour;
    scanf("%d\n%d\n%f", &number, &work_hours_amount, &per_work_hour);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, work_hours_amount*per_work_hour);
    return 0;
}