#include <stdio.h>

int main()
{
    int num;
    int i;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    printf("%d의 약수는: ", num);
    for(i = 1; i <= num; i++) 
    {
        if(num % i == 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
