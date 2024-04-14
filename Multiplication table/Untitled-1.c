#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number_one, number_two;
    printf("Multiplication table\n\n");
    for( number_one = 1; number_one <= 10; number_one++){
        for(number_two = 1; number_two <= 10; number_two++){
                printf("%d\t", number_one * number_two);
    }
    printf("\n");
    }
    return 0;
}