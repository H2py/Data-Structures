/*

1. Modify Programming Project 7 from Chapter 2 so that it includes the following function:

void pay_amount (int dollars, int *twenties, int *tens,
int *fives, int *ones);
The function determines the smallest number of $20, $10, $5, and $1 bills necessary to pay
the amount represented by the do1lars parameter. The twenties parameter points to a
variable in which the function will store the number of $20 bills required. The tens,.
fives, and ones parameters are similar.


1.
Suppose that the following declarations are in effect:

int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a [1], *q = &a [5];

(a) What is the value of * (p+3)?
(b) What is the value of * (q-3)?
(c) What is the value of q - р?
(d) Is the condition p < q true or false?
(e) Is the condition *p < *q true or false?

(A) 14 (B) 34 (C) 4 (D) TRUE (E) FALSE

2. Suppose that high, low, and middle are all pointer variables of the same type, and that
low and high point to elements of an array. Why is the following statement illegal, and
how could it be fixed?

middle = (low + high) / 2;


*/
#include <stdio.h>
int global = 0;

int function() {
    global++;
    return 0;
}

int main() {
    global = 10;
    function();
    printf("%d \n", global);
    return 0;
}

// 지역 변수는 함수가 종료될 때 파괴되지만, 전역변수는 프로그램이 종료 될 때 파괴된다. data segment에 할당되기 때문
// 전역변수는 정의 시 자동으로 0으로 초기화 된다
// 정으된 변수는 자신이 정의된 지역을 빠져나갈 때 파괴된다. 자신이 정의된 위치를 포함하고 있는 {} 를 벗어날 때 변수가 사라짐

#include <stdio.h>
int* function() {
    int a = 2;
    return &a;
}

int main() {
    int* pa = function();
    printf("%d \n", *pa);
}


// 위 함수는 어떻게 동작할까?-> a는 지역변수이기 때문에 *pa로 function()의 스택 영역에 할당된 a가 정의된 지역을
// 사용할 수 없다

// 지역을 빠져나가도 파괴되지 않는 변수는 없을까??

#include <stdio.h>

int* function() {
    static int a = 2;
    return &a;
}

int main() {
    int* pa = function();
    printf("%d \n", *pa);
}

// function을 여러번 호출하면 a가 여러번 2로 초기화 되냐? -> 아님
// function을 실행하지 않더라도 a라는 정적 변수는 이미 정의되어 있는 상태

// 스택에는 지역 변수가 위치해있고, 힙 아래 영역에는 데이터 영역으로 지칭되며 전역 변수와 정적 변수(static)이 위치
// 데이터 영역 -> 전역 변수 및 정적 변수 할당 -> 프로그래 시작과 동시에 할당되며, 종료되어야 메모리에서 소멸
// 스택 영역 -> 지역 변수 및 매개변수가 저장되는 영역 -> 함수 호출 완료되면 사라짐
// 힙 영역 -> 프로그래머가 관리하는 메모리 영역, 프로그래머의 필요에 의해 런타임 시점에 메모리 공간 할당 및 소멸

#include <stdio.h>

void add_one(int* p) {
    (*p) += 1;
}

int main() {
    int a = 1;
    printf("Before : %d\n", a);
    add_one(&a);
    printf("After : %d\n", a);
}

#include <stdio.h>
int read_char(void *p, int byte);
int main() {
    int arr[1] = {0x12345678};

    printf("%x \n", arr[0]);
    read_char(arr, 4);
}

int read_char(void*p, int byte) {
    do {
        printf("%x \n", *(char *)p);
        byte--;

        p = (char *)p + 1;
    } while (p && byte);

    return 0;
}