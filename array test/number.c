#include <stdio.h>

int main()
{

    int arr[] = {4, 2, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp, j, i, sum = 0;

    printf("Array Value: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("Sorted Value: ");

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j]) //! check number if higher
            {
                temp = arr[i]; //! store
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }

    
    

    return 0;
}