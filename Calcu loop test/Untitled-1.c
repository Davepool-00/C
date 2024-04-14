#include <stdlib.h>
#include <stdio.h>

int main()
{
    char operation, ask;
    float number_1, number_2;

    do
    {
        printf("[1] Multiplication\n");
        printf("[2] Division\n");
        printf("[3] Addition\n");
        printf("[4] Subtraction\n");

        printf("Select your operator: ");
        scanf("%c", &operation);

        printf("Enter first number: ");
        scanf("%f", &number_1);
        printf("Enter second number: ");
        scanf("%f", &number_2);

        switch (operation)
        {
        case '1':
            printf("%.2f * %.2f = %.2f \n", number_1, number_2, number_1 * number_2);
            break;

        case '2':
            printf("%.2f / %.2f = %.2f \n", number_1, number_2, number_1 / number_2);
            break;

        case '3':
            printf("%.2f + %.2f = %.2f \n", number_1, number_2, number_1 + number_2);
            break;

        case '4':
            printf("%.2f - %.2f = %.2f \n", number_1, number_2, number_1 - number_2);
            break;

        default:
            printf("Error! operator is not correct");
        }

        
        printf("To compute another problem enter [Y] and enter any letter to stop \n");
        scanf("%c", &ask);
        fflush stdin;
    } while ((ask == 'Y') || (ask == 'y'));
    return 0;
}
