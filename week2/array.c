#include <stdio.h>

int main()
{
    char array[5];

    printf("%u \n", &array[0]);
    printf("%u \n", &array[1]);
    printf("%u \n", &array[2]);
    printf("%u \n", &array[3]);
    printf("%u \n", &array[4]);

    return 0;
}
