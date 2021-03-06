# Week 2 과제  

---

## 주의사항
- 소스 복사 붙여넣기 X
- 문제를 다 해결 못하더라도 생각한 흔적이 보이게 해올 것! 단순히 `int main() return 0;` 인정X. 본인이 생각한 로직을 주석처리해올 것(물론 문제를 풀면 더 좋음)

---

## 1. 시험 성적 (파일이름 : `score.c`)

철수, 영희 민수는 시험을 봤는데, 이 시험 성적을 효과적으로 저장하고 싶어서 배열을 사용하고자 합니다.

### 1.1 코딩시험
세명은 코딩시험을 보기로 했습니다. 코딩 시험 결과를 저장하기 위해서, 배열 하나를 선언하도록 합시다.
```c
int coding_score[3];
```

#### 1.1.1
여러분들은 이제 코딩 시험 점수를 직접 입력받아서, 이 배열에 저장하시면 됩니다!

#### 1.1.2
이제 시험 점수를 입력받았으니, 세 명의 시험 점수의 총 합과, 평균을 출력하시면 됩니다!

### 1.2 여러 가지 시험
코딩 시험만으로는 부족해서, 적성 검사와 인성 검사를 추가로 치루기로 하였습니다. 사람 한명당 세 개의 시험을 본 꼴인데, 효과적으로 저장하기 위해서 배열을 또 다시 선언해봅시다. 어떤 식으로 선언해야할까요?  
선언하였으면, 각각의 적성 검사 점수랑 인성 검사 점수를 추가로 입력받습니다. 코딩 시험 결과는 있는거 그대로 갖다 쓰시면 됩니다.  

#### 1.2.1 시험당 평균
코딩시험 평균 : 몇점  
적성검사 평균 : 몇점  
인성검사 평균 : 몇점  
이런 형식으로 평균을 구해서 출력하세요

#### 1.2.2 사람당 총점 & 평균  
철수의 총점 : 몇점,  평균 : 몇점  
영희의 총점 : 몇점,  평균 : 몇점  
민수의 총점 : 몇점,  평균 : 몇점  
이런 형식으로 구해서 출력하세요  

---

## 2. 자릿수 빈도 (파일이름 : `frequency.c`)
사용자에게로부터 자연수를 계속 입력받습니다. 여태까지 입력받은 수를 계속 곱하여, 최종 결과값에 각 수가 몇 번씩 나왔는지 출력하는 프로그램을 작성하시오.  
입력의 종료는 -1 로 구분합니다.

예시 : 20 x 42 x 1123 x 46 = 4339270 이므로 0이 1번, 1이 0번, 2가 1번, 3이 2번, 4가 1번, 5가 0번, 6이 0번, 7이 1번, 8이 0번, 9가 1번 나왔다.

오버플로우는 생각하지 마세요!

```
입력 :
20
42
1123
46
-1

출력 :  
1 0 1 2 1 0 0 1 0 1
```

---

## 3. 소수 (파일이름 : `prime.c`)
자연수 n을 입력받습니다. 1부터 n까지의 숫자 중 소수(1이랑 자기 자신으로만 나누어 떨어지는 수) 를 모두 출력하는 프로그램을 작성하세요.  

```
입력 : 50
출력 : 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
```

---

## 4. 정렬 (파일이름 : `sort.c`)
정수 10개를 입력받도록 하겠습니다. 입력받아서, 여태까지 입력받은 숫자를 오름차순(작은것->큰것) 으로 정렬해서 출력하는 프로그램을 작성하세요.

```
입력 :
2
5
9
10
3
1
7
4
8
6

출력 : 1 2 3 4 5 6 7 8 9 10
```
심화) 정렬에는 여러가지 방법이 있습니다. 최대한 많은 방법으로 짜 보세요!

---

## 5. Swap (파일이름 : `swap.c`)

변수 두 개에 들어있는 값을 바꾸는 swap 함수를 작성해보도록 하겠습니다.  
우선 다음 코드를 작성하고 테스트해보세요.  

```c
#include <stdio.h>

void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    printf("a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
```

### 5.1
코드가 잘 작동하나요? 작동하지 않는다면 왜 작동하지 않을지 주석으로 이유를 쓰세요
### 5.2
잘 작동하는 `swap` 함수를 작성하세요

---

## 제출방법 & 기한
- 기한 : 7월 18일 23:59:59
- 제출 이메일 : bisschoi9541@gmail.com
- 모두 하나의 디렉토리에 넣은 후 압축, 압축파일 이름은 `<name>_week2_hw`
- 정답을 7월 19일 0시에 올릴 예정이니 기한초과 0명 가봅시다... 이젠 벌금 안봐줍니다.
