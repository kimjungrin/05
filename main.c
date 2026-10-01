#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("input the calculation : ");
    scanf("%i %c %i", &a, &op, &b);

    if (op == '+')
        printf("%i + %i = %i\n", a, b, a + b);
    else if (op == '-')
        printf("%i - %i = %i\n", a, b, a - b);
    else if (op == '*')
        printf("%i * %i = %i\n", a, b, a * b);
    else if (op == '/')
        printf("%i / %i = %i\n", a, b, a / b);
    else if (op == '%')
        printf("%i %% %i = %i\n", a, b, a % b);

    return 0;
}