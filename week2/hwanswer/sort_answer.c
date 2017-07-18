#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int size = 10;
    int arr[10];
    int num;

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("정렬 전 : ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 오른쪽 값이 작으면 둘을 바꿔주는 방법
    // '버블 소트' 라는 방식, 가장 간단한 sorting 알고리즘
    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("정렬 후 : ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
