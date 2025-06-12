/*
Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:

Enter a two-digit number: 283
The reversal is: 382

Read the number using d, then break it into two digits. Hint: If n is an integer, then n% 10
is the last digit in n and n / 10 is n with the last digit removed.
*/

#include <stdio.h>
int main(void){
    int digit, result;

    printf("Enter a three-digit number: ");
    scanf("%d", &digit);

    result = ((digit % 100) % 10) * 100 + ((digit % 100) / 10) * 10 + digit / 100;
    printf("Ther reversal is: %d", result);

}

#include <stdio.h>
int main(void){
    char c1, c2, c3;

    printf("Enter a three-digit number: ");
    scanf("%s %s %s", &c1, &c2, &c3);

    printf("Ther reversal is: %s%s%s", c3, c2, c1);

    return 0;
}