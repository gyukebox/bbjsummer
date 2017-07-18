#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int prime[100]; // 여태까지 구한 소수들을 모아둘 배열
    int number;
    int is_prime;
    int num_prime;

    scanf("%d", &number);

    // 2는 유일한 짝수 소수니깐 추가
    prime[0] = 2;
    num_prime = 1;

    // 짝수는 소수가 될 일이 없으므로 3부터 시작해서 2씩 증가
    for(i = 3; i <= number; i += 2)
    {
        is_prime = 1;

        // 여태까지 나온 소수들로 다 나눠준다
        // 한번이라도 나누어 떨어지면 소수가 아닌 셈
        for(j = 0; j < num_prime; j++)
        {
            if(i % prime[j] == 0)
            {
                is_prime = 0;
                break;
            }
        }

        // 소수로 판별한 수를 배열에 추가해준다
        if(is_prime == 1)
        {
            prime[num_prime] = i;
            num_prime++;
        }
    }

    printf("%d 까지의 소수 : ", number);
    for(i = 0; i < num_prime; i++)
    {
        printf("%d ", prime[i]);
    }
    printf("\n");

    return 0;
}
