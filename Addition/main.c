#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, num5, sum;
    printf("Enter 5 numbers\n");


    scanf("%f%f%f%f%f", &num1, &num2, &num3, &num4, &num5);


    sum = num1 + num2 + num3 + num4 + num5;


    printf("The Sum is %2.f",sum);
    return 0;
}
