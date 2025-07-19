#include <stdio.h>

int main() {
    int units;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 50)
        bill = units * 2.5;
    else
        bill = 50 * 2.5 + (units - 50) * 4.0;

    printf("Total Bill = %.2f Taka", bill);

    return 0;
}
