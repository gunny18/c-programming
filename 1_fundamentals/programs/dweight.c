#include <stdio.h>

int main(void)
{
    int height = 8;
    int length = 12;
    int weight = 10;

    int volume = height * length * weight;
    int dweight = (volume + 165) / 166;

    printf("The dimensional weight is: %d\n", dweight);
    return 0;
}