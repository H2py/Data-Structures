#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;

    printf("Enter height of box: ");
    scanfs("%d", &height);
    printf("Enter height of box: ");
    scanfs("%d", &length);
    printf("Enter height of box: ");
    scanfs("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions : %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches) : %d\n", volume);

    return 0;
}