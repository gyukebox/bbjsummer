#include <stdio.h>

void f(int arr[], int size);

int main(void)
{
    int i;
    int array[1000000];
    int array_length = sizeof(array) / sizeof(int);
    // sizeof 는 시간이 드럽게 오래 걸려
    // 변수로 선언해서 한번만 하는걸 추천

    printf("array size = %d\n", array_length);
    f(array, array_length);

    return 0;
}

// 배열을 함수에 전달할 때는 포인터가 되서 넘어간다!
// 그래서, 배열의 크기를 같이 전달

void f(int arr[], int size)
{
    printf("size = %d\n", size);
}
