#include <stdio.h>

int main()
{
    int i = 10;
    int *p = &i;

    printf("i = %d \n", i);
    printf("&i = %p\n", &i);
    printf("p = %p \n", p);
    printf("*p = %d \n", *p);
    printf("&p = %p\n", &p);

    *p = 20;  // (i = 20) 이랑 같은역할
    printf("i = %d\n", i);

    return 0;
}
