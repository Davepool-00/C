#include <stdio.h>
#include <math.h>
#define cube 3
#define volume_formula 4
#define PI 3.14
int main()
{

    float pound, feet, feet_cubed, volume, g_specific_fluid, float_bouyancy;

    printf("Enter weight in pounds: \n");
    scanf("%f", &pound);

    printf("Enter radius in feet: \n");
    scanf("%f", &feet);

    volume = volume_formula * PI * feet * feet * feet / 3;
    g_specific_fluid = 62.4 / (pow(feet, cube));
    float_bouyancy = volume * g_specific_fluid;
   

    if (float_bouyancy >= pound)
    {
        printf("It will not sink");
    }
    else
    {
        printf("It will sink");
    }
    return 0;
}
