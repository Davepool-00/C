#include <stdio.h>
int main()
{
    int n;            // To input how many set of number to be entered
    int order_number; // To count the numbers being entered
    int length;       // To count how many numbers in the array to be used in the last print
    int max;          //  computations later in last print
    float num[100];
    float average;
    float sum;
    sum = 0;


    printf("Enter how numbers to be counted: ");
    scanf("%d", &n); // asks the user how many numbers to be entered

    while (n > 100 || n < 1)
    {
        printf("The entered number could not handle 100 above or below 1\n"); // shows if the user enters below 1 and above 100
        printf("Please enter a number again: ");                              // asks the user to enter a number again
        scanf("%d", &n);                                                      // asks the user how many numbers to be entered
    }

    for (order_number = 0; order_number < n; ++order_number) // loop syntax for counting numbers being entered
    {
        printf("%d. Enter number: ", order_number + 1); // prints the counting number being entered
        scanf("%f", &num[order_number]);                // asks the user for a number then store to the array
        sum += num[order_number];                       // adds all the number from the array
    }

    average = sum / n; // computes the average by adding a group of numbers and then dividing by the count of those numbers.
    printf("The average is %.2f\n", average);

    max = num[0];
    for (int i = 1; i < n; i++) // computation on finding the highest number in the array using loop 
    {
        if (num[i] > max)
            max = num[i];
    }
    printf("The largest number in the array is %d\n", max);

    return 0;
}