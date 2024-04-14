#include <stdio.h>
#include <stdlib.h>

int main()
{

    float ounce, tons;

    printf("Enter weight of package: ");

    scanf("%f", &ounce);

    tons = ounce / 32000;

    printf("The metric tons would be %f \n", tons);
    printf("Ounce: %f", ounce);


    return 0;
}
