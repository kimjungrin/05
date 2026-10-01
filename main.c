#include <stdio.h>

int main(void)
{
    int number;

    printf("정수 하나를 입력하세요 : ");
    scanf("%i", &number);

    if (number > 0)
        printf("양수입니다.\n");
    else if (number < 0)
        printf("음수입니다.\n");
    else
        printf("0 입니다.\n");

    return 0;
}
