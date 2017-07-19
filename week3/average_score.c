#include <stdio.h>

int main(void)
{
    int i;
    int scores[5];
    int size = 5;
    int sum = 0;

    for(i = 0; i < size; i++)
    {
        scanf("%d", &scores[i]);
    }

    for(i = 0; i < size; i++)
    {
        if(scores[i] < 40)
            scores[i] = 40;

        sum += scores[i];
    }

    printf("%d\n", sum / 5);

    return 0;
}
