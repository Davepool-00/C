#include <stdio.h>
int main()
{
    int input, factor;
    char ask;

    do
    {
        printf("Enter a number to  find largest factor: ");
        scanf("%d", &input);

        printf("The largest factor is %d \n", input);
            for (factor = 1; factor <= input; factor++)
            {
                if (input %  factor == 0)
                {
                    printf("%d \n", factor);
                }
                
            }
            
        
        fflush(stdin);

        printf("Would you like to continue? Press Y-Yes and No-No \n");
        scanf("%c", &ask);

    } while ((ask == 'Y') || (ask == 'y'));

    
    //((ask == 'Yes') || (ask == 'YES' ) || (ask == 'Y')|| (ask == 'y'))

    return 0;
}