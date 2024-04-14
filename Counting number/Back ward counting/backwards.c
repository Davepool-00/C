#include <stdio.h>

int main()
{
    int number, begin, input;

    begin = 0;

    printf("Enter number to be counted backwards: ");
    scanf("%d", &input);
    for (number = input; number >= begin; number--)

        printf("%d ", number);

    return 0;
}