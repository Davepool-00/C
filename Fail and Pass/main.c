#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade;
    printf("Enter grade: ");
    scanf("%f", &grade);

    if (grade >= 60){
    if (grade <= 100){
        printf("You Passed");

    }} else {
        printf("You Failed");
    }

    return 0;
}
