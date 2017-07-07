#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a;
    int b;

    printf("숫자 두 개를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("%d \n", sum(i, j));

    return 0;
}
