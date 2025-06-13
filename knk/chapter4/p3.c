#include <stdio.h>
int main(void)
{
    int grade;
    printf("Enter grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Error");
        return 1;
    }

    int first = grade / 10;

    switch(first)
    {
        case 10:
        case 9:
            printf("Letter grade: %c\n", 'A');
            break;
        case 8:
            printf("Letter grade: %c\n", 'B');
            break;
        case 7:
            printf("Letter grade: %c\n", 'C');
            break;
        case 6:    
            printf("Letter grade: %c\n", 'D');
            break;
        default :
            printf("Letter grade: %c\n", 'F');
            break;
    }       
    

    return 0;
}







/*

2. The following program fragments illustrate the logical operators. Show the output produced
by each, assuming that i, j, and k are int variables.
Section 5.2
w
(a) i = 10; j = 5;
printf("%d", !i < j);

1

(b) i = 2; j = 1;
printf("%d", !!i + !j):

1

(c) i = 5; j = 0; k =-5;
printf("%d", i && j || k);

1

(d) i = 1; j = 2; k = 3;
printf("%d", i <j || k);

1

*3. The following program fragments illustrate the short-circuit behavior of logical expressions.
Show the output produced by each, assuming that i, j, and k are int variables.

(a) i = 3; j = 4; k = 5
printf("%d ", i < j || ++j < k);
printf("%d %d %d", i, j, k);

1
3 5 5 -> 3 4 5 (첫 조건이 참이면 다음 실행 x)

(b) i = 7; j = 8; k = 9;
printf("%d ", i - 7 && j++ < k);
printf("%d %d \d", i, j, k);

0
7 9 9 -> 7 8 9 위랑 동일

(c) i = 7; j = 8; k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d", i, j, k);

0
7 8 9 -> 8 8 9 대입 연산이기 때문에

(d) i = l; j = 1; k = 1;
printf("%d ", ++i || ++j && ++k) ;
printf("%d %d %d", i, j, k);

1
2 2 2 -> 2 1 1

*4. Write a single expression whose value is either -1, 0, or +1, depending on whether i is less
than, equal to, or greater than j, respectively.

(i < j) ? -1 : ((i > j) ? 1 : 0)

*5. Is the following if statement legal?
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");

Q. If so, what does it do when n is equal to 0?

A. It's gonna be always print "n is between 1 and 10" because n >= 1 expression's return value is 1 or 0 and 
that is always less than 10 so, this expression is always true.

8.
if (n == 1-10)
printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 5?

nothing happen

10.
What output does the following program fragment produce? (Assume that i is an integer
variable.)
i = 1;
switch (i % 3)
{
case 0: printf("zero");
case 1: printf ("one");
case 2: printf("two");
}

output : "onetwo"

*/