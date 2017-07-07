#include <stdio.h>

int main()
{
    int i;
    int j;
    int number;
    printf("숫자를 입력하세요: ");
    scanf("%d", &number);

    for(i=1; i<=number; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
