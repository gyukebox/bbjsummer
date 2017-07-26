#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = 1;

    int num[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    // 배열의 차수랑 별의 갯수는 같은거야

    printf("%d\n", num[a][b]);
    printf("%d\n", *(*(num + a) + b));

    return 0;
}
