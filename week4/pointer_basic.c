#include <stdio.h>

int main(void)
{
    int a = 4;
    int *p = &a;
    // *p = &a;

    printf("a = %d\n", a);
    printf("a의 주소 = %p\n", &a);
    printf("p = %p\n", p);
    printf("p의 주소 = %p\n", &p);
    printf("*p = %d\n", *p);

    return 0;
}
