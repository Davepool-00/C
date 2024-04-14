#include <stdio.h>
int main()
{

    char arr1[10], arr2[10];
    int length, i, j;
    length = 0;


    printf("Enter text for first array: ");
    for (i = 1; i <= 10; i++)
    {
        scanf("%c", &arr1[i]);
    }

  /*  printf("Enter text for second array: ");
    for (i = 0; i <= 10; i++)
    {
        scanf("%c", &arr2[i]);
    }
    puts(arr1);
    /*
        while (arr1[length] != '\0') { ++length;}

        for (j = 0; arr2[j] != '\0'; ++j,++length)

        {arr1[length] = arr2[j];}

        arr1[length] = '\0';

        printf("New word is: ");
        puts(arr1);
    */
    return 0;
}