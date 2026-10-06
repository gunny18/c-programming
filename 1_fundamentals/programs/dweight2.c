#include <stdio.h>

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
    int dweight = (volume + 165) / 166;

    printf("The dimensional weight is: %d\n", dweight);
    return 0;
}