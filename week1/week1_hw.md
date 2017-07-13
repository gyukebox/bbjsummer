# Week 1 과제

---

# 1. Vimtutor
vimtutor 완료 후, `esc` 를 누르고(일반 모드 상태에서)
`:w vimtutor_<이름>.txt` 로 저장하기
예시) `vimtutor_최병규.txt` 같이 파일이 생성 되야 함

#### Vimtutor 실행법
터미널의 아무 디렉토리에서나 `vimtutor` 명령어를 실행

---

# 2. Baekjoon Online Judge 회원가입
www.acmicpic.net 
회원가입 후, 회원 정보 스크린샷 (아래 사진처럼) (상단 메뉴 아이디 클릭)
![example screenshot](/Users/gyukebox/Desktop/example.png)

---

# 3. 약수 찾기
숫자를 하나 입력하면, 그 수의 모든 약수를 출력하는 프로그램을 작성하시오
파일 이름 : `week1_div.c`

예시)
```c
입력 : 24
출력 : 1 2 3 4 6 8 12 24
```

---

# 4. 삼각형
좌표값을 입력받아서, 좌표로 삼각형을 만들 수 있으면 YES, 아니면 NO를 출력하는 프로그램을 작성하시오 (좌표는 정수입니다)
파일 이름 : `week1_triangle.c`

예시)
```c
입력 : 4 5
      4 7
      8 9
출력 : YES

입력 : 4 5
      4 7
      4 9
출력 : NO
```

---

# 5. 자릿수의 합
정수를 하나 입력받아서, 자릿수의 합을 출력하는 프로그램을 작성하시오
파일 이름 : `week1_units.c`

예시)
```c
입력 : 123456
출력 : 21
```

---

# 6. 어려운 별찍기
숫자를 하나 입력받으면, 다음과 같이 모래시계 형태로 출력하는 프로그램을 작성하시오
파일 이름 : `week1_star.c`

예시)
```
입력 : 5
출력 : 
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
```

---

# 7. Up & Down  게임
술게임으로 유명한 up/down 게임을 코딩해 봅시다!
게임을 실행하면 이런 식으로 진행될 것입니다

```
숫자를 입력하세요: 50
UP
숫자를 입력하세요: 75
DOWN
숫자를 입력하세요: 60
UP
숫자를 입력하세요: 66
"딩동댕!"
```

---

### 우선 다음의 코드를 쓰신 후, 
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int target; // 맞춰야 하는 번호
    
    // target 에 들어갈 숫자를 랜덤으로 생성해준다
    srand((unsigned)time(NULL));
    target = rand() % 100 + 1;
    
    /* YOUR CODE HERE */
    return 0;
}
```
밑에다 계속 작성하시면 됩니다
파일 이름 : `week1_updown.c`

---

# 제약사항 + 제출기한
1~2번은 무조건 **완성**, 나머지 코딩 문제들은 **최소한 시도한 흔적**
제출 기한 : 7/11(화) 23:59:59
### 시간초과 or 미제출 시 벌금있습니다
### 소스 copy & paste 는 스터디 제명하겠습니다. 제발 하지마세요
#### 모르는 문제 질문 : 멘토, 친구, 구글을 통하여!

---

# 제출방법
다음의 파일을 모두 포함한 디렉토리 `week1_hw` 생성 :
- `vimtutor_<이름>.txt`
- baekjoon 회원가입한 스크린샷
- `week1_div.c`
- `week1_triangle.c`
- `week1_units.c`
- `week1_star.c`
- `week1_updown.c`

`week1_hw` 디렉토리로 이동 후, 다음 명령어 실행 : 
`zip week1_hw.zip ./*`
zip 파일을 이메일로 보내기 : bisschoi9541@gmail.com 으로!

	
