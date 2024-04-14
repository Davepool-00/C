#include <stdio.h>

int main()
{

    int value_one, value_two;
    char ask;

    do
    {
        printf("Enter first number: ");
        scanf("%d", &value_one);
        printf("Enter second number: ");
        scanf("%d", &value_two);

        printf("The remainder of %d and %d is %d \n", value_one, value_two, value_one % value_two);

        fflush(stdin);

        printf("Please enter [Y] or [y} to continue and input any letter to stop \n");
        scanf("%c", &ask);

    } while ((ask == 'Y') || (ask == 'y'));

    return 0;
}