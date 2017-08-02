# Week 4 과제

## 주의사항
이번 주는 문제 수가 적습니다. 이유는 아직 포인터의 기본적인 내용밖에 다루지 않았기 때문입니다. 따라서 문제의 난이도도 별로 높지 않습니다. 하지만 제약사항이 있습니다.

- **모든 문제를 완성**해 오세요. 문제 난이도 안 어렵습니다.
- 문제에서 특별한 지시사항이 있는 경우를 제외하고, **인덱스 표기법을 사용하지 않고** 풀어보세요.

소스 복사 붙여넣기 안 하실 거죠?

## 1. 포인터란?

`int` 형 변수 하나랑, 포인터 변수 하나를 선언해 봅시다. 포인터는 선언한 `int` 형 변수를 가리킵니다.

```c
#include <stdio.h>

int main(void)
{
    int num = 10;
    int *p = &num;
    
    printf("%p\n", p);
    // 1-1. 위의 출력문과 같은 결과를 만들려면?
    
    printf("%d\n", num);
    // 1-2. 위의 출력문과 같은 결과를 만들려면?

    return 0;
}
```

### 1.1, 1.2 포인터를 이용한 참조
위의 코드에서 `printf` 출력문이 두 번 등장했는데, 해당 출력문과 같은 결과를 내지만, 형식을 다르게 해서 출력해보세요 (주석 참고)

### 1.3 포인터로 원본 값 변경
`num` 을 명시적으로 사용하지 않고, `num` 의 값을 5배로 늘려 보세요.

## 2. 포인터와 배열
배열을 하나 만들어 봅시다. 이번에는 `double` 형으로 만들겠습니다.

```c
#include <stdio.h>

int main(void)
{
    double numbers[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    return 0;
}
```

### 2.1 배열을 대표하는 방법
배열 전체를 대표하는 방법은 무엇일까요? 다음 코드를 삽입하고 실행해보세요
```c
printf("%p\n", numbers);
printf("%p\n", &numbers[0]);
printf("%p\n", &numbers[1]);
printf("%p\n", &numbers[2]);
printf("%p\n", &numbers[3]);
printf("%p\n", &numbers[4]);
```
실행을 해보셨다면 다음 빈칸을 채워서 주석으로 코드에 다세요.  
`배열을 대표하는 주소는 배열 원소의 ()번째 주소이다. 배열 원소의 주소는 연속적으로 붙어있는데, 인접한 원소의 주소값의 차이는 () 이다.`

### 2.2 배열의 원소를 가져오는 또 다른 방법
우리는 배열에서 값을 꺼내올 때 항상 이렇게 사용했습니다.  
`printf("%lf\n", numbers[2]);`
바로 인덱스를 사용하는 방법이었죠. 이제는 좀 다르게 해봅시다. 인덱스를 **사용하지 않고** 배열의 원소를 순차적으로 출력해보세요.  

## 3. 포인터의 증가와 감소
포인터는 증가와 감소 연산을 할 수 있습니다. 과연 일반 변수의 증감과는 어떻게 다를지 한번 직접 봅시다.
```c
#include <stdio.h>

int main(void)
{
    int i;
    int *ip;
    double *dp;
    char *cp;
    
    for(i = 0; i < 5; i++)
    {
        printf("ip = %p\n", ip);
        printf("dp = %p\n", dp);
        printf("cp = %p\n", cp);
        
        ip++;
        dp++;
        cp++;
    }
    
    
    return 0;
}
```

아마 셋의 증가량이 다를 것입니다. 과연, 증가량은 무엇에 따라 바뀔까요? 다음 코드도 삽입해봅시다.

```c
printf("%d\n", sizeof(int));
printf("%d\n", sizeof(double));
printf("%d\n", sizeof(char));

printf("%d\n", sizeof(ip));
printf("%d\n", sizeof(dp));
printf("%d\n", sizeof(cp));
```
이제 포인터의 증가 감소가 되는 기준이 무엇인지, 그리고 포인터 자료형의 크기는 얼마인지 알아봤습니다!

## 4. 포인터와 함수
다음 코드를 실행해봅시다.

```c
#include <stdio.h>

void square_array(int arr[], int n);
void square_element(int n);

int main(void)
{
    int numbers[5] = {1, 2, 3, 4, 5};
    int n = sizeof(numbers) / sizeof(int);
    
    for(i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    square_array(numbers, n);
    
    for(i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    square_element(numbers[3]);
    printf("%d\n", numbers[3]);

    return 0;
}

void square_array(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        arr[i] *= arr[i];
    }
}

void square_element(int n)
{
    n *= n;
}
```

### 4.1 값에 의한 호출 vs 참조에 의한 호출
`square_array` 와 `square_element` 는 각각 배열 전체, 그리고 한 원소를 제곱하도록 의도된 함수입니다. 만약 잘 작동하지 않는 함수가 있다면 왜 작동하지 않는지 주석으로 쓰고, 올바르게 고쳐 봅시다.

### 4.2 배열이 함수로 넘어갈 때, 그리고 포인터
`square_array` 의 선언부를 다음과 같이 바꾸고 실행해보세요.
```c
void square_array(int *p, int n);
```
결과는 어떻게 될까요?

### 4.3
위의 코드 중 인덱스 표기법(`[]` 을 사용한 것들) 을 모두 포인터 표기법으로 바꿔보세요.