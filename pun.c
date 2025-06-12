#define INCHES_PER_ROUND (166)
#include <stdio.h>

int main(void)
{
    printf("To C, or not to C : that is the question. \n");
    
    return 0;
}

// #include는 표준 입출력 라이브러리에 대한 정보를 첨가하기 위해 필요한 줄이다
// 실행되는 줄은 Main에 존재한다 -> main이란 무엇인가?
// return 0;는 프로그램이 종료될 때 운영체제 0이라는 값을 넘긴다

// #으로 시작하는 directive로 알려진 지시를 먼저 따른다

// c 컴파일러는 cc라고 불리고, 이를 컴파일하기 위해서는 Cc pun.c를 사용한다
// 실행 가능한 파일을 a.out이라는 형태로 만들어진다 cc -o pun pun.c

// 지시자 : 컴파일 직전, 전처리기에 의해 수정된다
// 함수는 procedure나 Subroutine과 비슷하다
// 함수는 사용자가 직접 제작한 함수와 라이브러리에서 제공하는 라이브러리 함수가 존재한다

// main 함수는 프로그램이 종료 될 때 운영체제에 상태 코드를 반환한다 -> 그 이유는?
// int main(void)에서 int는 정수값을 반환한다는 의밍고, Void는 MAIN가 입력값을 요구하지 않을 때 사용한다


// return 0;는 2가지 효과가 잇다
// 1. main 함수를 종료시킨다
// 2. 0이라는 값을 반환한다 => 일반적으로 프로그램 종료를 의미한다
// c 언어는 구문을 구분할 때 보통, 세미콜론을 사용하는데, 어디서 끝나는지 알렺ㄴ다
// 지시자는 반대로 한 줄 짜리기 때문에 굳이 세모콜론을 사용하지 않는다


// 모든 변수들은 반드시 형type을 가진다. 어떤 데이터를 저장할 것이냐이다
// float은 int를 이용한 연산보다 더욱 느리다

// 변수들은 반드시 선언되어야 사용할 수 있다
// 변수의 타입을 선언하고, 이름을 선언하면 된다
// 동시에 선언이 가능하다

int height, length, width, volume;
float profit, loss;


// 할당
// 변수는 할당함으로써 값을 가진다


int main(void){
    int h = 20;
    float profit = 2150.48f;

    printf("Height: %d\n", h);
    printf("Profit : %.2f\n", profit);

    return 0;
}

// 만약 소수점을 출력하고 싶으면 %랑 f 사이에 .p를 적어주면 된다


// 초기호
// 기본 설정값이 없는 변수에는 값을 초기화하는 과정을 진행해주어야한다