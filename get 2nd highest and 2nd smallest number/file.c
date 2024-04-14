/**
 * C program to find second largest number in an array
 */

#include <stdio.h>
#include <limits.h> // For INT_MIN

#define MAX_SIZE 1000     // Maximum array size 

int main()
{
    int arr[MAX_SIZE], size, i;
    int max1, max2, min1, min2;

    /* Input size of the array */
    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    /* Input array elements */ 
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = INT_MIN;
    min1 = min2 = INT_MAX;

    /*
     * Check for first largest and second
     */
    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    for (i = 0 ; i < size; i++)
    if (arr[0] < arr[1]) {
        min1 = arr[0];
        min2 = arr[1];
    }
    else {
      min1 = arr[1];
      min2 = arr[0];
    }
    for (i = 2; i < size; i++) {
        if (arr[i] < min1) {
        min2 = min1;
        min1 = arr[i];
        }
        else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }
    printf("First largest = %d\n", max1);
    printf("Second largest = %d\n", max2);
    printf("First smallest = %d\n", min1);
    printf("Second smallest = %d\n", min2);

    return 0;
}