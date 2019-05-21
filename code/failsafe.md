



Fail safe
-----------


int num1 = 0;
int num2 = 1;

if (num1 && num2)       // 첫 번째 값이 거짓이면 두 번째 값은 검사하지 않고 거짓으로 결정
    printf("참\n");
else
    printf("거짓\n");   // 거짓 출력

num1 = 1;
num2 = 0;
if (num1 || num2)     // 첫 번째 값이 참이면 두 번째 값은 검사하지 않고 참으로 결정
    printf("참\n");   // 참 출력
else 
    printf("거짓\n");
참고 | 단락 평가의 활용
&& 연산자의 단락 평가를 활용하면 문제가 발생하는 코드를 미리 예방할 수 있습니다.
int num1 = 0;
int num2 = 10;

if ((num1 != 0) && (num2 / num1) < 20)    // num1이 0이면 나눗셈 연산을 하지 않음.
    printf("참\n");
else
    printf("거짓\n");




Double add
-----------

#include <stdio.h>

int main()
{
    for (int i = 0, j = 0; i < 10; i++, j += 2)    // i는 1씩 증가, j는 2씩 증가
    {
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}
