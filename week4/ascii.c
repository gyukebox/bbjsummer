#include <stdio.h>

int main(void)
{
    int i;
    char str[10] = "abcABC123";
    
    for(i = 0; i < 10; i++)
    {
        printf("%d ", str[i]);
    }
    printf("\n");


    return 0;
}
