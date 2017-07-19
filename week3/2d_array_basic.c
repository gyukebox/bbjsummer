#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int array[3][5] = {0};

    int row = sizeof(array) / sizeof(array[0]);
    int column = sizeof(array[0]) / sizeof(int);

    printf("%d\n", sizeof(array)); //전체 배열의 크기
    printf("%d\n", sizeof(array[1])); // 한 줄의 크기
    printf("%d\n", sizeof(array[1][2])); // 한 칸의 크기 = 자료형의 크기

    array[0][0] = 4;
    array[0][1] = 8;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++) 
        {
            printf("[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }

    printf("===============\n");

    for(i = 0; i < column; i++)
    {
        for(j = 0; j < row; j++) 
        {
            printf("[%d][%d]\n", i, j);
        }
    }

    return 0;
}
