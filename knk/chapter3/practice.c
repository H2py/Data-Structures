#include <stdio.h>

int main(void)
{
    int item, month, day, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%6.2f\t\t%02d/%02d/%04d\n", item, unit_price, month, day, year);

    return 0;
}