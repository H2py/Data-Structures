#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    int message_length = 0;

    printf("Enter a message: ");
    while (getchar() != '\n') {
        ++message_length;
    }
    printf("Your message was %d character(s) long.\n", message_length);

    return 0;
}


/*
8. What output does the following for statemet produce?

for (i = 10; i >= 1; i /=2)
    printf("%d", i++);

10 5 3 2 q

Rewrite the following loop so that its body is empty:
for (n = 0; m > 0; n++)
m /= 2;

It's really hard to convert float to int

typedef's con increment readability

typedef float dollars_t;
dollars_t cash_in, cash_out;

we easily notice that cash_in and cash_out variable will get dollars

*/