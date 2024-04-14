#include <stdio.h>

int array_sum(int arr[], int size, int index);
int Max_num(int arr[], int size, int index, int max);
int Min_num(int arr[], int size, int index, int min);

//! Recursion to add the sum in the array
int array_sum(int arr[], int size, int index)
{
    if (index < size)
    {
        return arr[index] + array_sum(arr, size, index + 1);
    }
    return 0;
}

//!! Find the max number in the array using Recursion
int Max_num(int arr[], int size, int index, int max)
{
    if (index < size)
    {
        max = (arr[index] > max) ? arr[index] : max;
        return Max_num(arr, size, index + 1, max);
    }
    return max;
}

//!! Find min number in the array using Recursion
int Min_num(int array[], int size, int index, int min)
{
    if (index < size)
    {
        min = (array[index] < min) ? array[index] : min;
        return Min_num(array, size, index + 1, min);
    }
    return min;
}

int main()
{
    int size;

    //!! Set size to the array
    printf("Enter size for the array: ");
    scanf("%d", &size);

    //!! Enter value to the array
    int arr[size];
    printf("Enter value for the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) //** Show the entered value in the array
    {
        printf("%d ", arr[i]);
    }

    //!! add the sum of the array
    int sum = array_sum(arr, size, 0);
    printf("\nSum: %d\n", sum);

    //!! Find max number and show
    int max = Max_num(arr, size, 0, arr[0]);
    printf("Maximum value in the array: %d\n", max);

    //!! Find  min number and show
    int min = Min_num(arr, size, 0, arr[0]);
    printf("Minimum value in the array: %d\n", min);

    return 0;
}
