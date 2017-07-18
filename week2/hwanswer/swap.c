#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    printf("num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
