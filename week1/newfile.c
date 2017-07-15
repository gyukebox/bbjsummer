#include <stdio.h>

int sum(int i, int j)
{
    return i + j;
}

int main()
{
    int a;
    int b;

    printf("숫자 두 개를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("%d \n", sum(a, b));

    return 0;
}
