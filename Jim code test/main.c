#include <stdio.h>
#include <stdlib.h>

int main()
{
    int set_one, set_two, set1_one, set1_two;

    printf("Enter X and Y for set A \n");
    scanf("%d%d", set_one, set_two);

    if (set_one == 0){
        printf("Program Terminated");
        end(0);
    }
    else (set_two == 0) {
        printf("Program Terminated");
        end(0);
    }


    return 0;
}
