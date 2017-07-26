#include <stdio.h>

int main(void)
{
    double *p;

    printf("%u\n", p);

    p = p-3;
    // 포인터의 증가 감소는 무조건 1씩 하는게 아니라 자료형의 크기만큼

    printf("%u\n", p);

    return 0;
}
