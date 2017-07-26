#include <stdio.h>

int main(void)
{
    int i;
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", num[5]); // 인덱스 표기 
    printf("%d\n", *(num + 5)); // 포인터 표기

    for(i = 0; i < 10; i++)
    {
        // num[i] = num[i] * 2;
        *(num + i) = *(num + i) * 2;
    }

    for(i = 0; i < 10; i++)
    {
        // printf("%d ", num[i]);
        printf("%d ", *(num + i));
    }
    printf("\n");

    return 0;
}
