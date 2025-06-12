#include <stdio.h>
#include <stdbool.h>

int main(void){
    char c1, c2, c3;

    printf("Enter a three-digit number: ");
    scanf("%s %s %s", &c1, &c2, &c3);

    printf("Ther reversal is: %s%s%s", c3, c2, c1);

    bool flag = true;
    
    return 0;
}