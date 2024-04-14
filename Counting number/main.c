// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int number, input, default_num;

    printf("Enter number to counted: ");

    scanf("%d", &input);

    for ( default_num = 1; number <= input; ++number)

    {
        printf("%d ", number);
    }

    return 0;
}
