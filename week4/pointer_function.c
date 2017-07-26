#include <stdio.h>

void swap(int *i, int *j);

int main(void)
{
    int a = 10;
    int b = 20;

    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
