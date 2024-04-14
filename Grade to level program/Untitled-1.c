#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grade;

    printf("Enter number: \n");
    scanf("%d", &grade);
    if (grade >= 101)
    {
        printf("Please enter only number 0 to 100");
    }
    else if (grade >= 90)
    {
        printf("A");
    }
    else if (grade >= 80)
    {
        printf("B");
    }
    else if (grade >= 70)
    {
        printf("C");
    }
    else if (grade >= 60)
    {
        printf("D");
    }
    
    else
    {
        printf("F");
    }

    return 0;
}