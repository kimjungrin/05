#include <stdio.h>

int main(void)
{
    int number;

    printf("input an integer: ");
    scanf("%i", &number);

    if (number > 0)
        printf("Absolute value is %d!\n", number);
    else
        printf("Absolute value is %d!\n", -number);

    return 0;
}