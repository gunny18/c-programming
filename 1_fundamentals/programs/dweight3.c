#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int height;
    int length;
    int weight;

    printf("Height: ");
    scanf("%d", &height);
    printf("Length: ");
    scanf("%d", &length);
    printf("Weight: ");
    scanf("%d", &weight);

    int volume = height * length * weight;
    int dweight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("The dimensional weight is: %d\n", dweight);
    return 0;
}