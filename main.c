#include <stdio.h>

int main(void)
{
    int answer = 59;
    int input;
    int count = 0;

    do
    {
        printf("Guess a number : ");
        scanf("%i", &input);

        count++;

        if (input > answer)
            printf("high!\n");
        else if (input < answer)
            printf("low!\n");

    } while (input != answer);

    printf("Congraturation! Trials: %i\n", count);

    return 0;
}