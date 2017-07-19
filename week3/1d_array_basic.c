#include <stdio.h>

int main(void)
{
    int array[5];
    int i;
    int size = sizeof(array) / sizeof(int);

    array[0] = 4;

    printf("%d\n", array[0]);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[0]);
    }

    return 0;
}
