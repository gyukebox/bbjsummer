#include <stdio.h>

// 2. 포인터를 활용한다.
// "참조" "reference"

void f(int i)
{
    i = i*2;
}

void g(int *i)
{
    *i = (*i) * 2;
}

int main()
{
    int i = 4;
    f(i);
    printf("%d\n", i);
    g(&i);
    printf("%d\n", i);

    return 0;
}
