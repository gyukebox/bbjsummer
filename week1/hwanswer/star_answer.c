#include <stdio.h>

int main()
{
    int i, j;
    int num;
    scanf("%d", &num);

    // 내려가기
    for(i = num - 1; i > 0; i--)
    {
        for(j = 0; j < 2*num-1; j++)
        {
            if(j >= (num - 1 - i) && j <= (num - 1 + i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    // 올라가기
    for(i = 0; i < num; i++)
    {
        for(j = 0; j < 2*num-1; j++)
        {
            if(j >= (num - 1 - i) && j <= (num - 1 + i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
