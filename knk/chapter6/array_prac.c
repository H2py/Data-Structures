#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false,};

    for (int i = 0; i <= sizeof(digit_seen) / sizeof(digit_seen[0]); i++) {
        printf("%d", i);
    }

    int digit;
    long n;

    printf("Enter a number");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0) {
        printf('repeated digit \n');
    } else {
        printf('No repeated digit \n');
    }

    return 0;
}