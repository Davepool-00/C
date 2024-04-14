#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(){
    float radius, diameter, circumference, area;

    printf("\n Enter a radius: ");
    scanf("%f",&radius);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\n Area = %.2f\n", area);
    printf("\n Circumference = %.2f\n", circumference);
    printf("\n Diameter = %.2f\n", diameter);
    printf("\n  PI = %.2f \n", PI);

    return 0;
}
