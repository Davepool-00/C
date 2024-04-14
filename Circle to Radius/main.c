#include <stdio.h> <math.h>
#define pi 3.14

int main(){
    float area, radius;

    printf("Enter the area of the circle: ");
    scanf("%f", &area);

    radius = sqrt(area/pi);

    printf("\nThe radius of the circle is %f", radius);

    return 0;
}
