#include <stdio.h>
#include <string.h>

int main()
{
    // int text_reverse[5] = {1,2,3,4,5};
    int get_num[1000];
    int sizee = sizeof(get_num) / sizeof(get_num[0]);
    int i, sum = 0, size_arr;

    printf("Enter size for the array maximum of 1000: ");

    scanf("%d", &size_arr);

    for (i = 0; i < size_arr; i++)
    {
        printf("Number value of %d : ", i+1);
        scanf("%d", &get_num[i]);
    }

    
    
    for ( i = 0 ; i < size_arr; i++)
    {
        sum +=  get_num[i];
    //?? printf("%d", get_num[i]); print check the value of the array get num
    }
    printf("The total sum number is: %d", sum);
    
    return 0;
}