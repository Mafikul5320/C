#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 5 == 0 && num % 11 == 0)
        printf("Divisible by both 5 and 11"); //55, 110
    else
        printf("Not divisible by both");

    return 0;
}
