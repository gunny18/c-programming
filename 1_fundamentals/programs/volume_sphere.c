#include <stdio.h>

#define VOLUME_MULT 4.0f / 3.0f
#define PI 3.143

int main(void)
{
    int r;

    printf("Enter radius integer: ");
    scanf("%d", &r);

    float volume = VOLUME_MULT * PI * r * r * r;

    printf("Volume is %.2f\n", volume);
    return 0;
}