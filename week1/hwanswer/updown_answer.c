#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess;
    int target;
    srand((unsigned)time(NULL));
    target = rand() % 100 + 1;

    while(1)
    {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);
        if(guess > target)
        {
            printf("DOWN\n\n");
        }
        else if(guess < target)
        {
            printf("UP\n\n");
        }
        else
        {
            printf("딩동댕! \n\n");
            break;
        }
    }


    return 0;
}
