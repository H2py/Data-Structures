#include <stdio.h>

#define FREEZING_PT (32.0f)
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit;
    float celsius;

    printf("Enter your Fahrenheit temperature: ");
    scanfs("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equvialent : %.1f\n", celsius);

    return 0;
}