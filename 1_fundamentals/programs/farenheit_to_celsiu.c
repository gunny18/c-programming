#include <stdio.h>

#define SCALE_FACTOR (5.0f / 9.0f)
#define FREEZING_PT 32.0f

int main(void)
{
    float f_temp;
    printf("Farenheit temp: ");
    scanf("%f", &f_temp);

    float c_temp = (f_temp - FREEZING_PT) * SCALE_FACTOR;
    printf("The celsius temp is %.1f\n", c_temp);
    return 0;
}