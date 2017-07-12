#include <stdio.h>

int main(void)
{
    int number;
    int units_sum = 0;
    printf("숫자를 입력하세요 ");
    scanf("%d", &number);

    while(number > 0)
    {
        units_sum = units_sum + (number % 10);
        number = number / 10;
    }

    printf("모든 자릿수의 합: %d\n", units_sum);

    return 0;
}
