#include <stdio.h>

int main(void)
{
    int i;
    int units[10] = {0};
    int num_units = 10;
    int number;
    unsigned int result = 1;

    printf("숫자를 계속 입력하세요. 입력한 숫자를 계속 곱할것입니다. 입력 종료는 -1 입니다.\n");
    while(1)
    {
        scanf("%d", &number);
        if(number == -1)
            break;

        result *= number;
    }

    // 뒤에서부터 끊어준다. 
    while(result > 0)
    {
        units[result % 10]++;
        result /= 10;
    }

    for(i = 0; i < num_units; i++)
    {
        printf("%d ", units[i]);
    }
    printf("\n");

    return 0;
}
