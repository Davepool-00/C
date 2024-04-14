#include <stdio.h>
#include <stdbool.h>

int main()
{

    bool ask = true;
    int sum = 0, value;

    printf("Enter any negative number to stop\n");
    printf("Enter any positive number to add\n");

    while (ask)
    {
        scanf("%d", &value);
    }
    if (value < 0)
    {
        ask = false;
    }
    else
    {
        sum = sum + value;
        printf("Sum is %d", sum);
    }
    return 0;
}